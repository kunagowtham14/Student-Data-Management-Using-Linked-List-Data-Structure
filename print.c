#include "header.h"
//#include "main.c"
void printnode(SLL *ptr)
{
        if(ptr==0)
        {
                printf("no records found");
                return;
        }

	       printf("rollno  name  marks\n");
        while(ptr)
        {      
               printf("%d     %s      %f\n",ptr->rollno,ptr->name,ptr->marks);
               ptr=ptr->next;
       }
}