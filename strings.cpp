#include <stdio.h>
#include <string.h>
int main()
{

	char a[] = "Think, only, about your art!";
	a[2]='1';
	printf("%s",a);
	printf("\n%c\n",a[0]);
	printf("%d\n",strlen(a));
	a[2]='i';
	for(int i=0;i<strlen(a);i++){
		printf("%c",a[i]);
	}
	char b[] = {'H','e','l','l','o',' ','W','o','r','l','d','!'};
	printf("\n%s",b);
	//let's learn hwo to print speial chars in c strings
	char txt[] = "It\\\"s alright";
	printf("\n%s",txt);
	//doen, now letus c escape characters in this languaige
	printf("\n\tEscape characters \n\tare... \0fun");
	char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("\n%d",strlen(alphabet));
	printf("\t%d",sizeof(alphabet));
	//now we learn more PHIUNCTONSSSSS
	char ali[30]="Think-";
	char yan[]="-ArT";
	strcat(ali,yan);
	printf("\n%s",ali);
	return 0;
}
