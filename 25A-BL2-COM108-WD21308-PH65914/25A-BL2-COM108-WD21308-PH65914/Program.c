// CConsoleApplication.c : file nay chua 'main' function. 
// Chuong trinh phan mem Bat dau thuc thi & Ket thuc o day.

#include <stdio.h>

int main()
{
    int n;
    int mang[100];
    int i;
    float tong = 0;
    float tb;
    int count = 0;
    printf("Moi nhap so n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nMoi nhap mang so nguyen bao gom n phan tu: ");
        scanf("%d", &mang[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (mang[i] % 3 == 0) {
            tong = tong + mang[i];
            count++;
        }
    }
    tb = tong / count;
    printf("Gia tri trung binh la: %.1f\n", tb);

}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184