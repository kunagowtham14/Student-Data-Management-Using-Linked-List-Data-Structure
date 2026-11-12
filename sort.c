#include "header.h"
//#include "main.c"
void stud_sort(SLL *ptr) 
{
	if(ptr==0)
	{
		printf("no records found");
		return ;
	}
	SLL *p1,*p2,t;
	p1=ptr;
	int i,j,c=countnode(ptr),op;
	printf("enter 1.acr to name 2 acr to marks\n");
	scanf("%d",&op);
	switch(op)
	{

		case 1:for(i=0;i<c-1;i++)
		       {
			       p2=p1->next;
			       for(j=0;j<c-1-i;j++)
			       {
				       if(strcmp(p1->name,p2->name)>0)
				       {
					       t.rollno=p1->rollno;
					       strcpy(t.name,p1->name);
					       t.marks=p1->marks;


					       p1->rollno=p2->rollno;
					       strcpy(p1->name,p2->name);
					       p1->marks=p2->marks;


					       p2->rollno=t.rollno;
					       strcpy(p2->name,t.name);
					       p2->marks=t.marks;
				       }
				       p2=p2->next;
			       }
			       p1=p1->next;
		       }
		       break;

		case 2:for(i=0;i<c-1;i++)
		       {
			       p2=p1->next;
			       for(j=0;j<c-1-i;j++)
			       {
				       if(p1->marks>p2->marks)
				       {
					       t.rollno=p1->rollno;

					       strcpy(t.name,p1->name);
					       t.marks=p1->marks;


					       p1->rollno=p2->rollno;
					       strcpy(p1->name,p2->name);
					       p1->marks=p2->marks;


					       p2->rollno=t.rollno;
					       strcpy(p2->name,t.name);
					       p2->marks=t.marks;
				       }
				       p2=p2->next;
			       }
			       p1=p1->next;
		       }
		       break;
	}
}