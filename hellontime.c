#include<stdio.h>
void printHelloworld(int n);
int main(){
int n;
printf("enter number :");
scanf("%d",&n);
printHelloworld(n);

    return 0;
}void printHelloworld(int n){
if(n == 0){
 return;
}
    printf("hello world\n");
   printHelloworld(n-1);
}