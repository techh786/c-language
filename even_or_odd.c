#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("this number is even %d\n",n);
    }else{
        printf("this number is odd %d\n",n);
    }
    return 0;
}