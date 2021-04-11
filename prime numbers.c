#include <stdio.h>

/*
Asal Sayi mi degil mi?

Asal sayi 2 den kendisine kadar olan sayılardan hicbirine bölünmeyen bir sayidir.
*/

int asal_mi(int sayi)	{
	
	int i;
	for (i = 2; i < sayi ; i++) {
		
		if (sayi % i ==0)	{
			return 0;
		}
		
		
	}
	return 1;
	
	
}



int main (){
	
	int n;
	printf("Bir sayi giriniz:");
	scanf("%d", &n);
	
	if(asal_mi(n)== 0)  {
		printf("Bu sayi asal degildir");
	}
	else {
		printf("Bu sayi asaldir");
	}
	
	return 0;
}
