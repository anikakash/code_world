// simple calculator;
#include<stdio.h>
double fun1(double a,double b);
double sub(double a,double b);
double intu(double a,double b);
double div(double a,double b);


int main()
{
    double a, b, x;
    int c;

    printf("\n\t\t\t\t\tWelcome To Our Calculator System\n\t\t\t\t===============================================\n");

    printf("\t\t\tEnter the  First Number: ");
    scanf("%lf", &a);

    printf("\t\t\tEnter the Second Number: ");
    scanf("%lf", &b);

    printf("\n\t\t\t\t\tWhich Operation Do You Want: \n");

    printf("\t\t\t\t\t1. +\t\t\t\t\t2. -\n\t\t\t\t\t3. *\t\t\t\t\t4. /\n\n");
    printf("\t\t\t\t\tEnter Your Number: ");
    scanf("%d", &c);

  if( c == 1)
  {
       x = fun1(a,b);
     printf("\t\t\t\t\tThe Answer Is: %.2lf\n", x);
  }
    else if( c == 2)
  {
       x = sub(a,b);
      printf("\t\t\t\t\tThe Answer Is: %.2lf\n", x);
  }
    else if( c == 3)
  {
       x = intu(a,b);
      printf("\t\t\t\t\tThe Answer Is: %.2lf\n", x);
  }
   else if( c == 4)
  {
       x = div(a,b);
      printf("\t\t\t\t\tThe Answer Is: %.2f\n", x);
  }
    return 0;
}
double fun1(double a, double b)
{
    return a+b;
}
double sub(double a, double b)
{
    return a-b;
}
double intu(double a, double b)
{
    return a*b;
}
double div(double a, double b)
{
    return a/b;
}
