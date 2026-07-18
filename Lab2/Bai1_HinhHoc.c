#include <stdio.h> // thư viện chuẩn để nhập xuất dữ liệu
#include <stdlib.h> // thư viện chuẩn để sử dụng các hàm tiện ích
#define PI 3.14159 // định nghĩa hằng số PI với giá trị 3.14159

int main() // int main là hàm chính của chương trình, nơi bắt đầu thực thi
{
    float Chieu_dai, Chieu_rong, Dien_tich, Chu_vi; // float là kiểu dữ liệu số thực
    float Ban_kinh, Dien_tich_hinh_tron, Chu_vi_hinh_tron;

    printf("Hinh chu nhat\n"); // printf là hàm dùng để in
    printf("Nhap chieu dai: ");
    scanf("%f", &Chieu_dai); //%f là định dạng để đọc số thực từ bàn phím
    printf("Nhap chieu rong: ");
    scanf("%f", &Chieu_rong);// scanf là hàm dùng để đọc dữ liệu từ bàn phím

    Dien_tich = Chieu_dai * Chieu_rong;
    Chu_vi = 2 * (Chieu_dai + Chieu_rong);

    printf("Dien tich: %.2f\n", Dien_tich); // %.2f là định dạng để in ra số thực với 2 chữ số thập phân
    printf("Chu vi: %.2f\n\n", Chu_vi);

    printf("Hinh tron\n");
    printf("Nhap ban kinh:");
    scanf("%f", &Ban_kinh);

    Dien_tich_hinh_tron = PI * Ban_kinh * Ban_kinh;
    Chu_vi_hinh_tron = 2 * PI * Ban_kinh;

    printf("Dien tich: %.2f\n", Dien_tich_hinh_tron); 
    printf("Chu vi: %.2f\n", Chu_vi_hinh_tron);

    return 0;  // trả về 0 để báo hiệu chương trình chạy thành công
}
