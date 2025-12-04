
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void kiemTraSoNguyenTo() {
	int n;
	
}
void kiemTraSoNguyen()
{
	float x;
	printf("Moi nhap so x: ");
	scanf("%f", &x);
	//kiem tra co phai so nguyen khong
	if (x == (int)x)
	{
		printf("%.1f la so nguyen\n",x);
	}
	else
	{
		printf("%.1f khong phai la so nguyen\n", x);
	}
	//kiem tra so nguyen to
	if (x> 1 && x ==(int)x)
	{
		int Ktr = 1;
		for (int i = 2; i <= sqrt(x); i++)
		{
			if ((int)x %i == 0)
			{
				Ktr = 0;
				break;
			}
		}
		if (Ktr == 1)
		{
			printf("%.2f la so nguyen to\n",x);
		}
		else
		{
			printf("%.2f khong phai la so nguyen to\n", x);
		}
	}
	//kiem tra so trinh phuong
	if (x>1 && x==(int)x && sqrt(x) == (int)sqrt(x))
	{
		printf("%.2f la so chinh phuong\n", x);
	}
	else
	{
		printf("%.2f khong phai la so chinh phuong\n", x);
	}
}  
void uocChungBoiChung()
{
	int x, y;
	int UCLN;
	int BCNN;

	printf("Moi nhap so x: ");
	scanf("%d", &x);
	printf("Moi nhap so y: ");
	scanf("%d", &y);

	if (y != 0)
	{
		UCLN = x;

	}
	else
	{
		int r = x % y;
		x = y;
		y = r;

	}
	printf("Uoc chung lon nhat = %d \n", UCLN);
	int k = x * y;
	printf("Boi chung nho nhat = %d \n",k/UCLN);

}
double tinhTien(int gioBatDau, int gioKetThuc) 
{

	double tongTien;
	int soGio = gioKetThuc - gioBatDau;
	if (soGio <= 3)
	{
		tongTien = soGio * 150000;
	}
	else
	{
		tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
	}
	if (gioBatDau >= 14 && gioBatDau <= 17)
	{
		tongTien = tongTien * 0.9;
	}
}
void tinhTienQuanKaraoke() {
	int gioBatDau;
	int gioKetThuc;

	do
	{
		printf("Moi nhap gio bat dau: ");
		scanf("%d", &gioBatDau);
		printf("Moi nhap gio ket thuc: ");
		scanf("%d", &gioKetThuc);

		if (gioBatDau < 12 || gioKetThuc > 23)
		{
			printf("Quan hoat dong tu 12 => 23h\n");
		}

	} while (gioBatDau < 12 || gioKetThuc > 23);

	
	printf("so tien quy khach can tra la: %.1f\n", tinhTien(gioBatDau, gioKetThuc));
}
void chucNangTinhTienDien() 
{
	int Kwh;
	float tien = 0;
	printf("Moi nhap so Kwh dien su dung: ");
	scanf("%d", &Kwh);
	if (Kwh <= 50)
	{
		tien = Kwh * 1.678;
	}
	else if (Kwh <= 100)
	{
		tien = 50 * 1.678 + (Kwh - 50) * 1.734;
	}
	else if (Kwh <= 200)
	{
		tien = 50 * 1.678 + 50 * 1.734 + (Kwh - 100) * 2.014;
	}
	else if (Kwh <= 300)
	{
		tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (Kwh - 200) * 2.536;
	}
	else if (Kwh <= 400)
	{
		tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 200 * 2.536 + (Kwh - 300) * 2.834;
	}
	else
	{
		tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 200 * 2.536 + 300 * 2.834 + (Kwh - 400) * 2.927;
	}
	printf("so tien can phai tra la: %f", tien);
}
int doitien(int soTien, int menhGia) 
{
	int soToTien;
	soToTien = soTien / menhGia;
	printf("Co %d to tien menh gia %d\n", soToTien, menhGia);
	soTien %= menhGia;
}
void chucNangDoiTien() 
{
	//khai bao
	int soTien;
	int menhGia[] = { 500,200,100,50,20,10,5,2,1 };
	int soToTien = 0;
	printf("Moi nhap so tien can doi: ");
	scanf("%d", &soTien);
	for (int i = 0; i < 9; i++)
	{
		soTien = doitien(soTien, menhGia[i]);
	}

}
void chucNangTinhLaiNganHang() 
{
	int tienvay, thang = 12;
	float laisuat = 0.05, tienlai, tongtra;

	printf("nhap so tien muon vay: ");
	scanf("%f", &tienvay);

	tienlai = tienvay * laisuat * thang;
	tongtra = tienvay + tienlai;

	printf("\ntien vay: %d", tienvay);
	printf("\nlai suat: 5%%/thang");
	printf("\nky han: 12 thang");
	printf("\ntong tien lai: %f", tienlai);
	printf("\ntong tien phai tra: %f", tongtra);

}
void chuongTrinhVayTienMuaXe() 
{
	int nam = 24, tienvv, thang = nam * 12;
	float tratruoc, tienlai, tongtra, trathang, laisuat = 0.072;
	float laithang = laisuat / 12, tienvay = 500000000, phantramvay;

	printf("nhap gia tien vay: ");
	scanf("%d", &tienvv);
	printf("nhap phan tram vay: ");
	scanf("%f", &phantramvay);

	tratruoc = tienvv * (100 - phantramvay) / 100;
	tienlai = tienvay * laithang * thang;
	tongtra = tienvay + tienlai;
	trathang = tongtra / thang;

	printf("tien tra truoc: %f\n", tratruoc);
	printf("tong tien lai: %f\n", tienlai);
	printf("tong phai tra trong 24 nam: %f\n", tongtra);
	printf("tra moi thang: %f\n", trathang);
}

void gameFPOLY_LOTT()
{
	int a, b;
	printf("Moi nhap so a: ");
	scanf("%d", &a);
	printf("Moi nhap so b: ");
	scanf("%d", &b);



	//rand
	srand(time(NULL));
	//rand() % (max-min+1)+ min
	int random1 = rand() % 15 + 1;
	int random2 = rand() % 15 + 1;

	printf("So chung giai la: %d va %d\n", random1, random2);

	//a = random1 && b = random2
	//b = ramdom1 && a = random2
	//giai nhi
	// a = random1 || a == random2 || b == random1 || b == random2
	if ((a == random1 && b == random2) || (b == random1 && a == random2))
	{
		printf("\nChuc mung ban da chung giai nhat");
	}
	else if (a == random1 || a == random2 || b == random1 || b == random2)
	{
		printf("\nChuc mung ban da chung giai nhi");
	}
	else
	{
		printf("\nChuc ban may man lan sau");
	}
}
void chuongTrinhTinhToanPhanSo() 
{
	int a, b, c, d;
	//nhap phan so thu nhat
	printf("Moi nhap so a: ");
	scanf("%d", &a);
	printf("Moi nhap so b: ");
	scanf("%d", &b);
	//nhap phan so thu hai
	printf("Moi nhap so c: ");
	scanf("%d", &c);
	printf("Moi nhap so d: ");
	scanf("%d", &d);
	//tinh toan
	int tong_tu = a * b + d * c;
	int tong_mau = b * d;
	int hieu_tu = a * d - b * c;
	int hieu_mau = b * d;
	int tich_tu = a * c;
	int tich_mau = b * d;
	int thuong_tu = a * d;
	int thuong_mau = b * c;
	//in ra man hinh
	printf("Tong = %d/%d\n", tong_tu, tong_mau);
	printf("Hieu = %d/%d\n", hieu_tu,hieu_mau);
	printf("Tich = %d/%d\n", tich_tu,tich_mau);
	printf("Thuong = %d/%d\n", thuong_tu,thuong_mau);
}
void lapChucNang(chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungBoiChung();
			break;
		case 3:
			tinhTienQuanKaraoke();
			break;
		case 4:
			chucNangTinhTienDien();
			break;
		case 5:
			chucNangDoiTien();
			break;
		case 6:
			chucNangTinhLaiNganHang();
			break;
		case 7:
			chuongTrinhVayTienMuaXe();
			break;
		case 8:
			// ten chuc nang so 8
			break;
		case 9:
			gameFPOLY_LOTT();
			break;
		case 10:
			chuongTrinhTinhToanPhanSo();
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}
int main()
{
	int chonChucNang;
	do
	{
		printf("****************************************************************\n");
		printf("*                           Menu                               *");
		printf("\n");
		printf("*1. Kiem Tra So Nguyen                                         *");
		printf("\n");
		printf("*2. Tim uoc chung boi chung cua 2 so                           *");
		printf("\n");
		printf("*3. Chuong trinh tinh ten quan Karaoke                         *");
		printf("\n");
		printf("*4. Chuc nang tinh tien dien                                   *");
		printf("\n");
		printf("*5. Chuc nang doi tien                                         *");
		printf("\n");
		printf("*6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop *");
		printf("\n");
		printf("*7. Xay dung chuong trinh vay tien mua xe                      *");
		printf("\n");
		printf("*8. Sap xep thong tin sinh vien                                *");
		printf("\n");
		printf("*9. Xay dung game FPOLY-LOTT(2/15)                             *");
		printf("\n");
		printf("*10. Xay dung chuong trinh tinh toan phan so                   *");
		printf("\n");
		printf("****************************************************************\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}

// GV: AnhTT184