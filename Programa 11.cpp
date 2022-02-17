#include <stdio.h>
#include <conio.h>

main()
{
    int N;
    
    printf("Digite un numero: ");
    scanf("%d",&N);
    
    if(N%9==0)
    {
        printf("El numero es multiplo de 9");
    }
    else
    {
        printf("El numero no es multiplo de 9");
    }
    
    getch();
}
