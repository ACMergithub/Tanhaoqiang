#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct Student) 
struct Student
{
	char num[6];
	char name[8];
	char sex[2];
	int age;
	struct Student * next;
}stu[10];

int main()
{
	struct Student *p,*pt,*head;
	int i,length,iage,flag=1;
	//找到待删除元素find=1，否则find=0； 
	int find=0;
	while(flag==1)
	{
		printf("input length of list(<10):");
		scanf("%d",&length);
		if(length<10)
		    flag=0;
	}
	
	//建立链表
	for(i=0;i<length;i++)
	{
		p=(struct Student * )malloc(LEN);
		if(i==0)
		    head=pt=p;
		else
		    pt->next=p;
		pt=p;
		printf("NO.:");
		scanf("%s",p->num);
		printf("name:");
		scanf("%s",p->name);
		printf("sex:");
		scanf("%s",p->sex);
		printf("age:");
		scanf("%d",p->age);
	}
	p->next=NULL;
	p=head;
	printf("\n NO. name sex age\n"); /* 显示 */
	while(p!=NULL) 
	{
		printf("%4d%8s%6s%6d\n",p->num,p->name,p->sex,p->age);
		p=p->next;
	}
	
	//删除结点
	printf("input age:");
	//输入待删年龄 
	scanf("%d",&iage);
	pt=head; 
	p=pt;
	//链头是待删元素 
	if(pt->age==iage)
	{
		p=pt->next;
		head=pt=p;
		find=1;
	}
	//链头不是待删元素 
	else
	    pt=pt->next; 
	while(pt!=NULL)
	{
		if(pt->age==iage)
		{
			p->next=pt->next;
			find=1;
		}
		else
		p=pt;
		pt=pt->next;
	}
	if(!find)
	    printf(" not found %d.",iage);
	    
	p=head;
	printf("\n NO. name sex age\n");
	while(p!=NULL)
	{
		printf("%4s%8s",p->num,p->name);
		printf("%6s%6d\n",p->sex,p->age);
		p=p->next;
	}
	return 0;	
}
