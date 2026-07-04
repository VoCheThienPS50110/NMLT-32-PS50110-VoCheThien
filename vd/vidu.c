#include <stdio.h>
int main() 
{
    int a, b;
    printf("Nhap he so a: ");
    scanf("%d", &a);
    printf("Nhap he so b: ");
    scanf("%d", &b);
    printf("Phuong trinh %dx + %d = 0 co nghiem x = %.2f\n", a, b, -1.0 * b / a);
    return 0;
}
