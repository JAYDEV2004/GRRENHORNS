#include<stdio.h>
int main()
{
	int a=10, b=20;
	printf("\n*BEFORE SWAPING*");
	printf("\na=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
     printf("\n*AFTER SWAPING*");
	printf("\na=%d b=%d",a,b);

	
	int A=10, B=20,C=0;
	
	 printf("\n\n*BEFORE SWAPING*");
	printf("\nA=%d",A);printf(" B=%d",B);
	C=A;
	A=B;
	B=C;
	printf("\n*AFTER SWAPING*");
	printf("\nA=%d",A);
	printf(" B=%d",B);
	
	return 0;
}