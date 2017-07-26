#include <stdio.h>
#include <stdlib.h>

unsigned long long fac(int n);

int main (void) {

    int chosen = 0;
    printf("Please enter a number:\n");
    scanf("%d", &chosen);
    unsigned long long num = fac(chosen);
    printf("The factorial of %d is %llu\n", chosen, num);

    return 0;
}

unsigned long long fac(int n) {

    if (n == 1) {
        return n;
    } else {
        return n*fac(n-1);
    }

}
