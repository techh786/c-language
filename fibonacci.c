#include<stdio.h>
int  fib(int n);
int main(){
int n;
printf("enter number: ");
scanf("%d",&n);
printf("the fibonacci number is %d\n",fib(n));

    return 0;
}  int fib(int n){
    if(n==0){
    return  0;
    }if(n==1){
        return 1;
    }
    
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 +fibNm2;
    return fibN;
}