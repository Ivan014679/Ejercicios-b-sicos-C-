#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
    int A,B,C;
    double X1,X2;
    
    printf("Y=AX^2+BX+C");
    
    printf("\nIngrese un numero A: ");
    scanf("%d",&A);
    printf("\nIngrese un numero B: ");
    scanf("%d",&B);
    printf("\nIngrese un numero C: ");
    scanf("%d",&C);
           
    X1=(-B+sqrt(pow(B,2)-(4*A*C)))/(2*A);
    X2=(-B-sqrt(pow(B,2)-(4*A*C)))/(2*A);
    
    printf("\nSOLUCIONES");
    printf("\n\nX1=%g",X1);
    printf("\nX2=%g",X2);
    
    getch();
}
