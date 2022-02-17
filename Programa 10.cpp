#include <stdio.h>
#include <conio.h>

main()
{
    int N=0,C=0,S,P;
    
    printf("Programa que halla la suma de los 50 primeros numeros pares y su promedio");
    printf("\nPresione una tecla para continuar...");
    getch();
    
    for(N;C<=50;C++)
    {
        N=N+2;
        S=S+N;
    }
    P=S/50;
    
    printf("\nSumatoria: %d\nPromedio: %d",S,P);
    getch();
}
