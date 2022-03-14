#include<stdio.h>
int input_side()
{
  int n;
  printf("Enter a side of a triangle:\n");
  scanf("%d", &n);
  return n;
}
int check_scalene(int a,int b,int c)
{
 if(a!=b&&a!=c&&b!=c)
 {
   return 1;
 }
  return 0;
}
void output(int a,int b,int c, int isscalene)
{
  if(is Scalene==0)
  {
    printf("the triangle with sides%d,%dand%d is scalene\n",a,b,c);
  }
  else
  {
    printf("the triaangle with sides%d,%dand %d is not scalene\n",a,b,c);
  }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}