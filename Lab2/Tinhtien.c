#include <stdio.h>
//giá gạo 2
//giá đậu =1.5
//tỉ giá đô 26,29
//đề Nhập số lượng gạo số lượng đậu tính tiền
int a=2, b=1.5;
float d;
int main()
{
    printf("Nhap so luong gao va dau: ");
    scanf("%d%d", &a, &b);
    d=(a*2+b*1.5)*26.29;
    printf("So tien phai tra la: %.2f\n", d);
    return 0;
}
   