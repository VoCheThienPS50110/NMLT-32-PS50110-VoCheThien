#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a, b, c;
    printf("Nhap diem mon Toan Ly Hoa: ");
    scanf("%f%f%f", &a, &b, &c);

    printf("Diem Toan: %.2f\n", a);
    printf("Diem Ly: %.2f\n", b);
    printf("Diem Hoa: %.2f\n", c);
    printf("Diem trung binh: %.2f\n", ((a * 3.0) + (b * 2.0) + c) / 6.0);
    return 0;
}