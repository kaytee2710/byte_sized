#include <stdio.h>
#include <stdlib.h>
// png library




/*
STEPS TO GO THROUGH:
- read the png file
- convert to grayscale (simplifies the conversion process)
- map grayscale to ASCII based on greyscale intensity
- output the ASCII art!
*/

// Unsigned char = includes values from 0 to 255 (for png images)

/*
TO-DO:
- convertToGrayscale(image, width, height)
- convertImageToASCII(image, width, height)
//HIIIII

*/

const char *asciiChars = "@%#*+=-:. "; // Define the ASCII characters we're using for the image

// Converts the .png image to greyscale to simplify the conversion process
void convertToGrayscale(unsigned char *image, int width, int height) {
    printf("Hello world\n");


}

// Convert the now grayscale image to ASCII characters
void convertImageToASCII(unsigned char *image, int width, int height) {



}



// Load in the image from command line and call the necessary functions
int main(int argc, char *argv[]) {

    unsigned char *image = argv[2]; // Set the second command line argument to the image we're converting




    // Incorrect number of arguments in the command line
    if(argc < 2) {
        printf("Missing the .png file for input.\n");
        return -1;
    }


    // convertToGrayscale(image, width, height)
    // convertImageToASCII(image, width, height)





    return 0;
