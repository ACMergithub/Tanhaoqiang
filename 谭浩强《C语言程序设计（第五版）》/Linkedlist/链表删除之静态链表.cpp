/*有两个链表a和b，设结点中包含学号和姓名
    从a链表中删去与b链表中有相同、学号的
	那些结点
    */ 

#include <stdio.h>
#include <string.h>
#define LA 4
#define LB 5
struct Student
{
	int num;
	char name[8];
	struct Student * next;
 } a[LA],b[LB];
 
 int main()
 {
 	struct Student a[LA]={{101,"Wang"},{102,"Li"},{105,"Zhang"},{106,"Wei"}};
 	struct Student b[LB]={{103,"Zhang"},{104,"Ma"},{105,"Chen"},{107,"Guo"},{108,"Liu"}};
 	int i;
 	struct Student *p,*p1,*p2,*head1,*head2;
 	
 	head1=a;
 	head2=b;
 	
 	printf(" list A: \n");
 	for(p1=head1,i=1;i<=LA;i++)
 	{
 		if(i<LA)
 		    p1->next=a+i;
 		else
 		    p1->next=NULL;
 		//输出一个结点的数据 
 		printf("%4d%8S\n",p1->num,p1->name);
 		//如果不是最后一个结点，使p1指向下一个结点 
 		if(i<LA) 
 		    p1=p1->next;
	 }
	 
	printf("\n list B:\n");
 	for(p2=head2,i=1;i<=LB;i++)
 	{
 		if(i<LB)
 		    p2->next=b+i;
 		else
 		    p2->next=NULL;
 		//输出一个结点的数据 
 		printf("%4d%8S\n",p2->num,p2->name);
 		//如果不是最后一个结点，使p1指向下一个结点 
 		if(i<LB) 
 		    p2=p2->next;
	 }
	 
	//对a链表进行删除操作 
	p1=head1;
	while(p1!=NULL)
	{
		p2=head2;
		//使p2结点后移直到发现与a链表中当前结点的学号相同或已到b链表中最后一个结点 
		while((p1->num!=p2->num)  && (p1->next!=NULL))
		    p2=p2->next;
		if(p1->num==p2->num)
		{
			if(p1==head1)
			    head1=p1->next;
			else
			{
				//当不是第一个结点时删除该结点的步骤 
				p1->next=p1->next;
				p1=p1->next;
			}	    
		 }
		// b链表中没有与a链表中当前结点相同的学号，p1指向a链表的下一个结点 
		else
		   {p=p1;p1=p1->next;}
	 } 
	
	//输出已处理过的a链表中全部结点的数据 
	printf("\nresult:\n");
	p1=head1;
	while(p1!=NULL)
	{
		printf("%4d %7s \n",p1->num,p1->name);
		p1=p1->next;
	}
	
	return 0;
 }
