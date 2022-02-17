#include <stdio.h>
#include <conio.h>

main()
{
    int S=0,N=1,M,I=0;
    
    printf("Programa que haya la suma de los primeros 20 numeros impares y su promedio");
    printf("\nPresione una tecla para continuar...");
    getch();
    
    while(I<=20)
    {
        S=S+N;
        I=I+1;
        printf("\n%d",N);
        N=N+2;              
    }
    
    M=S/50;
    
    printf("\nSumatoria: %d\n",S);
    printf("Promedio: %d",M);
    getch();
}
