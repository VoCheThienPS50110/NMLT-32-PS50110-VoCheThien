#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    //short t,l,h;//chon kieu short vi la so nguyen nho
    //float tb;//chon kieu float vi la so thap phan. "tb" la ten bien
    //chu dau tien viet thuong, ky tu dau tien cua chu tiep theo viet hoa. 
    //Boi vi ten bien khong co khoang trang
    char HoVaTen[50];
    char MSSV[10];
    unsigned short Namsinh;
    float DiemTB; 

    printf("Nhap ho va ten: ");//. Xuat thong tin trong dau " "
    scanf("%[^\n]",HoVaTen);

    printf("Nhap MSSV: ");
    scanf("%s",MSSV);

    printf("Nhap nam sinh: "); 
    scanf("%hu", &Namsinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &DiemTB);

    printf("Thong tin sinh vien:\n");
    printf("Ho va ten: %s\n", HoVaTen);//%s la ky tu chuoi
    printf("MSSV: %s\n", MSSV);
    printf("Nam sinh: %hu\n", Namsinh);//%hu la kieu so nguyen khong dau
    printf("Tuoi: %d\n", 2026 - Namsinh);
    printf("Diem trung binh: %.2f\n", DiemTB);//%.2f la kieu so thap phan co 2 chu so sau dau cham
    
    return 0;
}
