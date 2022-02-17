#include <stdio.h>
#include <conio.h>

main()
{
    int Q=5;
    
    printf("Programa que muestra los multiplos de 5 comprendidos entre 1 y 500");
    printf("\nPresione una tecla para continuar...");
    getch();
    
    while(Q<=500)
    {
        printf("\n%d",Q);
        Q=Q+5;
    }
    getch();
}
