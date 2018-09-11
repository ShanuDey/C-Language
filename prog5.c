#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	//lower case in ascii 97-122
	//upper case in ascii 65-90
	//for lower case to upper case conversion we need to substarct (97-65)=32
	printf("Upper case character is %c\n",ch-32);
	return 0;
}