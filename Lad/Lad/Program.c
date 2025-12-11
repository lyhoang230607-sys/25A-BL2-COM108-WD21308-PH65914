#include <stdio.h>
#include <math.h>
#include <string.h>


void tinhTong()
{
	int n;
	int tong;

	printf("Moi nhap so nguyen duong n>3: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			tong = tong = +i;
		}

	}
	if ( n%5==0)
	{
		printf("so %d chia het cho 5\n", n);
	}
	else
	{
		printf("so %d khong chia het cho 5\n", n);
	}

	printf("Tong so le = %d\n", tong);

}
struct thuCung
{
char tenThuCung[50];
	int maThuCung;
	int namSinh;
};
void thongTinThuCung()
{
	struct thuCung tC;

	int i;
	int tuoi;

	for (i = 0; i < 3; i++)
	{
		printf("Moi nhap ten thu cung: ");
		while (getchar() != '\n');
		fgets(tC.tenThuCung, sizeof(tC.tenThuCung), stdin);
		printf("Moi nhap ma thu cung: ");
		scanf("%d", &tC.maThuCung);
		printf("Moi nhap nam sinh: ");
		scanf("%d", &tC.namSinh);


	}



	tuoi = 2025 - tC.namSinh;


	printf("ten thu cung la: %s", tC.tenThuCung);
	printf("Ma thu cung la: %d\n", tC.maThuCung);
	printf("Tuoi thu cung: %d\n", tuoi);






}
void vongLapChucNang(chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1) {
		switch (chonChucNang) {
		case 1:
			thongTinThuCung();
			break;
		case 2:
			tinhTong();
			break;
		case 3:
			//thongTinSinhVienThiLapTrinh();
			break;
		case 0:
			return;
		default:
			printf("Moi nhap lai CN [0-3]");
			return;
		}
		printf("\n");
		printf("Tiep tuc CN nay : [Co-1 || 0-khac ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}
int main() {
	int chonChucNang;
	do
	{
		printf("MENU");
		printf("\n");
		printf("1. Thong tin thu cung");
		printf("\n");
		printf("2. Tinh tong");
		printf("\n");
		printf("3. Thong tin cua hang");
		printf("\n");
		printf("0. THOAT");
		printf("\n");
		printf("Moi cho CN[0-3]: ");
		scanf("%d", &chonChucNang);
		vongLapChucNang(chonChucNang);
	} while (chonChucNang != 0);



}