#include <stdio.h>
#include <conio.h>

main()
{
    int C=0,A=0,S,P;
    
    printf("Programa que halla la suma de los multiplos de 4 comprendidos entre 1 y 100 y su promedio");
    printf("\nPresione una tecla para continuar...");
    getch();
    
    while(C<=100)
    {
        S=S+C;
        A=A+1;
        printf("\n%d",C);
        C=C+4;
    }
    
    P=S/A;
    printf("\nSumatoria: %d",S);
    printf("\nPromedio: %d",P);
    getch();
}
