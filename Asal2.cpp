#include <stdio.h>
#include <conio.h>

main()
{
	
	int sayi1,sayi2,asalmi=0;
	
	printf("ilk sayýyý giriniz : ");
	scanf("%d",&sayi1);
	printf("ikinci sayýyý giriniz : ");
	scanf("%d",&sayi2);
	
	for(sayi1;sayi1<=sayi2;sayi1++)
	{
		for(int i=2;i<sayi1;i++)
		{
			if(sayi1%i=0=)
			{
				asalmi++;
			}
		}
		if(asalmi==0)
		{
			printf("Sayý %d = asal\n",sayi1);
			
		}
		else
		{
			asalmi=0;
		}
	}
	
	getch();
}
