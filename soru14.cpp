#include <stdio.h>
int collatz(long long sayi)// collatz recursive fonksiyonunu oluşturuyoruz
{
	static long long count=0;// statik bir sayaç oluşturduk yani fonksiyon her kendini tekrar ettiğinde değer fazla fazla artmayacak.
	static long long counta=0;// buna asıl sayımı aktarıp geri döndüreceğiz sonra da asıl sayımı 0layacağızki önceki işlemin üzerine devam etmesin çünkü statik olarak oluşturduk.
	if(sayi%2==0 and sayi!=1)//eğer sayı mod 2 0 ise ve sayı 1 değilse
	{
		collatz(sayi/2);
		count++;
	}
	if(sayi%2!=0 and sayi!=1)//eğer sayı mod 2 0 değilse ve sayı 1 değilse
	{
		collatz(sayi*3+1);
		count++;
	}
	if(sayi==1){counta=count;count=0;return counta;}// eğer sayı 1 ise ikinci sayaca sayacı aktar sayacı sıfırla ve ikinci sayacın değerini döndür
}
int main()
{
	long long temp=0;
	long long sayac;
	long long sonuc;
	for(int i=13;i<=1000000;i++)//1 milyonkez sürecek döngü başlat
	{
		sayac=collatz(i);//sayaca collatz fonksiyonundan gelen değeri aktar
		if(sayac>temp)//eğer sayaç tempten büyükse
		{temp=sayac; sonuc=i;}//tempe sayıcı aktar sonuca sayıyı yani i yi aktar
		
	}
	printf("%llu",sonuc);//sonucu yazdır.
}
