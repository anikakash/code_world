#include<stdio.h>
//find first digit from a number;
int main()
{
	int number, r;

	scanf("%d", &number);

	while(number>0){
		r=number%10;
		number=number/10;
	}
	printf("%d",r);
	return 0;
}
