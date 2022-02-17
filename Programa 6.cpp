#include <stdio.h>
#include <conio.h>

main()
{
    int N;
    
    printf("Digite un numero: ");
    scanf("%d",&N);
    
    if(N==0)
    {
        printf("El numero 0 es neutro");
    }
       else if(N<0)
       {
            printf("El numero es negativo");
       }
            else if(N % 2 == 0)
            {
                printf("El numero es par");
            }
            else
            {
                printf("El numero es impar");
            }
            
    getch();
}
            
