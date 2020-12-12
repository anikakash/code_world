#include<stdio.h>

int main()
{
    int choice, choice2;
    double  a, l, earn, to, di, di3, loss;

    printf("enter product Buying prize: ");
        scanf("%lf", &a);
    printf("enter product selling prize: ");
        scanf("%lf", &l);
        if(l>a){
    earn = l-a;
    printf("Total earn is = %0.02lf\n", earn);
    di = earn/2;
    printf("Company sells amount is %0.02lf tk.\n", di);
    printf("diler sells amount is %0.02lf tk.\n", di);

    di3 = di/2;
    printf("Now sub diler amount is %0.1lf\n", di3);

     printf("Do you want to filter earn of Company?\n1.Yes 2.No\n");
        scanf("%d", &choice);}
        if(choice == 1){
            printf(" 1.Total Earn? \n 2.Company earn? \n 3.Diler earn?\n 4.sub diler earn?\n");
            scanf("%d", &choice2);
        }
        if(choice2==1){
            printf("Total earn is: %0.02lf tk.\n", earn);
        }
        else if(choice2==2){
            printf("Company earn is: %0.02lf tk.\n", di);
        }
                else if(choice2==3){
            printf("Dilear earn is: %0.02lf tk.\n", di);
        }
        else if(choice2==4){
            printf("Sub diler earn is: %0.02lf tk.\n", di3);
        }

        else if(choice== 2){
            printf("Thank You!");
        }
    else if(a==l){
        printf("Buying and Selling Prize are Same!\n");
    }
    else{
            loss=a-l;
        printf("Its Loss for the Company. And it is: %0.02lf tk.\n", loss);
    }
    return 0;
}
