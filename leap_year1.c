#include <stdio.h>

int isLeapYear(int year);

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

int isLeapYear(int year) {
    if(year % 400 == 0) {
        return 1;
    }
    else if(year % 100 == 0) {
        return 0;
    }
    else if(year % 4 == 0) {
        return 1;
    }
    else {
        return 0;
     }
}
 