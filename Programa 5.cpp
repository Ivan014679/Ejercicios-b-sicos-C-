#include <stdio.h>
#include <conio.h>

main()
{
    int R1,R2,N,V=0;
    
    printf("Digite un numero: ");
    scanf("%d",&R1);
    printf("Digite un numero mayor al anterior: ");
    scanf("%d",&R2);
    printf("Digite el numero a comprobar: ");
    scanf("%d",&N);
    
    for(R1;R1<=R2;R1++)
    {
        if(R1==N)
        {
            V=1;
        }
    }
    if(V==1)
    {
        printf("El numero %d esta en el rango",N);
    }
    else
    {
        printf("El numero %d no esta en el rango",N);
    }
    
    getch();
}
