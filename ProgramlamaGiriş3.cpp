// Geliştirici: ABDOUL FARIDE BASSIROU ALZOUMA               -
//                                                           -
// Öğrenci NO: B201200575                                    -
//                                                           -
// Ödev NO: 3                                                -
//                                                           -
// Ödev açıklaması:                                          -
//                                                           -
// 3 parçadan oluşan ve her parçanın da kendi içerisinde     -
// alt parçalardan oluştuğu bir ürünün üretim zamanı         -
// planlaması geliştirilen bir programıdır.                  -
//------------------------------------------------------------


#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>

using namespace std;

void A_parcasi_icin_gerekliMalzemeGetir();
void A_parcasi_icin_RastgeleDepoDoldur();
void A_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt();
void A_parcasi_icin_BirimBasinaUretimiGerekliSureGetir();
void A_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla();
void A_dosyayayaz();

void B_parcasi_icin_gerekliMalzemeGetir();
void B_parcasi_icin_RastgeleDepoDoldur();
void B_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt();
void B_parcasi_icin_BirimBasinaUretimiGerekliSureGetir();
void B_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla();
void B_dosyayayaz();

void C_parcasi_icin_gerekliMalzemeGetir();
void C_parcasi_icin_RastgeleDepoDoldur();
void C_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt();
void C_parcasi_icin_BirimBasinaUretimiGerekliSureGetir();
void C_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla();
void C_dosyayayaz();

void ToplamDosyayayaz();

int main()
{
	cout << "A parcasi Bilgileri" << endl;
	
	A_parcasi_icin_gerekliMalzemeGetir();

    A_parcasi_icin_RastgeleDepoDoldur();
	
	A_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt();

	A_parcasi_icin_BirimBasinaUretimiGerekliSureGetir();

	A_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla();

	A_dosyayayaz();

	cout << "\nB parcasi Bilgiler:" << endl;
	
	B_parcasi_icin_gerekliMalzemeGetir();
	 
	B_parcasi_icin_RastgeleDepoDoldur();

	B_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt();

	B_parcasi_icin_BirimBasinaUretimiGerekliSureGetir();

	B_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla();
	 
	B_dosyayayaz();

	 cout << "\nC parcasi Bilgiler:" << endl;

	C_parcasi_icin_gerekliMalzemeGetir();

	C_parcasi_icin_RastgeleDepoDoldur();

	C_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt();

	C_parcasi_icin_BirimBasinaUretimiGerekliSureGetir();

	C_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla();

	C_dosyayayaz();

	ToplamDosyayayaz();
}

void A_parcasi_icin_gerekliMalzemeGetir()
{
	cout << "Gerekli Malzemeler:" << endl;

	int a_parcalari[5] = { 20,58,70,63,80};

	for (int i = 0; i < 5; i++)
	{
		cout << "a" << (i + 1) << " = " << a_parcalari[i] << "br." << setw(6);
	}
	cout << endl;
}
void A_parcasi_icin_RastgeleDepoDoldur()
{
	cout << "Depo Durumu:" << endl;

	srand(time(NULL));

	int A_depo_durumu[5];

	for (int i = 0; i < 5; i++)
	{
		A_depo_durumu[i] = rand() % 101;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "a" << (i + 1) << " = " << A_depo_durumu[i] << "br." << setw(6);
	}
	cout << endl;
}
void A_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt()
{
	srand(time(NULL));

	cout << "Ihtiyac duyulan Malzeme:" << endl;

	int A_icin_ihtiyac_duyulan_malzeme[5];
	
	int a_parcalari[5] = { 20,58,70,63,80 };
	int A_depo_durumu[5];

	for (int i = 0; i < 5; i++)
	{
		A_depo_durumu[i] = rand() % 101;
	}

		for (int i = 0; i < 5; i++)
		{
			A_icin_ihtiyac_duyulan_malzeme[i] = a_parcalari[i] - A_depo_durumu[i];
			cout << "a" << (i + 1) << " = " << A_icin_ihtiyac_duyulan_malzeme[i] << "br." << setw(6);			
		}
		cout << endl;
}
void A_parcasi_icin_BirimBasinaUretimiGerekliSureGetir()
{
	cout << "Birim basina uretim Gerekli Sure:" << endl;

	int A_icin_birim_basina_uretim_sure[5] = { 2,5,7,6,8 };

	for (int i = 0; i < 5; i++)
	{
		cout << "a" << (i + 1) << " = " << A_icin_birim_basina_uretim_sure[i] << "gun" << setw(6);
	}
}
void A_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla()
{
	srand(time(NULL));

	int A_icin_ihtiyac_duyulan_malzeme[5];

	int a_parcalari[5] = { 20,58,70,63,80 };

	int A_depo_durumu[5];

	for (int i = 0; i < 5; i++)
	{
		A_depo_durumu[i] = rand() % 101;
	}

	int A_icin_birim_basina_uretim_sure[5] = { 2,5,7,6,8 };
	int A_icin_Yetersiz_Malzeme_uretim_suresi[5];

	int A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 5; i++)
	{
		A_icin_ihtiyac_duyulan_malzeme[i] = a_parcalari[i] - A_depo_durumu[i];

		if (A_icin_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			A_icin_Yetersiz_Malzeme_uretim_suresi[i] = A_icin_ihtiyac_duyulan_malzeme[i] * A_icin_birim_basina_uretim_sure[i];
			A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += A_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			A_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}
	cout << endl;

	cout << "Toplam Gerekli Zaman" <<endl;
	cout<<"A parcasi icin gerekli Zaman = "<< A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure<<"gun" << endl;
}
void A_dosyayayaz()
{
	srand(time(NULL));

	ofstream YazmaDosyasi("B201200575.txt");

	YazmaDosyasi << "Uretim icin Toplam gerekli Sure:" << endl;

	int A_icin_ihtiyac_duyulan_malzeme[5];

	int a_parcalari[5] = { 20,58,70,63,80 };

	int A_depo_durumu[5];

	for (int i = 0; i < 5; i++)
	{
		A_depo_durumu[i] = rand() % 101;
	}

	int A_icin_birim_basina_uretim_sure[5] = { 2,5,7,6,8 };

	int A_icin_Yetersiz_Malzeme_uretim_suresi[5];

	int A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 5; i++)
	{
		A_icin_ihtiyac_duyulan_malzeme[i] = a_parcalari[i] - A_depo_durumu[i];

		if (A_icin_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			A_icin_Yetersiz_Malzeme_uretim_suresi[i] = A_icin_ihtiyac_duyulan_malzeme[i] * A_icin_birim_basina_uretim_sure[i];

			A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += A_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			A_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}

	YazmaDosyasi << "A parcasi = "<<setw(10)<< A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure<<"gun"<< endl;

	int A_Montaj = 3;

	YazmaDosyasi << "A Montaj = " <<setw(11)<< A_Montaj<<"gun"<< endl;

	YazmaDosyasi.close();
}

void B_parcasi_icin_gerekliMalzemeGetir()
{
	cout << "Gerekli Malzemeler:" << endl;

	int b_parcalari[7] = { 10,30,45,58,70,10,12 };

	for (int i = 0; i < 7; i++)
	{
		cout << "b" << (i + 1) << " = " << b_parcalari[i] << "br." << setw(6);
	}
	cout << endl;
}
void B_parcasi_icin_RastgeleDepoDoldur()
{
	cout << "Depo Durumu:" << endl;

	srand(time(NULL));

	int B_depo_durumu[7];

	for (int i = 0; i < 7; i++)
	{
		B_depo_durumu[i] = rand() % 101;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << "b" << (i + 1) << " = " << B_depo_durumu[i] << "br." << setw(6);
	}
	cout << endl;
}
void B_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt()
{
	srand(time(NULL));

	cout << "Ihtiyac duyulan Malzeme:" << endl;

	int B_icin_ihtiyac_duyulan_malzeme[7];

	int b_parcalari[7] = { 10,30,45,58,70,10,12 };

	int B_depo_durumu[7];

	for (int i = 0; i < 7; i++)
	{
		B_depo_durumu[i] = rand() % 101;
	}

	for (int i = 0; i < 7; i++)
	{
		B_icin_ihtiyac_duyulan_malzeme[i] = b_parcalari[i] - B_depo_durumu[i];

		cout << "b" << (i + 1) << " = " << B_icin_ihtiyac_duyulan_malzeme[i] << "br." << setw(6);
	}
	cout << endl;
}
void B_parcasi_icin_BirimBasinaUretimiGerekliSureGetir()
{
	cout << "Birim basina uretim Gerekli Sure:" << endl;

	int B_icin_birim_basina_uretim_sure[7] = { 1,3,4,5,7,10,12 };

	for (int i = 0; i < 7; i++)
	{
		cout << "b" << (i + 1) << " = " << B_icin_birim_basina_uretim_sure[i] << "gun" << setw(6);
	}
}
void B_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla()
{
	srand(time(NULL));

	int B_ihtiyac_duyulan_malzeme[7];

	int b_parcalari[7] = { 10,30,45,58,70,10,12 };

	int B_depo_durumu[7];

	for (int i = 0; i < 7; i++)
	{
		B_depo_durumu[i] = rand() % 101;
	}

	int B_icin_birim_basina_uretim_sure[7] = { 1,3,4,5,7,10,12 };

	int B_icin_Yetersiz_Malzeme_uretim_suresi[7];

	int B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 7; i++)
	{
		B_ihtiyac_duyulan_malzeme[i] = b_parcalari[i] - B_depo_durumu[i];

		if (B_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			B_icin_Yetersiz_Malzeme_uretim_suresi[i] = B_ihtiyac_duyulan_malzeme[i] * B_icin_birim_basina_uretim_sure[i];

			B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += B_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			B_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}
	cout << endl;

	cout << "Toplam Gerekli Zaman" << endl;

	cout << "B parcasi icin gerekli Zaman = " << B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure << "gun" << endl;
}
void B_dosyayayaz()
{
	srand(time(NULL));
	
	ofstream YazmaDosyasi("B201200575.txt", ios::app);

	int B_ihtiyac_duyulan_malzeme[7];

	int b_parcalari[7] = { 10,30,45,58,70,10,12 };

	int B_depo_durumu[7];

	for (int i = 0; i < 7; i++)
	{
		B_depo_durumu[i] = rand() % 101;
	}

	int B_icin_birim_basina_uretim_sure[7] = { 1,3,4,5,7,10,12 };

	int B_icin_Yetersiz_Malzeme_uretim_suresi[7];

	int B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 7; i++)
	{
		B_ihtiyac_duyulan_malzeme[i] = b_parcalari[i] - B_depo_durumu[i];

		if (B_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			B_icin_Yetersiz_Malzeme_uretim_suresi[i] = B_ihtiyac_duyulan_malzeme[i] * B_icin_birim_basina_uretim_sure[i];

			B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += B_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			B_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}

	YazmaDosyasi << "B parcasi = " <<setw(10)<< B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure<<"gun"<< endl;

	int B_Montaj = 7;

	YazmaDosyasi << "B Montaj = " <<setw(11)<< B_Montaj<<"gun" << endl;

	YazmaDosyasi.close();
}

void C_parcasi_icin_gerekliMalzemeGetir()
{
	cout << "Gerekli Malzemeler:" << endl;

	int c_parcalari[3] = { 20,82,40 };

	for (int i = 0; i < 3; i++)
	{
		cout << "c" << (i + 1) << " = " << c_parcalari[i] << "br." << setw(6);
	}
	cout << endl;
}
void C_parcasi_icin_RastgeleDepoDoldur()
{
	cout << "Depo Durumu:" << endl;

	srand(time(NULL));

	int C_depo_durumu[3];

	for (int i = 0; i < 3; i++)
	{
		C_depo_durumu[i] = rand() % 101;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "b" << (i + 1) << " = " << C_depo_durumu[i] << "br." << setw(6);
	}
	cout << endl;
}
void C_parcasi_icin_ihtiyacDuyulanMalzemeKontrolEt()
{
	srand(time(NULL));

	cout << "Ihtiyac duyulan Malzeme:" << endl;

	int C_icin_ihtiyac_duyulan_malzeme[3];

	int c_parcalari[3] = { 20,82,40 };

	int C_depo_durumu[3];

	for (int i = 0; i < 3; i++)
	{
		C_depo_durumu[i] = rand() % 101;
	}

	for (int i = 0; i < 3; i++)
	{
		C_icin_ihtiyac_duyulan_malzeme[i] = c_parcalari[i] - C_depo_durumu[i];

		cout << "c" << (i + 1) << " = " << C_icin_ihtiyac_duyulan_malzeme[i] << "br." << setw(6);
	}
	cout << endl;
}
void C_parcasi_icin_BirimBasinaUretimiGerekliSureGetir()
{
	cout << "Birim basina uretim Gerekli Sure:" << endl;

	int C_icin_birim_basina_uretim_sure[3] = { 2,8,4 };

	for (int i = 0; i < 3; i++)
	{
		cout << "c" << (i + 1) << " = " << C_icin_birim_basina_uretim_sure[i] << "gun" << setw(6);
	}
}
void C_parcasi_icin_Yetersiz_Malzeme_icin_Uretim_Sure_Hesapla()
{
	srand(time(NULL));

	int C_ihtiyac_duyulan_malzeme[3];

	int c_parcalari[3] = { 20,82,40 };

	int C_depo_durumu[3];

	for (int i = 0; i < 3; i++)
	{
		C_depo_durumu[i] = rand() % 101;
	}

	int C_icin_birim_basina_uretim_sure[3] = { 2,8,4 };

	int C_icin_Yetersiz_Malzeme_uretim_suresi[3];

	int C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 3; i++)
	{
		C_ihtiyac_duyulan_malzeme[i] = c_parcalari[i] - C_depo_durumu[i];

		if (C_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			C_icin_Yetersiz_Malzeme_uretim_suresi[i] = C_ihtiyac_duyulan_malzeme[i] * C_icin_birim_basina_uretim_sure[i];

			C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += C_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			C_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}
	cout << endl;

	cout << "Toplam Gerekli Zaman:" << endl;

	cout << "C parcasi icin gerekli Zaman = " << C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure << "gun" << endl;
}
void C_dosyayayaz()
{

	srand(time(NULL));

	ofstream YazmaDosyasi("B201200575.txt", ios::app);

	int C_ihtiyac_duyulan_malzeme[3];

	int c_parcalari[3] = { 20,82,40 };

	int C_depo_durumu[3];

	for (int i = 0; i < 3; i++)
	{
		C_depo_durumu[i] = rand() % 101;
	}

	int C_icin_birim_basina_uretim_sure[3] = { 2,8,4 };

	int C_icin_Yetersiz_Malzeme_uretim_suresi[3];

	int C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 3; i++)
	{
		C_ihtiyac_duyulan_malzeme[i] = c_parcalari[i] - C_depo_durumu[i];

		if (C_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			C_icin_Yetersiz_Malzeme_uretim_suresi[i] = C_ihtiyac_duyulan_malzeme[i] * C_icin_birim_basina_uretim_sure[i];

			C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += C_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			C_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}
	
	YazmaDosyasi << "C parcasi = " <<setw(10) << C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure<<"gun" << endl;

	int C_Montaj = 8;

	YazmaDosyasi << "C Montaj = " <<setw(11)<< C_Montaj << "gun"<<endl;

	int UrunMontaj = 12;

	YazmaDosyasi << "Urun Montaj = " << setw(8) << UrunMontaj << "gun" << endl;

	YazmaDosyasi << "--------------------------------" << endl;

	YazmaDosyasi.close();
}
void ToplamDosyayayaz()
{
	srand(time(NULL));

	int A_icin_ihtiyac_duyulan_malzeme[5];

	int a_parcalari[5] = { 20,58,70,63,80 };

	int A_depo_durumu[5];

	for (int i = 0; i < 5; i++)
	{
		A_depo_durumu[i] = rand() % 101;
	}

	int A_icin_birim_basina_uretim_sure[5] = { 2,5,7,6,8 };

	int A_icin_Yetersiz_Malzeme_uretim_suresi[5];

	int A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 5; i++)
	{
		A_icin_ihtiyac_duyulan_malzeme[i] = a_parcalari[i] - A_depo_durumu[i];

		if (A_icin_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			A_icin_Yetersiz_Malzeme_uretim_suresi[i] = A_icin_ihtiyac_duyulan_malzeme[i] * A_icin_birim_basina_uretim_sure[i];

			A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += A_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			A_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}

	int A_Montaj = 3;

	srand(time(NULL));

	int B_ihtiyac_duyulan_malzeme[7];

	int b_parcalari[7] = { 10,30,45,58,70,10,12 };

	int B_depo_durumu[7];

	for (int i = 0; i < 7; i++)
	{
		B_depo_durumu[i] = rand() % 101;
	}

	int B_icin_birim_basina_uretim_sure[7] = { 1,3,4,5,7,10,12 };

	int B_icin_Yetersiz_Malzeme_uretim_suresi[7];

	int B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 7; i++)
	{
		B_ihtiyac_duyulan_malzeme[i] = b_parcalari[i] - B_depo_durumu[i];

		if (B_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			B_icin_Yetersiz_Malzeme_uretim_suresi[i] = B_ihtiyac_duyulan_malzeme[i] * B_icin_birim_basina_uretim_sure[i];

			B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += B_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			B_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}

	int B_Montaj = 7;

	srand(time(NULL));

	int C_ihtiyac_duyulan_malzeme[3];

	int c_parcalari[3] = { 20,82,40 };

	int C_depo_durumu[3];

	for (int i = 0; i < 3; i++)
	{
		C_depo_durumu[i] = rand() % 101;
	}

	int C_icin_birim_basina_uretim_sure[3] = { 2,8,4 };

	int C_icin_Yetersiz_Malzeme_uretim_suresi[3];

	int C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure = 0;

	for (int i = 0; i < 3; i++)
	{
		C_ihtiyac_duyulan_malzeme[i] = c_parcalari[i] - C_depo_durumu[i];

		if (C_ihtiyac_duyulan_malzeme[i] >= 0)
		{
			C_icin_Yetersiz_Malzeme_uretim_suresi[i] = C_ihtiyac_duyulan_malzeme[i] * C_icin_birim_basina_uretim_sure[i];

			C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure += C_icin_Yetersiz_Malzeme_uretim_suresi[i];
		}
		else
			C_icin_Yetersiz_Malzeme_uretim_suresi[i] = 0;
	}

	int C_Montaj = 8;

	int UrunMontaj = 12;

	ofstream YazmaDosyasi("B201200575.txt", ios::app);

	int Toplam = A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure + A_Montaj + B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure + B_Montaj + C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure + C_Montaj + UrunMontaj;
	
	YazmaDosyasi << "Toplam = " << setw(13) <<Toplam<< "gun" << endl;

	YazmaDosyasi.close();

	cout << endl;

	cout << "Uretim icin Toplam gerekli Sure" << endl;

	cout << "A parcasi = "<<setw(10) << A_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure<<"gun" << endl;
	cout << "A Monataj = "<<setw(10) << A_Montaj<<"gun" << endl;
	cout << "B parcasi = " << setw(10) << B_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure<<"gun" << endl;
	cout << "B Montaj = "<<setw(11) << B_Montaj<<"gun" << endl;
	cout << "C parcasi = "<<setw(10) << C_icin_Yetersiz_Malzeme_icin_uretim_ToplamSure<<"gun" << endl;
	cout << "C Montaj = "<<setw(11) << C_Montaj<<"gun" << endl;
	cout << "Urun Montaj = " <<setw(8)<< UrunMontaj<<"gun" << endl;
	cout << "-----------------------------" << endl;
	cout << "Toplam = " << setw(13) << Toplam << "gun" << endl;
}