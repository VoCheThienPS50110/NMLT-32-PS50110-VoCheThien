#include <stdio.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
int main()
{
    int chon;
    do
    {
        printf("+----------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 7               |\n");
        printf("+----------------------------------------------------+\n");
        printf("|   1. Dem nguyen am va phu am trong chuoi           |\n");
        printf("|   2. Dang nhap he thong (User & Password)          |\n");
        printf("|   3. Sap xep danh sach chuoi theo thu tu AIphabet  |\n");
        printf("|   4. Chuyen doi so thap phan sang nhi phan (Chuoi) |\n");
        printf("|   5. Thoat chuong trinh                            |\n");
        printf("+----------------------------------------------------+\n");
        printf("Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 4:
            chucNang4();
            break;
        case 5:
            printf(">> Ban da thoat chuong trinh\n");
            break;
        default:
            printf(">> Ban hay chon chuc nang (1-5)\n");
            break;
        }
    } while (chon != 5);
    return 0;
}

void chucNang1()
{
    printf("Ban chon chuc nang 1: Dem nguyen am va phu am trong chuoi\n");
}

void chucNang2()
{
    printf("Ban chon chuc nang 2: Dang nhap he thong (User & Password)\n");
}

void chucNang3()
{
    printf("Ban chon chuc nang 3: Sap xep danh sach chuoi theo thu tu AIphabet\n");
}
void chucNang4()
{
    printf("Ban chon chuc nang 4: Chuyen doi so thap phan sang nhi phan (Chuoi)\n");
}