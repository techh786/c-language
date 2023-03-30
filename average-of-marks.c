#include<stdio.h>
int main(){
int avg,sum = 0;
int i;
int marks[10];
for(i=0; i<=9; i++){
    printf("enter marks :");
    scanf("%d",&marks[i]);// store data in array

}for(i=0; i<=9; i++){
    sum = sum+marks[i];
    avg = sum/10;
    printf("Average marks of %d\n",avg);

}

    return 0;
}