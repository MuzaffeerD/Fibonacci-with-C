#include<stdio.h>
struct Students{
	
	char name[15];
	char surname[15];
	int number;
	int age;
	
};

int main(){
	struct Students Ahmet = {"Ahmet","Gedikli",135,23};
/*	printf("%s %s %d %d", Ahmet.name,Ahmet.surname,Ahmet.number,Ahmet.age );*/
	printf("Datas of Student %s %s",Ahmet.name,Ahmet.surname);
	printf("\nName Surname:%s %s \nNo:%d \nAge:%d", Ahmet.name,Ahmet.surname,Ahmet.number,Ahmet.age );	
	
	return 0;
	}
