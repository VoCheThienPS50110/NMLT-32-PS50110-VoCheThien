#include<stdio.h>
#include<stdlib.h>
int main()
{
    float Diem_toan, Diem_ly, Diem_hoa, Diem_tb;
    printf("Nhap diem mon Toan Ly Hoa: ");
    scanf("%f%f%f", &Diem_toan, &Diem_ly, &Diem_hoa);

    printf("Diem Toan: %.2f\n", Diem_toan);
    printf("Diem Ly: %.2f\n", Diem_ly);
    printf("Diem Hoa: %.2f\n", Diem_hoa);
    printf("Diem trung binh: %.2f\n", ((Diem_toan * 3.0) + (Diem_ly * 2.0) + Diem_hoa) / 6.0);
    return 0;
}