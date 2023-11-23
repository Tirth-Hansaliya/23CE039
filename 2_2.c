//This program is prepared by 23TCEJ6O_Dharmit
#include<stdio.h>
int main()

{
    float BS,DA,HRA,MA,TA,PF,IT,GS,NS;

    printf("Enter your Basic Salary:");
    scanf("\n%f",&BS);
    printf("\nTotal basic salary:%f",BS);

    DA=0.7*BS;
    printf("\n DA:%.2f",DA);

    HRA=0.07*BS;
    printf("\n HRA:%.2f",HRA);

    MA=0.02*BS;
    printf("\n MA:%.2f",MA);

    TA=0.04*BS;
    printf("\n TA:%.2f",TA);

    PF=0.12*BS;
    printf("\n PF:%.2f",PF);

    IT=500;
    printf("\n IT:%.2f",IT);

    GS=BS+DA+HRA+MA+TA;
    printf("\n GS:%.2f",GS);

    NS=GS-PF-IT;
    printf("\n NS:%.2f",NS);
    printf("\n\n Dharmit Fadadu  23TCEJ6O\n");

    return 0;

}
