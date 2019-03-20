#include <stdio.h>
#include <stdio.h>
int asalmi(int a)// asallık kontrol fonksiyonu 3. soru çözümü için yazmıştım.
{
	int kontrol=1;
	int j;
	for(j=2;j<a;j++)
	{
		if(a%j==0)
			{
				kontrol= 0;
				break;
			}
	}
	return kontrol;
}
int main()
{
	int sayi=2;
	int sayac=0;
	while(1)
	{
		if(asalmi(sayi)==1){sayac++;}//sayı asal ise sayacı artır
		if(sayac==10001){printf("%d",sayi); break;}// sayac 1001 olduğunda sayıyı yazdır ve döngüyü kır.
		sayi++;//sayıyı artır
	}
}
