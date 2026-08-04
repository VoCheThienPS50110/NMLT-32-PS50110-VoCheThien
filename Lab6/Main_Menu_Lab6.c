#include <stdio.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
int main()
{
    int chon;
    do
    {
        printf("+-------------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 6                  |\n");
        printf("+-------------------------------------------------------+\n");
        printf("|   1. Tinh trung binh tong so chia het cho 3 va 5      |\n");
        printf("|   2. Tim gia tri lon nhat va nho nhat trong mang      |\n");
        printf("|   3. Sap xep mang theo thu tu giam dan                |\n");
        printf("|   4. Ma tran binh phuong (Mang 2 chieu)               |\n");
        printf("|   5. Loc va xuat vi tri cac So le trong Ma tran       |\n");
        printf("|   6. Thoat chuong trinh                               |\n");
        printf("+-------------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-6): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            printf("Ban chon chuc nang 1: Tinh trung binh tong so chia het cho 3 va 5\n");
            chucNang1();
            break;
        case 2:
            printf("Ban chon chuc nang 2: Tim gia tri lon nhat va nho nhat trong mang\n");
            chucNang2();
            break;
        case 3:
            printf("Ban chon chuc nang 3: Sap xep mang theo thu tu giam dan\n");
            chucNang3();
            break;
        case 4:
            printf("Ban chon chuc nang 4: Ma tran binh phuong (Man 2 chieu)\n");
            chucNang4();
            break;
        case 5:
            printf("Ban chon chuc nang 5: Loc va xuat vi tri cac so le trong ma tran\n");
            chucNang5();
            break;
        case 6:
            break;
        }
    } while (chon != 6);
    return 0;
}

void chucNang1()
{
}
void chucNang2()
{
}

void chucNang3()
{
}

void chucNang4()
{
}

void chucNang5()
{
}