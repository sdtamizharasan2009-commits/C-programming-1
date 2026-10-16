#include <stdio.h>

int main() {
    float p, r, t;
    float interest, amount, discount, final;

    scanf("%f%f%f", &p, &r, &t);

    interest = (p * r * t) / 100;

    amount = p + interest;

    discount = interest * 0.02;

    final = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", final);

    return 0;
}
