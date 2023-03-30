#include<stdio.h>
#include<string.h>
int main(){
char arr[] = "Afghanistan";
int len1;
int len2;
len1 = strlen(arr);
len2 = strlen("humpty dumpty");
printf("string = %s lenght = %d\n","arr[]",len1);
printf("string = %s lenght = %d\n","humpty dumpty",len2);

return 0;
}