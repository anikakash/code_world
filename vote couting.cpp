#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  age, v, A=0, B=0, C=0;
    int ch;
start: //options;
    printf("\n\t\t\t\t\t1.Continue Voting\n");
    printf("\t\t\t\t\t2.Finish Voting\n");
    printf("\n\t\t\t\tEnter Your Choice: "); //taking choice;
    scanf("%d", &ch);
    if(ch==1)
    {
        printf("\n\t\t\t\tEnter Your Age: ");
        scanf("%d", &age);

        if(18>age) //checking age;
        {
            printf("\n\t\t\t\t\tYour not eligibale for voting\n");
            goto start;
        }
        else // after check age;
        {
            printf("\n\t\t\t\t\tWhich Person You Went To Vote: \n");
            printf("\n\t\t\t\t\t1.A\n\t\t\t\t\t2.B\n\t\t\t\t\t3.C \n\t\t\t\t\t");
            scanf("%d",&v); // vote count;
            if(v==1)
                A++;
            else if(v==2)
                B++;
            else if(v==3)
                C++;
            goto start;
        }
    }
    else if(ch==2) //finished voting;
    {
        printf("\n\t\t\t\t\tResult");
        printf("\n\t\t\t\t\tTotal Voter: %d\n", A+B+C);
        printf("\n\t\t\t\t\t1.A: %d Vote\n\n\t\t\t\t\t2.B: %d Vote\n\n\t\t\t\t\t3.C: %d Vote\n", A,B,C);

        if(A>B && A>C) // declear winner;
            printf("\n\t\t\t\t\tA WIN");
        else if(B>A && B>C)
            printf("\n\t\t\t\t\tB WIN");
        else if(C>A && C>B)
            printf("\n\t\t\t\t\tC WIN\n");
        else
            printf("\n\t\t\t\t\tTie\n"); // or tie;
    }

    return 0;
}
