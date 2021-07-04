#include<stdio.h>
#define N 1000
struct yuan
{
  char name[11];
  double z1;//如果这里用int型，则显示错误
  double z2;
  double z3;
  double sum;
}ren[N];
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%s %lf %lf %lf",ren[i].name,&ren[i].z1,&ren[i].z2,&ren[i].z3);
    ren[i].sum=ren[i].z1+ren[i].z2-ren[i].z3;
  }
  for(i=0;i<n;i++)
  {
       printf("%s %.2lf\n",ren[i].name,ren[i].sum);
  }
  return 0;
}
