#include<stdio.h>
int main(){
    int i,j;
int arr[3][3];
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("enter a[%d][%d]",i,j);
        scanf("%d",&arr[i][j]);
    }
}
printf("printing the elements\n");
for(i=0; i<3; i++){
    printf("\n");
    for(j=0; j<3; j++){
        printf("%d\n",arr[i][j]);
    }
}
    return 0;
}