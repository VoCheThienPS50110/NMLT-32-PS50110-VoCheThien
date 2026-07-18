#include <stdio.h>
int main() 
{
    float a, b, x;
    printf("Nhap he so a va b: ");
    /* & la địa chỉ của biến a, scanf sẽ lưu giá trị nhập vào địa chỉ này */
    scanf("%f%f", &a,&b);

    x = -b / a;
    printf("Nghiem cua phuong trinh %gx + %g = 0 la: x = %.2f\n", a, b, x);

    return 0;
}
