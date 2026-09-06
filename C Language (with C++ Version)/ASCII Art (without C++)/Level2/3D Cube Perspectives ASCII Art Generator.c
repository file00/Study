// [Title] 3D Cube Perspectives ASCII Art Generator
#include <stdio.h>

int main() {
    
    // Prints 3D box perspectives using ASCII art.
    // Note: Backslashes ('\') are escape characters in C, so they must be written as '\\' to display correctly.
    
    printf("  .+------+     +------+     +------+     +------+     +------+.\n");
    printf(" .' |    .'|    /|     /|     |      |     |\\     |\\    |`.    | `.\n");
    printf("+---+--+'  |   +-+----+ |     +------+     | +----+-+   |  `+--+---+\n");
    printf("|   |  |   |   | |    | |     |      |     | |    | |   |   |  |   |\n");
    printf("|  ,+--+---+   | +----+-+     +------+     +-+----+ |   +---+--+   |\n");
    printf("|.'    | .'    |/     |/      |      |      \\|     \\|    `. |   `. |\n");
    printf("+------+'      +------+       +------+       +------+      `+------+\n");

    return 0;
}