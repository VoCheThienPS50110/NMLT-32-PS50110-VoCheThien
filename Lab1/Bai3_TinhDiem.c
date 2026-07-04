#include <stdio.h>
int main(){
    int toan, ly, hoa;
    char HoVaTen[50];
    char MSSV[10];
    unsigned short Namsinh;
    printf("Nhap diem mon Toan: ");
    scanf("%d",&toan);
    printf("Nhap diem mon Ly: ");
    scanf("%d",&ly);
    printf("Nhap diem mon Hoa: ");
    scanf("%d",&hoa);
    printf("Diem trung binh: %d\n", (toan + ly + hoa) / 3);
    printf("Nhap ho va ten: ");//. Xuat thong tin trong dau " "
    scanf("%[^\n]",HoVaTen);
    printf("Nhap MSSV: ");
    scanf("%s",MSSV);
    printf("Nhap nam sinh: "); 
    scanf("%hu", &Namsinh);
    printf("Thong tin sinh vien:\n");
    printf("Ho va ten: %s\n", HoVaTen);
    printf("MSSV: %s\n", MSSV);
    printf("Nam sinh: %hu\n", Namsinh);
    printf("Tuoi: %d\n", 2026 - Namsinh);
    return 0;
}