#include <stdio.h>
#include <conio.h>

main()
{
    int S=0,N=0,M,P=0;
    
    printf("Programa que haya la suma de los primeros 50 numeros pares y su promedio");
    printf("\nPresione una tecla para continuar...");
    getch();
    
    while(P<=50)
    {
        S=S+N;
        P=P+1;
        printf("\n%d",N);
        N=N+2;
    }
    
    M=S/50;
    
    printf("\nSumatoria: %d\n",S);
    printf("Promedio: %d",M);
    getch();
}
    
