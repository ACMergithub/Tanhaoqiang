#include <stdio.h>
struct Friends
{
    char name[10];
    int birthday;
    char number[20];
};

int main()
{
    struct Friends f[10],tmp;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s %d %s",f[i].name,&f[i].birthday,f[i].number);
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(f[j].birthday>f[j+1].birthday)
            {
                tmp=f[j];f[j]=f[j+1];f[j+1]=tmp;
            }
    for(int i=0;i<n;i++)
		printf("%s %d %s\n",f[i].name,f[i].birthday,f[i].number);
	return 0;
}
