//This program is prepared by 23TCEJ6O_Dharmit
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float t,g,l;

    printf("Enter the length of pendulum:");
    scanf("\n%f",&l);
    printf("\nEnter the value of g:");
    scanf("\n%f",&g);

    t=2*pi*sqrt(l/g);

    printf("\nTime Period:%.2f\n\n",t);
    printf("Dharmit Fadadu  23TCEJ6O\n");

    return 0;
}
