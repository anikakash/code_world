#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, rem, gcd, lcm;
    scanf("%d %d", &a, &b);
    int n1=a, n2=b;
    while(n2!=0){
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (a*b)/gcd;
    printf("%d\n%d\n",gcd, lcm);
    return 0;
}
