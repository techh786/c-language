#include<stdio.h>
// square using pointer in function
void square(int *n);
int main(){
int number;
number = 3;
square(&number);
  printf("square is = %d\n",number);
}void square(int *n){
    *n = (*n)*(*n);
    printf("square is = %d\n",*n);

}