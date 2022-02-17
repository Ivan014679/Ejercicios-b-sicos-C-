#include <stdio.h>
#include <conio.h>

main()
{
    int C=0,I=0;
    
    printf("NUMEROS IMPARES HASTA EL 100\n");
    
    for(I=1;I<=100;I=I+2)
    {
        C=C+1;
        printf("%d\n",I);
    }
    
    printf("Total de numeros impares: %d",C);
    getch();
}
