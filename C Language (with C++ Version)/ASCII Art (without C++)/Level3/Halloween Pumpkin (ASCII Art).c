// Halloween Pumpkin (ASCII Art) - Level 3
// - Symmetry, proportional adjustments, multiple sections, modularized
// - Adjust 'H' to scale the pumpkin; features scale automatically.
//   Compile: gcc pumpkin.c -o pumpkin -lm

#include <stdio.h>
#include <math.h>

static void repeat_char(char c, int n) { for (int i = 0; i < n; i++) putchar(c); }
static int   clampi(int v, int lo, int hi){ if(v<lo) return lo; if(v>hi) return hi; return v; }
static int   oddify(int x){ return (x%2==0)? x+1 : x; }

// centered line helper
static void print_centered_line(int total_width, int content_width, char ch){
    int pad = (total_width - content_width) / 2;
    if (pad < 0) pad = 0;
    repeat_char(' ', pad);
    repeat_char(ch, content_width);
    putchar('\n');
}

static void print_stem(int total_width, int H){
    // Stem proportional to size
    int stem_h = (H >= 12) ? (H/4) : 2;
    int stem_w = oddify(clampi(H/4, 3, 7));
    for (int r = 0; r < stem_h; r++){
        print_centered_line(total_width, stem_w, '|');
    }
}

// Return half-width of ellipse at row y (0..H-1).
// Ellipse formula: (x/R)^2 + ((y - cy)/Ry)^2 <= 1
// We derive half-width along x: x = R * sqrt(1 - ((y - cy)^2 / Ry^2))
static int ellipse_half_width(int y, int H, int R){
    double cy  = (H - 1) / 2.0;       // vertical center
    double Ry  = (H) / 2.0;           // vertical radius
    double dy  = (y - cy);
    double v   = 1.0 - (dy*dy) / (Ry*Ry);
    if (v <= 0.0) return 0;
    double hw  = R * sqrt(v);
    int ihw    = (int)floor(hw + 0.5);
    return ihw;
}

int main(void){
    // ===== scale here =====
    int H = 16;                  // body height (try 12 ~ 24)
    // ======================

    // Overall width (2*R+1). Slightly wider than height for a pumpkin feel
    int R = (int)round(H * 1.2);             // horizontal radius
    int total_width = 2*R + 1;

    // Feature proportions
    int eye_row      = clampi((int)round(H * 0.35), 2, H-4);
    int eye_w        = oddify(clampi((int)round(R * 0.30), 3, R));   // triangle base width
    int eye_h        = clampi((int)round(H * 0.22), 2, H);           // triangle height
    int eye_offset_x = clampi((int)round(R * 0.45), eye_w/2 + 1, R-2);

    int nose_row     = clampi(eye_row + eye_h + 1, eye_row+1, (int)round(H*0.6));
    int nose_w       = oddify(clampi((int)round(R * 0.16), 3, R));
    int nose_h       = clampi((int)round(H * 0.16), 2, H);

    int mouth_row    = clampi((int)round(H * 0.72), 3, H-2);
    int mouth_h      = clampi((int)round(H * 0.18), 1, 4);
    int mouth_w      = oddify(clampi((int)round(R * 0.95), 5, R));   // wide smile
    int tooth_gap    = clampi((int)round(R * 0.20), 3, 8);           // spacing between teeth
    int tooth_w      = clampi((int)round(tooth_gap / 3.0), 1, 3);    // tooth width

    // 1) Stem
    print_stem(total_width, H);

    // 2) Body (ellipse) with carved features
    for (int y = 0; y < H; y++){
        int hw = ellipse_half_width(y, H, R);
        int line_w = 2*hw + 1;
        int pad = (total_width - line_w) / 2;
        repeat_char(' ', pad);

        for (int x = -hw; x <= hw; x++){
            char ch = 'O';  // pumpkin flesh

            // ---- Eye cutouts (isosceles triangles pointing down) ----
            // Left eye center near (-eye_offset_x, eye_row)
            // Triangle rule: inside if local_y in [0..eye_h-1] and |local_x| <= scaled base at that local_y
            // local_y downward from eye_row
            for(int ei = -1; ei <= 1; ei += 2){ // ei=-1 (left), +1 (right)
                int cx = ei * eye_offset_x;
                int ly = y - eye_row;
                int lx = x - cx;
                if (ly >= 0 && ly < eye_h){
                    // base shrinks as y increases (pointing down)
                    int base = eye_w - (2 * ly * eye_w) / eye_h; // linear taper
                    if (base < 1) base = 1;
                    int halfb = base / 2;
                    if (lx >= -halfb && lx <= halfb){
                        ch = ' '; // carve out
                    }
                }
            }

            // ---- Nose cutout (small inverted triangle) ----
            int lyN = y - nose_row;
            int lxN = x;
            if (lyN >= 0 && lyN < nose_h){
                int base = nose_w - (2 * lyN * nose_w) / nose_h;
                if (base < 1) base = 1;
                int halfb = base / 2;
                if (lxN >= -halfb && lxN <= halfb){
                    ch = ' ';
                }
            }

            // ---- Mouth cutout (curved-ish band with optional teeth) ----
            if (y >= mouth_row && y < mouth_row + mouth_h){
                // mouth horizontal radius scales with row thickness
                int mw = mouth_w;
                if (x >= -mw && x <= mw){
                    // Default carve
                    ch = ' ';

                    // Teeth: keep some pumpkin pixels as "teeth" at intervals
                    // Center tooth and symmetric repeats
                    int ax = x < 0 ? -x : x;
                    if ((ax % tooth_gap) < tooth_w){
                        // Place a tooth only near the top mouth row to look jagged
                        if (y == mouth_row){
                            ch = 'O';
                        }
                    }
                }
            }

            putchar(ch);
        }
        putchar('\n');
    }

    return 0;
}
