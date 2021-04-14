#include<stdio.h>
#include<string.h>

int main(){
	char data[256];
	int length = strlen(data);
	int i;	
	


	
	FILE *filep = fopen("My_Name.txt","w");
	
	if (filep == NULL) {
		printf("I am unable to create txt file");
	}
	else {
		printf("What do you want to write?\n");
		fgets(data,256,stdin);
		fputs(data,filep);
		printf("I successfully type that string");
		fclose(filep);
	}
	return 0;
}
