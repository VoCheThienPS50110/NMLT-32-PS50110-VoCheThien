#include <stdio.h>
int main() 
{
    float a, b, x;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);

    // Giả định a != 0
    x = -b / a;
    printf("Nghiem cua phuong trinh %gx + %g = 0 la: x = %.2f\n", a, b, x);

    return 0;
}
