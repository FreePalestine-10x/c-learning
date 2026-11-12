#include <stdio.h>
#define INCHES_PER_POUND 166
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void) {
    float farenheit, celcius;

    printf("Enter Farenheit temperature: ");
    scanf("%f", &farenheit);

    celcius = (farenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Temperature in Celcius- %f", celcius);

    return 0;
}

//Syntax for Taking inputs:
//scanf(%d, &i) -> for scanning an int and storing it in "i"


// int height, length, width;
//     int volume, weight;

//     printf("Enter Height: ");
//     scanf("%d", &height);
    
//     printf("Enter Length: ");
//     scanf("%d", &length);

//     printf("Enter Width: ");
//     scanf("%d", &width);

//     volume = height*width*length;
//     weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

//     printf("Volume: %d\n", volume);
//     printf("Dimensional Weight: %d\n", weight);
