#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    float Chieu_dai, Chieu_rong, Dien_tich, Chu_vi;
    float Ban_kinh, Dien_tich_hinh_tron, Chu_vi_hinh_tron;

    printf("Hinh chu nhat\n");
    printf("Nhap chieu dai: ");
    scanf("%f", &Chieu_dai);
    printf("Nhap chieu rong: ");
    scanf("%f", &Chieu_rong);

    Dien_tich = Chieu_dai * Chieu_rong;
    Chu_vi = 2 * (Chieu_dai + Chieu_rong);

    printf("Hinh chu nhat:\n");
    printf("Dien tich: %.2f\n", Dien_tich);
    printf("Chu vi: %.2f\n\n", Chu_vi);

    printf("Hinh tron\n");
    printf("Nhap ban kinh:");
    scanf("%f", &Ban_kinh);

    Dien_tich_hinh_tron = PI * Ban_kinh * Ban_kinh;
    Chu_vi_hinh_tron = 2 * PI * Ban_kinh;

    printf("Dien tich: %.2f\n", Dien_tich_hinh_tron);
    printf("Chu vi: %.2f\n", Chu_vi_hinh_tron);

    return 0;
}
