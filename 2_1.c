//This program is prepared by 23TCEJ6O_Dharmit
#include<stdio.h>
int main()
{
    long int TP,M,LM,ILM,W,LW,ILW,L;
    printf("Enter the total population:");
    scanf("%d",&TP);
    printf("\nTotal population:%d",TP);

    L=0.48*TP;
    printf("\nNumber of total literacy:%d",L);

    M=0.52*TP;
    printf("\nNumber of men:%d",M);

    LM=0.35*TP;
    printf("\nNumber of literate men:%d",LM);

    ILM=M-LM;
    printf("\nNumber of illiterate men:%d",ILM);

    W=TP-M;
    printf("\nNumber of women:%d",W);

    LW=L-LM;
    printf("\nNumber of literate women:%d",LW);

    ILW=W-LW;
    printf("\nNumber of illiterate women:%d",ILW);
    printf("\n\nDharmit Fadadu  23TCEJ6O\n");


    return 0;
}
