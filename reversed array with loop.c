#include <stdio.h>
#include <string.h>

void reverse(char array[])
{
	int i,leng,temp;
	
	leng=strlen(array);
	
	for (i=0; i< leng/2; i++) {
		temp = array[i];
		array[i] = array[leng-1-i];
	
		array[leng-1-i] = temp;
	}
}	
int main()
{
	char text[200];
	int i;
	for(i=0;i>=0;i++)
{

	printf("Please type a text: ");
	scanf("%s",text);
	
	reverse(text);
	printf("Reversed text: %s" , text);
	printf("\n\n");
}	
	return 0;
}




