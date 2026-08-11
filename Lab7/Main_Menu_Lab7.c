#include <stdio.h>
#include <ctype.h> // dùng để sử dụng tolower và isalpha
#include <string.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();

void demNguyenAmPhuAm();
void kiemTraDangNhap();
void sapXepChuoi();
void thapPhanSangNhiPhan();
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
    kiemTraDangNhap();
}

void chucNang3()
{
    printf("Ban chon chuc nang 3: Sap xep danh sach chuoi theo thu tu AIphabet\n");
    sapXepChuoi();
}

void chucNang4()
{
    printf("Ban chon chuc nang 4: Chuyen doi so thap phan sang nhi phan (Chuoi)\n");
    thapPhanSangNhiPhan();
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

void kiemTraDangNhap()
{
    char user[20];
    char pass[20];
    char userSys[] = "admin";
    char passSys[] = "123456";
    printf("Nhap username: ");
    fgets(user, sizeof(user), stdin);
    user[strcspn(user, "\n")] = '\0';
    printf("Nhap password: ");
    fgets(pass, sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';
    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0)
    {
        printf(">> Dang nhap thanh cong\n");
    }
    else
    {
        printf(">> Username hoac Password khong chinh xac!\n");
    }
}

void sapXepChuoi()
{
    char s[5][50];
    printf("Nhap vao 5 chuoi:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Chuoi %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0'; // gán ký tự xuống hàng thành ký tự kết thúc chuỗi để bắt đầu chuỗi mới
    }
    // Sắp xếp chuỗi theo thứ tự bảng chữ cái
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                char temp[50];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("\n>> Cac chuoi sau khi sap xep <<\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }
}

void thapPhanSangNhiPhan()
{
    int thapPhan;
    printf("Nhap vao so thap phan: ");
    scanf("%d", &thapPhan);
    int nhiPhan[50];
    int index = 0;
    do
    {
        nhiPhan[index] = thapPhan % 2;
        thapPhan = thapPhan / 2;
        index++;
    }while (thapPhan != 0);

    printf("\n");
    for (int i = index-1; i >= 0; i--)
    {
        printf("%d ", nhiPhan[i]);
    }
    printf("\n");
}
// void thapPhanSangNhiPhan()
// {
//     int n;
//     printf("Nhap vao so thap phan: ");
//     scanf("%d", &n);
//     while (n < 0)
//     {
//         printf(">> Ban hay nhap mot so thap phan khong am <<\n");
//         printf("Nhap vao so thap phan: ");
//         scanf("%d", &n);
//     }
//     char nhiPhan[50];
//     int index = n;
//     while (n != 0)
//     {
//         if (n % 2 == 0)
//         {
//             strcat(nhiPhan, "0");
//         }
//         else
//         {
//             strcat(nhiPhan, "1");
//         }
//         n = n / 2;
//     }
//     strrev(nhiPhan);
//     printf("\nSo %d sau khi doi thanh ma nhi phan la: %s\n", index, nhiPhan);
// }


