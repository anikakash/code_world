//thanks God For Every Thing!
// CPP program to count words in a string
#include<bits/stdc++.h>
#define pi                      acose(-1)

typedef long long int           ll;
typedef double                  dl;
using namespace std;
int wordNumber(string str);
int main()
{
    string s;
    getline(cin, s);
    int num;
    num = wordNumber(s);
    cout<<"Total World Of The String Is: "<<num<<endl;
    return 0;
}
int wordNumber(string str)
{
    // breaking input into word using string stream
    stringstream s(str);// Used for breaking words
    string check;// to store individual words
    int count =0;
    while(s>>check)
    {
        count++;
    }
    return count;
}
