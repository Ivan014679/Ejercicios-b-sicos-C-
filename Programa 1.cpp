#include <stdio.h>
#include <conio.h>

main()
{
    int A,M,D;
    
    printf("Programa que convierte una edad en anos a meses y dias");
    printf("\nDigite la edad en anos: ");
    scanf("%d",&A);
    
    M=A*12;
    D=A*365;
    
    printf("Edad en meses: %d",M);
    printf("\nEdad en dias: %d",D);
    
    getch();
}
