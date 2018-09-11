#include<stdio.h>
int main(){
	int a,b,q,r;
	printf("Enter two number : ");
	scanf("%d %d",&a,&b);
	//quotient is given by (a/b)
	q = a/b;
	//reminder is given by (a%b) // '%' is modulus operator
	r = a%b;
	printf("Quotient = %d\nReminder = %d\n",q,r);
	return 0;
}