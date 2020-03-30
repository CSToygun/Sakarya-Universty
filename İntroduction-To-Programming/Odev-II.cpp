/****************************************************************************
**				ÖĞRENCİ ADI : İBRAHİM SAİT KAVAS                           **
**				ÖĞRENCİ NUMARASI : G191210378                              **
**				DERS GRUBU : II.OGRETIM A (2A)                             **
*****************************************************************************/
#include <iostream>	
#include <ctime>	// Her program  calıstirildiginda olusan random atamada benzer sayilar cıkmamasi icin gerekli.
#include <iomanip> //swap islemi için bu kutphaneye ihtiyac vardır.
using namespace std;
void YeniMatrisYazdirma(); //Editorun Matris yazdirma icin olusan fonksiyon prototib bildirimi.
void SecimSecenek();		//Editorun Secenekler icin olusan fonksiyon prototib bildiririmi.
int secim;
int Boyut, Satir, Sutun, Sat, Sut;  //Programda gerekli olan degisgenler degisik fonksiyonlar oldugundan dolayı global degisgen olarak tanımlandı.
int sayidizi[25][25];
int main()
{
	srand(time(0)); //random sayı atamada benzer sayılar cikmamasi icin zaman ayarı yapar.
	system("color 2");
	cout << "   ! MATRISLER ILE ISLEM PROGRAMIMIZA HOSGELDINIZ !  " << endl;
	cout << "Matris Boyutunu Giriniz : ";
	cin >> Boyut;
	while (Boyut < 5 || Boyut > 25) // Girilen boyutun uygun aralikta olup olmadigini kontrol etmek icin kullanıldı.
	{
		if (Boyut >= 5 && Boyut <= 25) // eger uygun aralıkta ise dongunun durdurulmasi icin yapıldı.
		{
			break;
		}
		else
			cout << "LUTFEN MATRIS BOYUTUNU 5-25 ARASINDA GIRINIZ ! "; cin >> Boyut;
	}
	for (int Sat = 0; Sat < Boyut; Sat++)  //boyut degeri kadar her indise random deger atama icin ic ice 2 for kullanıldı.
	{
		for (int Sut = 0; Sut < Boyut; ++Sut) 
		{
			sayidizi[Sat][Sut] = rand() % 9 + 1;
		}
	}
	do //Uygun seceneklerin secilip secilmedigini kontrol eder. Eger secilmedi ise dongu tekrar eder.
	{
		YeniMatrisYazdirma(); //matris fonksiyonu cagirildi.
		SecimSecenek(); //secim fonksiyonu cagirildi.
		if (secim <= 5)
		{
			break;
		}
		else
			cout << " \n ! LUTFEN UYGUN ARALIKTA SECENEK GIRINIZ ! : " << endl << endl;
	} while (true); //Uygun seceneklerin secilip secilmedigini kontrol eder. Eger secilmedi ise dongu tekrar eder.
	switch (secim) //secilen secenege gore yapılacak islemler icin kullanıldı.
	{
		case 1: {
			do { //Satir ve Sutun degerlerinin matris boyutundan buyuk olmaması icin  kontrol amacli dongu kulllanıldi.
				cout << "SATIR DEGERINI GIRINZZ : ";
				cin >> Satir;	
				cout << "SUTUN DEGERINI GIRINIZ : "; //satir sutun degerleri alindi.
				cin >> Sutun;
				if (Satir <= Boyut && Sutun <= Boyut) //Satir ve Sutun degerlerinin matris boyutundan buyuk olmaması icin kontrol amacli kulllanıldi
				{
					Satir--; //Matris indisi 0 dan basladiginden dolayı girilen deger 1 azaltıldı.
					Sutun--; //Matris indisi 0 dan basladiginden dolayı girilen deger 1 azaltıldı.
					for (int Sat = 0; Sat < Boyut; Sat++) //Döngünün tekrar sayısını bhelirtmek icin kullanldı. (icindeki degisgenin pek onemi yok)
					{
						swap(sayidizi[Satir][Sat], sayidizi[Sat][Sutun]); //istenilen degerlerin yer degistirilmesi icin kullanildi.
					}
					sayidizi[Satir][Sutun] += sayidizi[Sutun][Sutun]; //kesisen indislerin toplami icin kullanildi.
					sayidizi[Sutun][Sutun] = sayidizi[Satir][Satir]; // Toplam matrise atildi.
					break;
				}
				else
					cout << "\n  ! Satir Ve Sutun Degeri Matris Boyutundan Buyuk Olamaz ! " << endl << endl;
					YeniMatrisYazdirma(); 
					SecimSecenek();
			} while (Satir > Boyut || Sutun > Boyut); //Satir ve Sutun degerlerinin matris boyutundan buyuk olmaması icin do-while kontrol amacli dongu kulllanıldi.
			YeniMatrisYazdirma();
			break; // secimde ki tum islemler bittikten sonra switchin durdurulması icin kullanıldi , eger kullanilmas ise diger seceneklerde islenebilir.
		}
		case 2: {
			do { //Satir  degerlerinin matris boyutundan buyuk olmaması icin  kontrol amacli dongu kulllanıldi.
				int gecici;
				cout << "SATIR DEGERINI GIRINZZ : ";
				cin >> Satir;
				Satir--; //Satir degeri 1 azaltildi
				if (Satir <= Boyut) //Girilen deger istenilen deger icin uygun ise burada islem görür. degil ise elseye gider.
				{
					for (int Sati = 0; Sati < Boyut; Sati++)
					{												// 2 for da dongu sayisi icin kullanildi.
						for (int Sutu = 0; Sutu < Boyut; Sutu++)
						{
							if (0 == sayidizi[Satir][Sutu] % 2) // cift sayilari belirlemek icin kullanildi.
							{
								gecici = sayidizi[Satir][Sati]; // önce teklerin yazdırılabilmesi icin gecici degisgene atandi.
								sayidizi[Satir][Sati] = sayidizi[Satir][Sutu];
								sayidizi[Satir][Sutu] = gecici;
							}
						}
					}
					break; //dongü duruduldu
				}
				else
					cout << "Satir Degeri Matris Boyutundan Buyuk Olamaz ! " << endl;
			} while (Satir > Boyut); //Satir degerlerinin matris boyutundan buyuk olmaması icin do-while kontrol amacli dongu kulllanıldi.
		}
			YeniMatrisYazdirma();//2.secenekteki matris yazdirildi
			break;
		case 3: 
		{
			do {  //Sutun degerlerinin matris boyutundan buyuk olmaması icin do-while kontrol amacli dongu kulllanıldi.
				cout << "SUTUN DEGERINI GIRINZZ : ";
				cin >> Sutun;
				Sutun--; //matris indisi 0 dan basladildiginden dolayi 1 azaltildi.
				if (Sutun <= Boyut) // igirilen deger istenilen deger arasında ise if icine girecek degil ise elseye gider.
				{
					for (int i = 0; i <= Boyut / 2; ++i) // boyutun yarisi kadar döngü yapacak.
					{
						swap(sayidizi[i - 1][Sutun], sayidizi[Boyut - i][Sutun]); //yer degistirme icin kullanildi. -1 indis degeri olmadıgında dolayi  i-1 icin uyari veriyor. i=1 ile cozulebilir.
					}
					break; //3. secenegi durdurdu.
				}
				else
					cout << "Sutun Degeri Matris Boyutundan Buyuk Olamaz ! " << endl;
			} while (Sutun > Boyut); //Sutun degerlerinin matris boyutundan buyuk olmaması icin do-while kontrol amacli dongu kulllanıldi.
			YeniMatrisYazdirma();
			break;
		}
		case 4:
		{
			int DegerToplam = 0; //Toplam icin yeni degisken atandı
			for (int i = 0; i < Boyut; ++i) //dongü sayisi icin kullanildi. icinde ki degisgen isimlerinin bir önemi yok
			{
				for (int j = 0; j < Boyut; ++j)//dongü sayisi icin kullanildi. icinde ki degisgen isimlerinin bir önemi yok
				{
					DegerToplam += sayidizi[i][j]; // tek tek matrisin tüm indis degerleri toplanıp toplama atandı
				}
			}
			for (int Sat = 0; Sat < Boyut; Sat++) //dongü sayisi icin kullanildi. icinde ki degisgen isimlerinin bir önemi yok
			{
				for (int Sut = 0; Sut < Boyut; Sut++) //dongü sayisi icin kullanildi. icinde ki degisgen isimlerinin bir önemi yok
				{
					sayidizi[Sat][Sut] = DegerToplam - sayidizi[Sat][Sut]; // tek tek matrisin tüm indis degerleri toplamdan cikartilip atandı.
					DegerToplam = sayidizi[Sat][Sut]; 
				}
			}
			YeniMatrisYazdirma(); // istenilen matris yazdirildi.
			cout << endl;
			break;
		}
		default:
			cout << " \t \n \n -- ! PROGRAMDAN CIKIS YAPILDI ! ---"; // 5. secenek secilir ise program hicbir islem yapmadan kapatılır.
		}
		system("PAUSE"); // program durdurulu.
		return 0; // programın  dogru calistirildigi varsayildi.
}
void YeniMatrisYazdirma()//Matris yazdirma icin fonksiyon yazildi. Fonksiyon isminin bir önemi yoktur.
{
	cout << "      ";
	for (int i = 0; i < Boyut; ++i)  // sutun numaraları icin dongu yapılıp tek tek yazdirildi.
	{
		cout << setw(5); //5 tane bosluk konuldu.
		cout << i + 1;
	}
	cout << endl;
	cout << "      ";
	for (int i = 0; i < Boyut; ++i)   // sutun numaralarının altında ki cizgi icin dongu yapılıp tek tek yazdirildi.
	{
		cout << setw(5);
		cout << "__";
	}
	cout << "\n";
	cout <<setw(5);
	for (int Sat = 0; Sat < Boyut; Sat++) // matrisin her indis degeri tek tek dongu ile ekrana yazdirildi.
	{
		cout << Sat + 1 << "|"<<setw(5);
		for (int Sut = 0; Sut < Boyut; Sut++) 
		{
			cout << sayidizi[Sat][Sut] << setw(5); // degisgenler tek tek degstirilerek yazidirilma islemi yapildi.
		}
		cout << endl;
	}
}
void SecimSecenek() //secenekler icin fonksiyon yazildi.
{
	cout << "\n" << endl;
	cout << "\n 1- Sutun - Satir Degistir : \n 2- Tekleri Ciftleri Sirala(Satir) : \n 3- Ters Cevir(Sutun) : \n 4- Toplamlari Yazdir : \n 5- Programi Kapat !  \n LUTFEN SECIMINIZI YAPINIZ :" << endl;
	cin >> secim; //girilen deger secime atandi.
}