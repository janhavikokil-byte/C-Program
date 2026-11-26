#include<stdio.h>
int main()
{
    float P,R,T,simpleintrest;
    printf("enter the value of P,R,T") ;
    scanf("%f,%f,%f",&P,&R,&T);     
    simpleintrest=P*R*T/100;
    printf("%.2f\n",simpleintrest);
    return 0;
}