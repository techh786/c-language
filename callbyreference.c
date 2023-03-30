#include<stdio.h>
int swapr(int *a, int *b);

int main(){
int x,y;
x = 10,y =20;
swapr(&x,&y);
printf("x = %d & b = %d",x,y);

    return 0;
}int swapr(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;

}