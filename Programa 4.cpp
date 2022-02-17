#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.1416

main()
{
    float A,R;
    
    printf("Programa que calcula la superficie de una circunferencia");
    printf("\nDigite el radio: ");
    scanf("%f",&R);
    
    A=PI*pow(R,2);
    
    printf("Area: %f",A);
    getch();
}
