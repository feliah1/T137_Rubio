#include <math.h>
#include <stdio.h>

int main() {
    double base, exp, result;
    printf("Enter base(X): ");
    scanf("%lf", &base);
    printf("Enter exponent(Y): ");
    scanf("%lf", &exp);


    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
    return 0;
}
