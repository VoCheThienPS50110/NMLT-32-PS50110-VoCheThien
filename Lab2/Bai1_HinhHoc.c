#include <stdio.h> // thư viện chuẩn để nhập xuất dữ liệu
#define PI 3.14159 // định nghĩa hằng số PI với giá trị 3.14159

int main() // int main là hàm chính của chương trình, nơi bắt đầu thực thi
{
    float l, r, s, v; // float là kiểu dữ liệu số thực
    float a, b, c;

    printf("Hinh chu nhat\n"); // printf là hàm dùng để in
    printf("Nhap chieu dai va chieu rong: ");
    scanf("%f%f", &l, &r); //%f là định dạng để đọc số thực từ bàn phím
                           // scanf là hàm dùng để đọc dữ liệu từ bàn phím
    s = l * r;
    v = 2 * (l + r);

    printf("Dien tich: %.2f\n", s); // %.2f là định dạng để in ra số thực với 2 chữ số thập phân
    printf("Chu vi: %.2f\n\n", v);

    printf("Hinh tron\n");
    printf("Nhap ban kinh:");
    scanf("%f", &a);

    b = PI * a * a;
    c = 2 * PI * a;

    printf("Dien tich: %.2f\n", b);
    printf("Chu vi: %.2f\n", c);

    return 0; // trả về 0 để báo hiệu chương trình chạy thành công
}
