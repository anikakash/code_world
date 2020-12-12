#include<stdio.h>
//doing sum by array
//user input
int main()
{
    int marks[n], i, sum=0;

    scanf("%d",&marks[n]);

    for(i=0;i<=marks[n];i++){
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=marks[n];i++){
        sum=sum+marks[i];
    }
    printf("Total marks: %d\n",sum);

    return 0;
}
