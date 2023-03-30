#include<stdio.h>
void disp(int *n);
int main(){
int i;
int marks[] = {55,56,78,75,78,90,56};
for(i=0; i<=6; i++){\

disp(&marks[i]);
}

    return 0;
}void disp(int *n){
    printf("%d\n",*n);
}