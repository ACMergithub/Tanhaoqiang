/*有n个结构体变量
    内含学生学号、姓名和3门课程的成绩
        要求输出平均成绩最高的学生的信息
    */
#include <stdio.h>
#define N 3  //假设学生数目为三个
struct  Student
{
    int num;
    char name[20];
    float score[3];
    float aver;   //平均成绩
};

int main()
{
    /* 用input函数来输入数据和求各学生平均成绩 */
    void input(struct Student stu[]);
    /* 用max函数来找平均成绩最高的学生 */
    struct Student max(struct Student stu[]);
    /* 用print函数来输出成绩最高学生的信息 */
    void print(struct Student stu);
    //定义结构体数组和指针
    struct Student stu[N], *p=stu;
    //调用input函数
    input(p);
    //调用print函数，以max函数的返回值作为实参
    print(max(p));
    return 0;
}

void input(struct Student stu[])
{
    int i;
    printf("请输入各学生的信息：学号、姓名、三门课成绩：\n");
    for(i=0;i<N;i++)
    {
        scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
        stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
    }
}

struct Student max(struct Student stu[])
{
    //用m存放成绩最高的学生在数组中的序号
    int i,m=0;
    //找出平均成绩最高的学生在数组中的序号
    for(i=0;i<N;i++)
        if(stu[i].aver>stu[m].aver) 
            m=i;
    //返回包含该学生信息的结构体元素
    return stu[m];
}

void print(struct Student stud)
{
    printf("\n成绩最高的学生是：\n");
    printf("学号：%d\n姓名：%s\n三门课成绩：%5.1f，%5.1f，%5.1f\n平均成绩：%6.2f\n",stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}
