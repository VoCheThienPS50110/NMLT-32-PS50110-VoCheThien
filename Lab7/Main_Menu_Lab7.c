#include <stdio.h>
#include <ctype.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();

void demNguyenAmPhuAm();
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
        scanf(" %d", &chon);
        getchar();
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
//============================================================================================================================================
void chucNang1()
{
    printf("Ban chon chuc nang 1: Dem nguyen am va phu am trong chuoi\n");
    demNguyenAmPhuAm();
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
//===========================================================================================================================================

void demNguyenAmPhuAm()
{
    char kyTu[200];
    int demNA, demPA;
    demNA = 0;
    demPA = 0;
    printf("Nhap chuoi ky tu: ");
    fgets(kyTu, sizeof(kyTu), stdin);
    for (int i = 0; kyTu[i] != '\0'; i++)
    {
        char kyTuThuong = tolower(kyTu[i]);
        if (isalpha(kyTuThuong))
        {
            if (kyTuThuong == 'a' || kyTuThuong == 'e' || kyTuThuong == 'i' || kyTuThuong == 'o' || kyTuThuong == 'u')
            {
                demNA++;
            }
            else
            {
                demPA++;
            }
        }
    }
    printf("So nguyen am: %d\n", demNA);
    printf("So phu am: %d\n", demPA);
}