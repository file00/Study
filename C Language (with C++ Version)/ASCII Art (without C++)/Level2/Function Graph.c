// [Title] Function Graph
#include <stdio.h>
#include <math.h>

#define WIDTH 60
#define HEIGHT 20
#define PI 3.14159265

int main() {
    
    char grid[HEIGHT][WIDTH];
    int x, y;

    // 1. Initialize the grid with empty spaces
    for (y = 0; y < HEIGHT; y++) {
        for (x = 0; x < WIDTH; x++) {
            grid[y][x] = ' ';
        }
    }

    // 2. Draw X-axis and Y-axis into the grid buffer
    int xaxis = HEIGHT / 2;
    int yaxis = WIDTH / 2;

    for (x = 0; x < WIDTH; x++)  grid[xaxis][x] = '-'; // Horizontal X-axis
    for (y = 0; y < HEIGHT; y++) grid[y][yaxis] = '|'; // Vertical Y-axis
    grid[xaxis][yaxis] = '+';                         // Origin point (0,0)

    // 3. Calculate and plot the function f(x) = sin(x)
    for (x = 0; x < WIDTH; x++) {
        // Map grid column to a mathematical X value (-2*PI to +2*PI)
        double real_x = ((double)(x - yaxis) / yaxis) * (2.0 * PI);
        
        // Compute f(x)
        double real_y = sin(real_x);
        
        // Map mathematical Y value (-1.0 to +1.0) back to grid row index
        int grid_y = xaxis - (int)(real_y * (HEIGHT / 2 - 1));

        // Ensure the plotted point stays within grid boundaries
        if (grid_y >= 0 && grid_y < HEIGHT) {
            grid[grid_y][x] = '*';
        }
    }

    // 4. Render and print the grid to the console output
    for (y = 0; y < HEIGHT; y++) {
        for (x = 0; x < WIDTH; x++) {
            putchar(grid[y][x]);
        }
        putchar('\n');
    }

    return 0;
}
