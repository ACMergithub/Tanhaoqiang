#include <stdio.h>
struct Student
{
    char num[10],name[10];
    int score;
};

int main()
{
    struct Student stu[10];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s %s %d",stu[i].num,stu[i].name,&stu[i].score);
    
    double avg,sum=0;
    for(int i=0;i<n;i++)
        sum+=stu[i].score;
    avg=sum/n;
    printf("%.2lf\n",avg);
    for(int i=0;i<n;i++)
        if(stu[i].score<avg)
            printf("%s %s\n",stu[i].name,stu[i].num);
    
    return 0;
    
}
