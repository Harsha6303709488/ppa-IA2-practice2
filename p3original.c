#include<stdio.h>
int input_number()
{
  int num;
  printf("enter the number:\n");
  scanf("%d",&num);
  return num;
  }
int is_composite(int n)
{
  for(int i=2;i<=n/2;i++)
    {
      if(n%i==0)
        return 1;
    }
    return0;
  }
void output(intn,int is composite)
{
  if(iscomposite)
    printf("%dis a composite number\n",n);
  else
    printf("%dis not a composite\n",n);
}
int main()
{
  int num=input_number();
  inta=is_composite(num);
  output(num,a);
  return 0;
}