#include "header.h"
//#include "main.c"
void revlist(SLL *ptr)
{
        if(ptr==0)
                return;
        else
        {
                revlist(ptr->next);
                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
        }
}