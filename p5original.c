#include<stdio.h>
int input()
{
  int a;
  printf("enter the number:");
  scanf("%d",&a);
  return a;
}
int_gcd(inta,intb)
{
  int gcd=1;
  for(int i=2;i<a&&i<b;i++)
    {
      if(a%i==0&&b%i==0)
      {
        gcd=i;
      }
    }
  return gcd;
}
void output(inta,intb,intgcd)
{
  printf("gcd of %dand%dis %d\n",a,b,gcd);
}
int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=gcd(a,b);
  output(a,b,gcd);
  return0;
}