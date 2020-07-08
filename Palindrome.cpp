#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, rev=0, div, temp;
    scanf("%d", &n);
    temp = n;
    while(n>0)
    {
        div = n%10;
        rev = rev*10+div;
        n = n/10;
    }

    if(temp==rev)
    {
        printf("%d\nYES\n", rev);
    }
    else
    {
        printf("%d\nNO\n", rev);
    }
    return 0;
}
