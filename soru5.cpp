#include <stdio.h>

int bol(int sayi)// böl foksiyonunu tanımlıyoruz
{
	int deger =1;// fonksiyonun geri döndüreceği değer değişkenini 
	for(int i=10;i<=20;i++)//10 dan 20ye kadar dönecek bir for döngüsü tanımlıyoruz.
	{
		if(sayi%i!=0)//sayı mod i'nin herhangibir değeri 0dan farklı ise degeri 0 yap ve döngüyü kır.// döngüyü krmazsanız programın çalışma süresi çok uzun olacaktır. 
		{
			deger=0;
			break;
		}
	}
	return deger;
}
int main()
{
 int sayi1=1;//sayi degerimizi 1 den başlatıyoruz

   while(1)
   {
      if(bol(sayi1)==1) // eger bol fonksiyonu olumlu değer döndürürse  
      {
          printf("%d\n", sayi1);// dsyiyı yazdır 
          break;//döngüyü bitir böylece en küçük değer  ekrana yazılıp döngü bitirilmiş olacaktır.
      }

      sayi1++;// koşul sağlanmadıysa sayıyı bir artır
   }

}
