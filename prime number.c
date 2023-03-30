#include<stdio.h>
int main(){
    int num,i,flag=0;
    printf("enter a integer number:");
    scanf("%d",&num);
    for (i =2; i<=num/2; i++)
    {
        if(num%i==0){
            flag =  1;
            break;
        }
    }
    if(flag==0){
        printf("this is prime number\n");
    }else{
        printf("this is not prime number\n");
    }
    return 0;
}