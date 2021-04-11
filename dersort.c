#include<stdio.h>

int main(){
	int vize1,vize2,final;
	float dersortalamasi;
	
	printf("1.vize ");
	scanf("%d" ,&vize1);
	
	printf("2.vize ");
	scanf("%d" ,&vize2);
	
	printf("final ");
	scanf("%d" ,&final);
	
	dersortalamasi = (vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);
	
	if(dersortalamasi >60){
		
		printf("Dersi Gectiniz ve Ders Ortalamaniz : %f",dersortalamasi);
	}
	else if(dersortalamasi = 60){
		printf("Sinirda kaldiniz ve Ders Ortalamaniz : %f",dersortalamasi);
	}
	else
	printf("Dersten kaldiniz ve Ders Ortalamaniz : %f",dersortalamasi);
}
