#include <stdio.h>
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void TBC(int A[], int n);
void maxMin(int A[], int n);
void sapXepGiam(int A[], int n);
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
            printf("Ban chon chuc nang 5: Loc va xuat vi tri cac so le trong ma tran\n");
            chucNang5();
            break;
        case 6:
            break;
        }
    } while (chon != 6);
    return 0;
}
//==================================================================================================================================================================
void chucNang1()
{
    int n;
    printf("Ban chon chuc nang 1: Tinh trung binh tong so chia het cho 3 va 5\n");
    printf("Nhap so luong mang: ");
    scanf("%d", &n);
    int A[n];
    printf("Nhap A[%d] = ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    TBC(A, n);
}
//==================================================================================================================================================================
void chucNang2()
{
    int n;
    printf("Ban chon chuc nang 2: Tim gia tri lon nhat va nho nhat trong mang\n");
    printf("Nhap so luong mang: ");
    scanf("%d", &n);
    int A[n];
    printf("Nhap A[%d]= ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    maxMin(A, n);
}
//==================================================================================================================================================================
void chucNang3()
{
    int n;
    printf("Ban chon chuc nang 3: Sap xep mang theo thu tu giam dan\n");
    printf("Nhap so luong mang: ");
    scanf("%d", &n);
    int A[n];
    printf("Nhap A[%d]= ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    sapXepGiam(A, n);
}
//==================================================================================================================================================================
void chucNang4()
{
    int n;
    printf("Ban chon chuc nang 4: Ma tran binh phuong (Man 2 chieu)\n");
    printf("Nhap so luong mang: ");
    scanf("%d", &n);
    int A[n];
    printf("Nhap A[%d]= ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
}
//==================================================================================================================================================================
void chucNang5()
{
}
//==================================================================================================================================================================
void TBC(int A[], int n)
{
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] % 3 == 0 && A[i] % 5 == 0)
        {
            tong += A[i];
            dem++;
        }
    }
    if (dem == 0)
    {
        printf("Khong co phan tu nao chia het cho 3 va 5.\n");
    }
    else
    {
        float trungBinh = (float)tong / dem;
        printf("TBC cac so chia het cho 3 va 5 la: %.2f\n", trungBinh);
    }
}
//==================================================================================================================================================================
void maxMin(int A[], int n)
{
    int max = A[0];
    int min = A[0];
    for (int i = 1; i < n; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
        if (max < A[i])
        {
            max = A[i];
        }
    }
    printf("Min = %d\t va Max = %d\n", min, max);
}
//=========================================================================================================================================================
void sapXepGiam(int A[], int n)
{
        int temp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] < A[j])
                {
                    // hoán vị
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        // Xuất mảng sau khi sắp xếp
        printf("Mang sau khi sap xep giam dan:\n");
        printf(">> A[%d]= ",n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\n");
}
//============================================================================================================================================
