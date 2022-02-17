#include <stdio.h>
#include <conio.h>

main()
{
    int M=0,C=0,N;
    
    printf("Programa que escribe y cuenta los multiplos de 5 hasta N numero");
    printf("\nDigite un numero N: ");
    scanf("%d",&N);
    
    printf("Los multiplos de 5:");
    for(M=5;M<=N;M=M+5)
    {
        C=C+1;
        printf("\n%d",M);
    }
    printf("\nNumero de multiplos de 5: %d",C);
    
    getch();
}
