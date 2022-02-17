#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
    int P=0,S=0,N=32;
    
    printf("LOS CUADRADOS DE LOS NUMEROS PARES ENTRE 32 Y 300 Y SU SUMATORIA\n");
    
    while(N<=300)
    {
        P=pow(N,2);
        S=S+P;
        printf("\n%d^2=%d",N,P);
        N=N+2;
    }
    
    printf("\nSUMATORIA: %d",S);
    getch();
}
