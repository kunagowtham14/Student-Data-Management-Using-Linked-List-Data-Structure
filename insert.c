#include "header.h"
void add_data(SLL **ptr)
{
        SLL *new,*last;
static int rollno=0;
        new=malloc(sizeof(SLL));
        printf("enter  name marks\n");
        scanf(" %s %f",new->name,&new->marks);
	rollno++;
        new->rollno=rollno;
        new->next=0;
        if(*ptr==0)
	{
                *ptr=new;
	}
        else
        {
                last=*ptr;
                while(last->next)
		{
                        last=last->next;
	         }

                last->next=new;
        }
}