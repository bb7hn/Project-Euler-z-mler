#include <stdio.h>
int usal(long sayi, long us)//bu fonksiyonu 4.soru için yazmıştım
{
	long sonuc=1;
	for(long i=0;i<us;i++)
	{
		sonuc = sonuc*sayi;
	}
	return sonuc;
}

int main()

{
	for(int a=1;a<=999;a++)// a değerini 1 b yi 2 ve c yi 3 ten başlatarak a<b<c koşulunu sağlıyorum ve a b c için her değeri denemiş olmak için for içinde for oluşturdum
	{
		for(int b=2;b<=999;b++)
		{
			for(int c=3;c<=999;c++)
			{
				if(usal(a,2)+usal(b,2)==usal(c,2) and a+b+c==1000)// eğer a kare + b kare = c kare  ise ve a+b+c toplamı 1000 ise 
				{
					int d= a*b*c;
					printf("%d\n",d);// a*b*c çarpımını ekrana yazdır
					return 0;// 0 döndür ve döngülerden çık
				}
			}
		}
	}
	
}
