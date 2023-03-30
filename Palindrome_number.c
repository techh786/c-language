#include<stdio.h>
int main(){
int num,reverse =0, origininalNum;
printf("enter integers number: ");
scanf("%d",&num);
origininalNum = num;
for(;origininalNum !=0; origininalNum/=10){
    int digit = origininalNum%10;
    reverse = reverse*10+digit;
}
if(reverse == num){
    printf("this is palindrome number:");

}else{
    printf("this is not palindrome number:");
}


return 0;
}