#include <stdio.h>

int main() 
{
	int toplam;
	
	for(int i=0;i<1000;i++)//bin defa tekrar edecek bir döngü başlattık
	{
		if (i%3==0 or i%5==0)// i değeri 3 ya da 5 e kalansız bölünüyor mu kontrol ediyoruz
		{
			toplam+=i; // eğer bölünüyorsa toplama i değerini ekliyoruz
		}
	}
	printf("%d",toplam);// toplam değişkenini ekrana yazdırıyoruz.
	
}
