
#include <stdio.h>
#include <math.h>

void square_root(int n);

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    square_root(n);
    return 0;
}

void square_root(int n) {
    printf("Square root is %f\n", sqrt(n));
    
}
