#include<stdio.h>
#include<math.h>
#define PI 3.142857
int main()
{
  float x,degree,sum=0,term,num,den;
  int i;
  printf("enter degree:");
  scanf("%f",&degree);
  x=(degree)*(PI/180.0);
  i=1;
  sum=x;
  num=x;
  den=1.0;
  term=x;
  do
  {
    i=i+2;
    num=-num*x*x;
    den=den*i*(i-1);
    term=num/den;
    sum=sum+term;

  }while(fabs(term)>=0.00001);
  printf("using inbuilt function sin(%f)=%.2f\n",degree,sin(x));
  printf("user computed value sin(%f)=%.2f\n",degree,sum);
return 0;
}
  