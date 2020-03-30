/**********************************************************************************
***                                                                             ***
***                  ÖĞRENCİ ADI : İBRAHİM SAİT KAVAS                           ***
***                  ÖĞRENCİ NUMARASI : G191210378                              ***
***                  DERS GRUBU : II. ÖĞRETİM A-GRUBU                           ***
***                                                                             ***
***********************************************************************************/

#include <iostream>
#include <locale.h>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");//Ekrana yazdırılan sözcüklerde türkçe karakter kullanabilmek için kullanılır.
	system("color 2");//Windows.h kütüphanesinde renk ekleme kodu görevi görür.
	int Satir, Sutun, Sutunn = 2 ;

	cout << " \n  ----- PROGAMIMIZA HOŞGELDİNİZ ------  \n\n " << endl;
	
	cout << " LÜTFEN SATIR SAYISINI GİRİNİZ  : ";
	cin >> Satir; //Girilen değeri Satir kelimesine atama yapar.

	while (true)
	{
		if (Satir >= 5 && Satir <= 15)//girilen değerin uygun aralıkta olup olmadığını kontrol eder.
		{
			break; //Döngüyü durdurur.
		}
		else
		{
			cout << " LÜTFEN SATIR SAYISINI 5-15 arasında GİRİNİZ !! : ";
			cin >> Satir;
		}
	}

	cout << " LÜTFEN SÜTUN SAYISINI GİRİNİZ  : ";
	cin >> Sutun;

	while (true)
	{
		if (Sutun >= 5 && Sutun <= 40)//girilen değerin uygun aralıkta olup olmadığını kontrol eder.
		{
			if (Sutun == 2 * Satir) //girilen değerin uygun aralıkta olup olmadığını kontrol eder.Uygun aralıkta ise döngüyü durdurur.
			{
				break;
			}
		}

		else
		{
			cout << " LÜTFEN SÜTUN SAYISINI 5-40 arasında GİRİNİZ !! : ";
			cin >> Sutun;

		}
		if (Sutun == 2 * Satir) //girilen değerin uygun aralıkta olup olmadığını kontrol eder.Uygun aralıkta ise döngüyü durdurur.
		{
			
		}
		else
		{
			cout << "\n SATIR SAYISI SÜTUN SAYISININ 2 KATI OLMALIDIR. TEKRAR GİRİNİZ ! : \n\n";
			cout << " LÜTFEN SATIR SAYISINI GİRİNİZ  : ";
			cin >> Satir;
			cout << " LÜTFEN SÜTUN SAYISINI GİRİNİZ  : ";
			cin >> Sutun;

		}

	}

	for (int SatıR = 0; SatıR < Sutun; SatıR++)//Sütun sayısı kadar yıldız basar
	{
		Sleep(20);
		cout << "*";
	}
	cout << "\n";

	for (int SatiR = Satir; SatiR - 2 >= 1; SatiR--)//satır sayısını belirlemek için kullanılır. Döngünü kaç defa döneceğini belirler.
	{
		Sleep(40);
		cout << "*";
		
		for (int SütuN = 1; SütuN <= SatiR - 3; SütuN++)////yıldızları sol alt köşeden ortaya doğru çapraz basmayı sağlar.
		{
			cout << " ";

		}
		Sleep(40);
		cout << "*";

		for (int bos = 0; bos < Sutunn; bos++)//ortada ki boşlukların 2şer 2şer artırımını sağlar
		{
			cout << " ";
		}
		Sutunn += 2;
		Sleep(40);
		cout << "*";

		for (int SütuN = 1; SütuN < SatiR - 2; SütuN++)//yıldızları sağ alt köşeden ortaya doğru çapraz basmayı sağlar.
		{
			cout << " ";

		}
		Sleep(40);//fonsiyonun yavaş dögüsünü sağlar
		cout << "*";
		cout << "\n";

	}


	for (int SatıR = 0; SatıR < Sutun; SatıR++)//Sütun sayısı kadar yıldız yazdırmak için kullanıyoruz.
	{
		Sleep(20);
		cout << "*";
	}
	
	cout << "\n";
	cout << "\n";

	for (int SatıR = 0; SatıR < Sutun; SatıR++) //Sütun sayısı kadar yıldız yazdırmak için kullanıyoruz.
	{
		Sleep(20);
		cout << "*";
	}
	cout << "\n";

	for (int SatiR=Satir; Satir - 2 >= 1; Satir--) //satır sayısını ve döngüyü belirlemek için kullanıyoruz
	{
		Sleep(40);//fonsiyonun yavaş dögüsünü sağlar
		cout << "*";
		for (int j = SatiR; j >= Satir+1; j--)//yıldızları sol üst köşeden sağ aşşağı ortaya doğru çapraz basmayı sağlar.
		{
			cout << " ";
		}
		Sleep(40);
		cout << "*";

		for (int bos = 2; bos < Sutunn; bos++) //ortada ki boşlukların 2şer 2şer azalmasını sağlar
		{
			cout << " ";
			
		}
		Sutunn -= 2;
		Sleep(40);
		cout << "*";

		for (int j = SatiR; j >= Satir + 1; j--)//yıldızları sağ üst köşeden sol aşşağı ortaya doğru çapraz basmayı sağlar.
		{
			cout << " ";
		}
		Sleep(40);
		cout << "*";
		cout << "\n";
	}
	
	for (int SatıR = 0; SatıR < Sutun; SatıR++)//Sütun sayısı kadar yıldız basar
	{
		Sleep(20);
		cout << "*";
	}
	cout << "\n";
	system("pause");//uygulama sonlandıktan sonra pencerenin aktif kalmasını sağlar.
	cout << "\n";
	cout << "\n";
	
	return 0; //main fonksiyonu için başa sarmayı sağlar.
}