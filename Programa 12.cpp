#include <stdio.h>
#include <conio.h>

main()
{
    int N,S=0,C=0,P;
    
    for(C=0;C<=50;C++)
    {
        printf("Digite un numero: ");
        scanf("%d",&N);
        
        S=S+N;
    }
    
    printf("Sumatoria: %d\n",S);
    
    for(C=0;C<=15;C++)
    {
        printf("Digite un numero: ");
        scanf("%d",&N);
        
        S=S+N;
    }
    
    P=S/15;
        
    printf("Media: %d",P);
    getch();
}
