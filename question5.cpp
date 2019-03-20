#include <stdio.h>

int bol(int sayi)
{
	int deger =1;
	for(int i=10;i<=20;i++)
	{
		if(sayi%i!=0)
		{
			deger=0;
			break;
		}
	}
	return deger;
}
int main()
{
 int sayi1=1;

   while(1)
   {
      if(bol(sayi1)==1)
      {
          printf("%d\n", sayi1);
          break;
      }

      sayi1++;
   }

return 0;
}
