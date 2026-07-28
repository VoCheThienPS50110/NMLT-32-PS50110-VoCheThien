#include <stdio.h>
void Yeucau1();
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
        printf("||     Chuc nang 5: Chuc nang doi tien                             ||\n");
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
            Yeucau1();
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

void Yeucau1()
{
    float n;
    /*Khai báo n là float vì để nhập số thập phân vào
    để xét điều kiện có phải là số nguyên ko*/

    printf("Ban chon chuc nang 1: Kiem tra so nguyen\n");
    printf("Nhap vao 1 so nguyen tu x: ");
    scanf("%f",&n);
    // Xét điều kiện số nguyên
    if (n==(int)n)
    {
        printf(">> So %.2f la so nguyen\n",n);
        //Xét điều kiện số nguyên tố
        if(n<2)
        {
            printf(">> So %.2f khong phai la so nguyen to\n",n);
        }
        else
        {
            for(int i=2; i<n; i++)
                if((int)n%i==0)
                {
                    printf(">> So %.2f Khong phai la so nguyen to\n",n);
                    goto ketthuc;
                }
            printf(">> So %.2f la so nguyen to\n",n);
            ketthuc:
        }
    }
    else
    {
        printf(">> So %.2f khong phai la so nguyen\n",n);
    }
    
    //XÉT ĐIỀU KIỆN SỐ CHÍNH PHƯƠNG
    /*if(sqrt(n)==(int)sqrt(n))
    {
    printf(">> So %.2f la so chinh phuong\n",n);
    }
    else
    {
    printf(">> So %.2f khong la so chinh phuong\n",n);
    }*/
    if(n>=0)
    {
        for(int i=2; i<n; i++)
            if (i*i==n)
            {
                printf(">> So %.2f la so chinh phuong\n",n);
                goto Ketthuc2;
            }
        printf(">> So %.2f khong phai la so chinh phuong\n",n);
        Ketthuc2:
    }
    else
    {
        printf(">> So %.2f khong phai la so chinh phuong\n",n);
    }
}