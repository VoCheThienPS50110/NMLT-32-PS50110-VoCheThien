#include <stdio.h>
// #include <math.h> khi nào sử dụng đến sqrt mới cần đến thư viện này
void Chucnang1();
void Chucnang2();
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
            Chucnang1();
            break;
        case 2:
            Chucnang2();
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
            printf(">> Ban phai chon chuc nang tu 0 - 10 <<\n");
            break;
        }
    } while (chon != 0);
    return 0;
}

void Chucnang1()
{
    float n;
    /*Khai báo n là float vì để nhập số thập phân vào
    để xét điều kiện có phải là số nguyên ko*/

    printf("Ban chon chuc nang 1: Kiem tra so nguyen\n");
    printf("Nhap vao 1 so nguyen tu x: ");
    scanf("%f", &n);
    // Xét điều kiện số nguyên
    if (n == (int)n)
    {
        printf(">> So %.2f la so nguyen\n", n);
        // Xét điều kiện số nguyên tố
        if (n < 2)
        {
            printf(">> So %.2f khong phai la so nguyen to\n", n);
        }
        else
        {
            for (int i = 2; i < n; i++)
                if ((int)n % i == 0)
                {
                    printf(">> So %.2f Khong phai la so nguyen to\n", n);
                    goto ketthuc;
                }
            printf(">> So %.2f la so nguyen to\n", n);
        ketthuc:
        }
    }
    else
    {
        printf(">> So %.2f khong phai la so nguyen\n", n);
    }

    // XÉT ĐIỀU KIỆN SỐ CHÍNH PHƯƠNG
    /*if(sqrt(n)==(int)sqrt(n))
    {
    printf(">> So %.2f la so chinh phuong\n",n);
    }
    else
    {
    printf(">> So %.2f khong la so chinh phuong\n",n);
    }*/
    if (n >= 0)
    {
        for (int i = 2; i < n; i++)
            if (i * i == n)
            {
                printf(">> So %.2f la so chinh phuong\n", n);
                goto Ketthuc2;
            }
        printf(">> So %.2f khong phai la so chinh phuong\n", n);
    Ketthuc2:
    }
    else
    {
        printf(">> So %.2f khong phai la so chinh phuong\n", n);
    }
}

void Chucnang2()
{
    int a, b, x, y, bcnn, ucln;
    printf("Ban chon chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
    printf("Nhap vao 2 so bat ki: ");
    scanf("%d%d", &x, &y);
    if (x <= 0)
    {
        printf(">> Ban nhap gia tri khong hop le!\n");
    }
    else if (y <= 0)
    {
        printf(">> Ban nhap gia tri khong hop le!\n");
    }
    else 
    {
        a = x; // khai báo thêm biến phụ để giữ giá trị ban đầu là x và y khi nhập vào để một lát tìm BCNN
        b = y;
        while (a != b) // vòng lặp chạy đến khi nào a==b còn a!=b tiép tục chạy
        {
            if (a > b) // do là UCLN và BCNN không âm nên khi a>b thì lấy a-b còn b>a thì đảo lại b-a trừ cho đến khi a và b bằng nhau và kết quả cuối là UCLN
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
        ucln = a;           // Hoặc ucln =b vì là vòng lập while đã cho ra UCLN cho nên lúc đó a và b bằng nhau nên gán ucln = a hoặc = b đều được
        bcnn = (x * y) / a; // gán công thức bcnn
        printf(">> UCLN cua 2 so la: %d\n", a);
        printf(">> BCNN cua 2 so la: %d\n", bcnn);
    }
}