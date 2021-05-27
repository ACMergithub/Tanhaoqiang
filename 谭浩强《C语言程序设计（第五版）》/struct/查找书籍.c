#include <stdio.h>
struct book
{
    char name[31];
    double price;
};

int main()
{
    int n,max=0,min=0;
    double tmp;
    struct book m[10];
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        gets(m[i].name);
        scanf("%lf",&m[i].price);
		getchar();
    }
    //找最贵的
    for(int i=1,tmp=m[0].price;i<n;i++)
    {
        if(m[i].price>tmp)
        {max=i;tmp=m[i].price;}
    }
    //找最便宜的
    for(int i=1,tmp=m[0].price;i<n;i++)
    {
        if(m[i].price<tmp)
        {min=i;tmp=m[i].price;}
    }
    printf("%.2lf, %s\n",m[max].price,m[max].name);
    printf("%.2lf, %s",m[min].price,m[min].name);
    return 0;
}
