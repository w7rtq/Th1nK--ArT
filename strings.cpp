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
	char str1[] ="Hello World!";
	char str2[20];
	strcpy(str2, str1);
	printf("\n%s",str2);
	char x[]= "Hi";
	char y[] ="Hi";
	char z[] ="Hello";
	printf("\n%d",strcmp(x,y));//if equal 0
	printf("\n%d",strcmp(z,y));// if not equal? greater? positive integer | lesser? negative integer
	printf("\n%d",strcmp(y,z));	
	/*FILE *fptr;// FILE is a data type, and we have cretaed a pointer(fptr) to work with it
	fptr = fopen(filename,mode);*/
	printf("\n\n\n");
	int myAge = 41;
	printf("%d",myAge);
	printf("\n%p",&myAge);// c pointers to, give location of actual memory location in hex use %p
	int *ptr = &myAge;
	printf("\n%p",ptr);
	//derefrencing : use * with a pointer variable to siplay the contents of the variable whose memory address is stroed by pointer, then not use %p
	printf("\n%d",*ptr);
	//noice, but dont harbour vonfusion. 1)when * is used in declaration(int*ptr), it CREATES a pointer variable
	//when not used in decrlaration, it acts as a DEREFERENCING operator
	//PHUN FACT: POINTERS ALLOW MANIPULATION OF MEMORY DATA
	return 0;
}
