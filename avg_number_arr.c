#include<stdio.h>
int main(){
float avg,sum=0;

int i,n[5];
printf("enter 5 number");
for(i=0; i<=4; i++)
scanf("%d",&n[i]);
for(i=0; i<=4; i++)
sum = sum+n[i];
avg = sum/5;
printf("%f %f",sum,avg);


    return 0;
}