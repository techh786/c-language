#include<stdio.h>
void swap(int a , int b);
int main(){
int a,b;
a =10, b=20;
swap(a,b);
printf("a = %d & b = %d\n",a,b);

    return 0;
}void swap(int a , int b){
int t;
t = a;
a = b;
b = t;
printf("a = %d & b = %d\n",a,b);
}