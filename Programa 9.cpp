#include <stdio.h>
#include <conio.h>

main()
{
    int M=0,C=0;
    
    printf("Programa que escribe y cuenta los multiplos de 3 desde 1 hasta 100");
    printf("\nPresione una tecla para continuar...");
    getch();
    
    printf("\nLos multiplos de 3:");
    for(M=3;M<=100;M=M+3)
    {
        C=C+1;
        printf("\n%d",M);
    }
    printf("\nNumero de multiplos de 3: %d",C);
    
    getch();
}
