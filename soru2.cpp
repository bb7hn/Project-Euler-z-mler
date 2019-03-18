#include <stdio.h>

int main()
{
	unsigned int a;// fibonacci dizisi ilk terim
	unsigned int b;// ikinci terim
	unsigned int c;// üçüncü terim
	unsigned int toplam;
	a=1;b=2;toplam=2;// döngüyü başlatabilmek için ilk terimi 1 ikinci terimi 2 olarak belirledik ve döngü 3den itibaren hesaplamaya başlayacağı için toplama 2 değerini verdik
	while(c<4000000)// bir sonraki fibonacci terimi 4 milyondan büyük oluncaya kadar döngü sürecek
	{
		c=a+b;//sıradaki terimi hesaplayıp c değişkenine aktarıyor.
		if(c%2==0){toplam+=c;}//c nin 2ye göre modunu alıp 0 ise toplama ekleme işlemini yapıyor.
		a=b;//a değişkenine bnin yani 2. fibonacci teriminin değerini aktarıyor.
		b=c;//b değişkenine de cnin yani 3.fibonacci teriminin değerini aktarıyor. böylece bir sonraki adımda a ve b değerleri değişmiş olacağı için sonsuz bir döngüye girmeden hesaplmaya devam edebilecek.
	}
	
	printf("%u",toplam);// toplam değerini ekrana yazdırıyor.
	
}
