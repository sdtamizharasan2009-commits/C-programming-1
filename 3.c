#include <stdio.h>

int main() {
    int gold, x, y;
    int ben, blackbeard, pirates;

    scanf("%d", &gold);
    scanf("%d", &x);
    scanf("%d", &y);

    ben = gold * x / 100;

    gold = gold - ben;

    blackbeard = gold * y / 100;

    gold = gold - blackbeard;

    pirates = gold / 3;

    printf("%d\n", ben);
    printf("%d\n", blackbeard);
    printf("%d\n", pirates);

    return 0;
}
