#include <stdio.h>
int main()
{
    int chon;
    do
    {
        printf("++=================================================================++\n");
        printf("||                 MENU CHUONG TRINH ASSIGNMENT 1                  ||\n");
        printf("++=================================================================++\n");
        printf("||     Chuc nang 0. Thoat chuong trinh                             ||\n");
        printf("||     Chuc nang 1: Kiem tra so nguyen                             ||\n");
        printf("||     Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so      ||\n");
        printf("||     Chuc nang 3: Tinh tien cho quan karaoke                     ||\n");
        printf("||     Chuc nang 4: Tinh tien dien                                 ||\n");
        printf("||     Chuc nang 5: Chuc nang doi ten                              ||\n");
        printf("||     Chuc nang 6: Tinh lay suat vay ngan hang vay tra gop        ||\n");
        printf("||     Chuc nang 7: Vay tien mua xe                                ||\n");
        printf("||     Chuc nang 8: Sap xep thong tin sinh vien                    ||\n");
        printf("||     Chuc nang 9: Xay dung game FPOLY-LOTT                       ||\n");
        printf("||     Chuc nang 10: Chuong trinh tinh toan phan so                ||\n");
        printf("++=================================================================++\n");
        printf(">> Chon chuc nang cua ban (0-10): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban chon chuc 0: Thoat chuong trinh\n");
            printf(">>> Ban da thoat chuong trinh <<\n");
            break;
        case 1:
            printf("Ban chon chuc nang 1: Kiem tra so nguyen\n");
            break;
        case 2:
            printf("Ban chon chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
            break;
        case 3:
            printf("Ban chon chuc nang 3: Tinh tien cho quan karaoke\n");
            break;
        case 4:
            printf("Ban chon chuc nang 4: Tinh tien dien\n");
            break;
        case 5:
            printf("Ban chon chuc nang 5: Chuc nang doi ten\n");
            break;
        case 6:
            printf("Ban chon chuc nang 6: Tinh lay suat vay ngan hang vay tra gop\n");
            break;
        case 7:
            printf("Ban chon chuc nang 7: Vay tien mua xe\n");
            break;
        case 8:
            printf("Ban chon chuc nang 8: Sap xep thong tin sinh vien\n");
            break;
        case 9:
            printf("Ban chon chuc nang 9: Xay dung game FPOLY-LOTT\n");
            break;
        case 10:
            printf("Ban chon chuc nang 10: Chuong trinh tinh toan phan so\n");
            break;
        default:
            printf("Ban phai chon chuc nang tu 0 - 10\n");
            break;
        }
    } while (chon != 0);
    return 0;
}