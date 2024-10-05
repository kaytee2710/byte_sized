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


*/

const char *asciiChars = "@%#*+=-:. "; // Define the ASCII characters we're using for the image

// Reads in the png file
unsigned char* readPngFile(char* fileName, int *width, int *height) {
    FILE *fp = fopen(fileName, "rb"); // Create file pointer to read png file, open in binary mode


    if(fp == NULL) {
        printf("Error opening file.\n"); // Print file error
        return -1;
    } 

}

// Converts the .png image to greyscale to simplify the conversion process
void convertToGrayscale(unsigned char *image, int width, int height) {
    for(int y = 0; y < height; y++) {
        for(int x = 0; x < width; x++) {
            int index = (y * width * x) * 4; // Move through the pixels
            unsigned char red = image[index]; // Red values
            unsigned char green = image[index + 1]; // Green values
            unsigned char blue = image[index + 2]; // Blue values

            // Average the RBG values to get the greyscale value 
            unsigned char greyscaleValue = (red + green + blue) / 3; 

            // Assign the initial RGB values to the new greyscale values
            image[index] = greyscaleValue;
            image[index + 1] = greyscaleValue;
            image[index + 2] = greyscaleValue;

        }
    }
}

// Convert the now grayscale image to ASCII characters
void convertImageToASCII(unsigned char *image, int width, int height) {
    for(int y = 0; y < height; y++) {
        for(int x = 0; x < width; x++) {
            int index = (y * width * x) * 4; // Get the pixel value
            unsigned char greyscaleValue = image[index]; // Greyscale value

            int asciiIndex = (greyscaleValue * 9) / 255; // Convert greyscale (0 - 255) to ASCII index (0 - 9)
            printf("%c", asciiChars[asciiIndex]); // Print the corresponding ASCII characters
        }
         printf("\n");
    }
}



// Load in the image from command line and call the necessary functions
int main(int argc, char *argv[]) {

    int width, height;
    unsigned char *image = readPngFile(argv[1], &width, &height); // Set the second command line argument to the image we're converting




    // Incorrect number of arguments in the command line
    if(argc < 2) {
        printf("Missing the .png file for input.\n");
        return -1;
    }


    // convertToGrayscale(image, width, height)
    // convertImageToASCII(image, width, height)





    return 0;
}