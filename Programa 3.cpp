#include <stdio.h>
#include <conio.h>

main()
{
    int H=0,M=0,S;
    
    printf("Programa que captura el tiempo en segundos y lo expresa en horas, minutos y segundos");
    printf("\nDigite el tiempo actual en segundos: ");
    scanf("%d",&S);
    
    for(S;S>=60;M++)
    {
        S=S-60;
    }
    for(M;M>=60;H++)
    {
        M=M-60;
    }
    
    printf("%d:%d:%d",H,M,S);
        
                                                                 
    getch();
}
