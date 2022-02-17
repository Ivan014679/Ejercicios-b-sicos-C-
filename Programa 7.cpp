#include <stdio.h>
#include <conio.h>

main()
{
    int N,P=0,C=0,V=0,D=0;
    
    printf("Programa que determina los N primeros numeros primos");
    printf("\nIngrese el numero N: ");
    scanf("%d",&N);
    
    for(P=1;P<=N;P++)
    {
        for(D=1;D<=P;D++)
        {
            if(P % D == 0)
            {
                V=V+1;
            }
        }
        if(V == 2)
        {
            printf("\n%d",P);
        }
    }
    
    getch();
}
