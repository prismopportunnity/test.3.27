#include <stdio.h>
#define PI 3.14
//��������İ뾶ֵ������������
int main() {
    double r;
    double result;

    while ((scanf("%lf", &r)) != EOF) {
        result = 4.0 * PI * r * r * r / 2.0;

        printf("%.2lf\n", result);
    }

    return 0;
}