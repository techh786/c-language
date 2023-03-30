#include<stdio.h>
void display(int );
int main(){
int i; int marks[] = {55,65,78,78,56,75,90};
for(i = 0; i<=6; i++)
{
    display(marks[i]);
}

    return 0;
}void display(int m){
    printf("%d\n",m);
}