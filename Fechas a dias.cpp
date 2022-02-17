#include <stdio.h>
#include <conio.h>

main()
{
    int A1,M1,D1,A2,M2,D2,AP=0,MP=0,DP,DT;
    
    printf("Programa que calcula los dias contenidos dadas ciertas fechas.\nFormato: DD/MM/AAAA");
    
    printf("\nDIGITE LOS DATOS DE LA PRIMERA FECHA:\nDigite el dia: ");
    scanf("%d",&D1);
    printf("Digite el mes: ");
    scanf("%d",&M1);
    printf("Digite el ano: ");
    scanf("%d",&A1);

    printf("DIGITE LOS DATOS DE LA SEGUNDA FECHA:\nDigite el dia: ");
    scanf("%d",&D2);
    printf("Digite el mes: ");
    scanf("%d",&M2);
    printf("Digite el ano: ");
    scanf("%d",&A2);
    
    for(A1;A1<A2;A1++)
    {
        AP=AP+1;
    }
    
    DT=365*AP;
    
    if(M1<M2)
    {
        for(M2;M2>M1;M2--)
        {
            MP=MP+1;
        }
        DP=30*MP;
        DT=DT+DP;
    }
        else if(M1>M2)
        {
            for(M2;M2<M1;M2++)
            {
            MP=MP+1;
            }
            DP=30*MP;
            DT=DT-DP;
        }
        
    DP=0;

    if(D1<D2)
    {
        for(D2;D2>D1;D2--)
        {
            DP=DP+1;
        }
        DT=DT+DP;
    }
        else if(D1>D2)
        {
            for(D2;D2<D1;D2++)
            {
            DP=DP+1;
            }
            DT=DT-DP;
        }
     
    printf("Entre la fechas dadas, hay %d dias contenidas en ellas",DT);
    getch();
} 
