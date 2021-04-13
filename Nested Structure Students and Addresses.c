#include<stdio.h>
#include<string.h>

struct Address{
	char district[15];
	char main_street[15];
	char street[15];
};
struct student{
	char name[20];
	char surname[20];
	int no;
	int age;
	struct Address adres;
};
int main(){
	struct student student132;
	
	strcpy(student132.name,"Mustafa");
	strcpy(student132.surname,"Baltaci");
	student132.no = 132;
	student132.age = 24;
	strcpy(student132.adres.district,"Bahcelievler");
	strcpy(student132.adres.main_street,"7.cad");
	strcpy(student132.adres.street,"1024 sok.");
	
	printf("Personal Info: \nName Surname: %s %s \nStudent No: %d \nAge: %d \n\nAdress Info:\nDistrict: %s \nMain Street: %s \nStreet: %s"
	,student132.name,student132.surname,student132.no,student132.age,student132.adres.district,student132.adres.main_street,student132.adres.street);
}
