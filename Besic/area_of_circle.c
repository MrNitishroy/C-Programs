#include <stdio.h>

void main()
{
    float pi = 3.141;
    float area = 0, redius, height, Volum = 0;
    printf("\n\nEnter Radius of Circle:");
    scanf("%f", &redius);
    printf("\nEnter Height of the cilender:");
    scanf("%f", &height);

    // Area of Circle
    area = redius * redius * pi;
    printf("\n\nArea Of Circle is %f", area);

    //Volume of cylender
    Volum = pi * redius * redius * height;
    printf("\nVolume of Of Cyclender:%f\n\n", Volum);
}