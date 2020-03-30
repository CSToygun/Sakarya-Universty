/****************************************************************************
**                    ÖĞRENCİ ADI: IBRAHIM SAIT KAVAS                      **
**                    ÖĞRENCİ NUMARASI:G198210378                          **
**                    DERS GRUBU: II. OGRETIM A GRUBU (                    **
****************************************************************************/
#include <iostream>
#include <Windows.h>
#include <time.h>               /* Random degerlerin benzer olmaması için eklenecek kütüphane*/
using namespace std;
struct Sahne                 /* Sahne icin gerekli yapilar burada tanimlanir */
{
	int Genislik;
	int Yukseklik;
	char SahneYazdir;
}sahn;
struct LSekli                   /* LSekli icin tanımlanan yapilar burada tanimlanir.*/
{
	int x;
	int y;
	int LBoyut;
	char LYazdir;
}lsek;
LSekli LSekliKaydirma(LSekli Lsekli)                 /* Lseklini assagi kaydirmak icin kullanılan fonksiyon */
{
	++Lsekli.y;
	return Lsekli;
}
void KoordinatAta(int x, int y)           /* Kordinatların ayarlanması icin kullanlacak olan kodlar*/
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
Sahne SahneOlustur();/*Struct ile baglantili Fonksiyonlarin Prototipler belirlendi*/
void SahneCiz(Sahne); /*Fonksiyonlarin Prototipler belirlendi*/
LSekli LSekliOlustur();/* Struct ile baglantili Fonksiyonlarin Prototipler belirlendi*/
void LSekliCiz(LSekli);/*Fonksiyonlarin Prototipler belirlendi*/
int main()
{
	srand(time(0));
	system("color B");            /* System rengini belirlemek icin kullanildi*/
	sahn = SahneOlustur();
	lsek = LSekliOlustur();
	while (true)                  /* Dongunun sonsuz olmasi icin gerekli olan dongu fonnksiyonu */
	{
		system("cls");
		SahneCiz(sahn);
		LSekliCiz(lsek);
		lsek = LSekliKaydirma(lsek);
		if (sahn.Yukseklik == lsek.y + lsek.LBoyut + 2)
		{
			lsek = LSekliOlustur();
		}
		Sleep(100);             /*Fonksiyonun geciklemli olması için gerekli olan kod*/
	}
	cin.get();
}
Sahne SahneOlustur()           /*Sahnenin olusturulabilmesi icin onemli olan degerlerin atanmasi saglanir */
{
	Sahne sahne;
	char Karakterdizi[5] = { '*','#','$','+','@' };
	int karakterindis = rand() % 5;
	srand(time(NULL));
	int Genislikdizi[3] = { 30,40,50 };
	int indis = rand() % 3;
	sahne.Genislik = Genislikdizi[indis];
	sahne.Yukseklik = rand() % 10 + 21;
	sahne.SahneYazdir = Karakterdizi[karakterindis];
	return sahne;
}
void SahneCiz(Sahne sahne)                    /*Sahne Fonksiyonu olusturmak icin gerekli olan for donguleri barındıran fonksiyon. */
{
	for (int i = 0; i < sahne.Genislik; ++i)
	{
		cout << sahne.SahneYazdir;
	}
	for (int j = 0; j < sahne.Yukseklik; ++j)
	{
		KoordinatAta(sahne.Genislik - 1, j);
		cout << sahne.SahneYazdir;
	}
	for (int k = 0; k < sahne.Genislik; k++)			/* Bu forlar sahnenin cizilebilmesi icin kordinatlar kullanılarak ayarlandi.*/
	{
		KoordinatAta(sahne.Genislik - 1 - k, sahne.Yukseklik - 1);
		cout << sahne.SahneYazdir;
	}
	for (int z = 0; z < sahne.Yukseklik; ++z)
	{
		KoordinatAta(0, sahne.Yukseklik - 1 - z);
		cout << sahne.SahneYazdir;
	}
}
LSekli LSekliOlustur()/*Lsekinin olusturulabilmesi icin onemli olan degerlerin atanmasi saglanir */
{
	LSekli Lsekli;
	Lsekli.x = rand() % 20 + 5; /* 5 ile 24 arasında degerlerin atanmasi saglanir */
	Lsekli.y = 3;
	Lsekli.LBoyut = rand() % 7 + 2;
	char karakterdizi2[] = { '*','#','$','+','@' };
	int karakterindis = rand() % 5;
	Lsekli.LYazdir = karakterdizi2[karakterindis];
	return Lsekli;
}
void LSekliCiz(LSekli Lsekli) /*Lseklin cizmek icin gerekli olan for dongulerini barindiran fonksiyon*/
{
	for (int i = 0; i < Lsekli.LBoyut / 2; i++)
	{
		KoordinatAta(Lsekli.x + i, Lsekli.y);
		cout << Lsekli.LYazdir;
	}
	for (int j = 0; j < (Lsekli.LBoyut + 1) / 2; j++)
	{
		KoordinatAta(Lsekli.x + Lsekli.LBoyut / 2, Lsekli.y + j);
		cout << Lsekli.LYazdir;
	}
	for (int k = 0; k < Lsekli.LBoyut / 2 + 1; k++)
	{
		KoordinatAta(Lsekli.x + Lsekli.LBoyut / 2 + k, Lsekli.y + (Lsekli.LBoyut + 1) / 2);
		cout << Lsekli.LYazdir;
	}
	for (int z = 0; z < (Lsekli.LBoyut + 1) / 2; z++)  /* LSekli icin for dongulerinden bazıları kordinat kullanılarak cizildi */
	{
		KoordinatAta(Lsekli.x + Lsekli.LBoyut, Lsekli.y + 1 + (Lsekli.LBoyut) / 2 + z);
		cout << Lsekli.LYazdir;
	}
	for (int a = 0; a < Lsekli.LBoyut + 1; a++)
	{
		KoordinatAta(Lsekli.x + Lsekli.LBoyut - a, Lsekli.y + Lsekli.LBoyut + 1);
		cout << Lsekli.LYazdir;
	}
	for (int b = 0; b < (Lsekli.LBoyut + 1); b++)
	{
		KoordinatAta(Lsekli.x, Lsekli.y + (Lsekli.LBoyut + 1) - b);
		cout << Lsekli.LYazdir;
	}
}