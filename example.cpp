#include "../rainbow.h"


void twoRainbowsInSeries() { // printing 1 colour with 1 colour per line
    rainbow r;
    std::string s = "Hello, world!\n";

    
    r.init(15);                     // <-  rainbow of length 15 and loop of 30 will print
    for (int i = 0; i < 30; i++) { //      all colours from red to magenta *twice* on the y-axis
                                  //       30 lines / 15 colours = 2 rainbows
        r.print(s);               // <- prints the string s in one color (one color per line)
        r.next();                // <- makes the color different next iteration
                                //     (iterating the rainbow gradient)
    }
}


void multiColour() { // printing multiple colours per line example
    rainbow r;
    std::string s = "Hello, world!\n";


    r.init(30);                     // <- rainbow of length 30 and loop of 30 will print
    for (int i = 0; i < 30; i++) { //     all colours from red to magenta *once* on the y-axis
        r.print2d(s, 20);         // <- prints the string in a rainbow gradient
                                 //     with 20 colours per line
                                //      keep this number the same per line for best look
        r.next();              // <- makes the colour of the next line different
                             //     gives look of twisting the rainbow per line
    }
}


int main() {
    twoRainbowsInSeries();
    printf("\n\n\n");
    multiColour();
}
