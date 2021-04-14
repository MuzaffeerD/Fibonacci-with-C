#include<stdio.h>
#include<string.h>

int main(){
	char data[25] = "Muzaffer Deliali";
	int length = strlen(data);
	int i;
	
	FILE *filep = fopen("My_Name.txt","w");
	
	if (filep == NULL) {
		printf("I am unable to create txt file");
	}
	else {
		for(i=0; i < length;i++){
			
			fputc(data[i],filep);
			printf("Typed character %c\n",data[i]);
		};
		printf("I successfully type that string");
		fclose(filep);
	}
}
