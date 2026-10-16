#include <stdio.h>

int main() {
    int a, b, c, n;

    scanf("%d%d%d%d", &a, &b, &c, &n);

    if (n == 0) {
        printf("No path exists");
    }
    else if (a % n == 0) {
        printf("Car 1 goes into road A");
    }
    else if (b % n == 0) {
        printf("Car 1 goes into road B");
    }
    else if (c % n == 0) {
        printf("Car 1 goes into road C");
    }
    else {
        printf("No path exists");
    }

    return 0;
}
