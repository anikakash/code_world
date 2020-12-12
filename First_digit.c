#include<stdio.h>

int main()
{
	int number, r;

	scanf("%d", &number);

	while(number>0){
		r=number%10;
		number=number/10;
	}
	printf("%d",r);
		//if(r%2==0){
				//printf("EVEN\n");
		//}

		//else{
			//printf("ODD\n");
		//}//**
	return 0;
}
