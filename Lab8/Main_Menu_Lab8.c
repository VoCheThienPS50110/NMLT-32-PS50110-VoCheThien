#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char MSSV[20];
    char hoTen[50];
    float diemTB;
};

struct SinhVien mangSV[100];
int n = 0;

// Nguyen mau ham
void nhapXuatSinhVien(struct SinhVien mangSV[], int *n);
void sapXepSinhVien(struct SinhVien mangSV[], int n);
void timKiemSinhVien(struct SinhVien mangSV[], int n);
void xuatHocBong(struct SinhVien mangSV[], int n);

int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|         HE THONG QUAN LY SINH VIEN (LAB 8)        |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Nhap va Xuat danh sach sinh vien               |\n");
        printf("| 2. Sap xep sinh vien theo diem TB tang dan        |\n");
        printf("| 3. Tim kiem sinh vien theo Ma so sinh vien (MSSV) |\n");
        printf("| 4. Xuat danh sach sinh vien dat Hoc bong (>= 8.0) |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("Ban chon chuc nang 1: Nhap va Xuat danh sach sinh vien\n");
            nhapXuatSinhVien(mangSV, &n);
            break;
        case 2:
            printf("Ban chon chuc nang 2: Sap xep sinh vien theo diem TB tang dan\n");
            sapXepSinhVien(mangSV, n);
            break;
        case 3:
            printf("Ban chon chuc nang 3: Tim kiem sinh vien theo MSSV\n");
            timKiemSinhVien(mangSV, n);
            break;
        case 4:
            printf("Ban chon chuc nang 4: Xuat danh sach sinh vien dat Hoc bong\n");
            xuatHocBong(mangSV, n);
            break;
        case 5:
            printf(">> Ban chon chuc nang 5: Thoat chuong trinh <<\n");
            break;
        default:
            printf(">> Vui long chon tu 1 den 5 <<\n");
        }

    } while (chon != 5);

    return 0;
}

void nhapXuatSinhVien(struct SinhVien mangSV[], int *n)
{
    int dem=1;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        printf(">> Sinh vien %d <<\n", dem);
        printf("Nhap MSSV: ");
        scanf("%s", mangSV[i].MSSV);
        printf("Nhap Ho ten: ");
        getchar(); 
        fgets(mangSV[i].hoTen, sizeof(mangSV[i].hoTen), stdin);
        mangSV[i].hoTen[strcspn(mangSV[i].hoTen, "\n")] = '\0';
        printf("Nhap diem TB: ");
        scanf("%f", &mangSV[i].diemTB);
        printf("\n");
        dem++;
    }
    int soDem=1;
    printf("\n >> Danh sach sinh vien vua nhap:\n");
    for (int i = 0; i < *n; i++)
    {
        printf(" %d. %s -\t%s -\t%.2f\n", soDem, mangSV[i].MSSV, mangSV[i].hoTen, mangSV[i].diemTB);
        soDem++;
    }
}

