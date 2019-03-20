#include <stdio.h>
int usal(int sayi, int us)// üs alma fonksiyonu kare almak için kullanacağız 4. soru için yazdığım fonksiyondu.
{
	int sonuc=1;// sonuç değeri 1 çünkü çarpmadaki etkisiz eleman 1dir.
	for(int i=0;i<us;i++)
	{
		sonuc = sonuc*sayi;
	}
	return sonuc;
}

int toplamlar(int ilkdeger , int sondeger)
{
	int ddeger=0;
	if(sondeger - ilkdeger <0){return 0;} // ilk değer son değerden büyükse false döndür
	for(int j=ilkdeger;j<=sondeger;j++)
	{
		ddeger = ddeger+j;
	}
	return ddeger;
}

int tk(int md) // toplamların karesi fonksiyonu alacağı değer olarak maksimum değer değişkeni oluştur.
{
	int toplam;
	toplam = usal(toplamlar(1,md),2);
	return toplam;
}

int kt(int md2) // karelerin toplamı fonksiyonu
{
	int deger=0;
	for(int i=1;i<=md2;i++)
	{
		deger = deger+ usal(i,2);
	}
	return deger;
}
int main()
{
	int a,b;
	a= tk(100);//100e kadar olan sayıların toplamlarının karesi
	b=kt(100);//100 kadar olan sayıların karelerinin toplamı
	printf("%d",a-b);// toplamların karesi - karelerin toplamı
}
