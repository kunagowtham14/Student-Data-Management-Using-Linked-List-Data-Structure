#include "header.h"
//#include "main.c"
void deleteall(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("no records");
                return ;
        }
        SLL *del;
        del=*ptr;
        while(*ptr)
        {
                del=*ptr;
                *ptr=(*ptr)->next;
                free(del);
        }
        del=0;
}

void stud_del(SLL **ptr)
{
        SLL *del,*prev;
        int num,op;
        char *a;
        del=prev=*ptr;
        if(*ptr==0)
        {
                printf("no records");  return ;
        }
        printf("enter your choice\n");
        printf("1.acr to rollno 2.acr to name\n");
        scanf("%d",&op);
        switch(op)
        {

        case 1:printf("enter the rollno\n");
        scanf("%d",&num);
        while(del)
        {
        if(del->rollno==num)
                {
                        if(del==*ptr)
                                *ptr=del->next;
                        else
                               prev->next=del->next;
                        free(del);
                        del=0;
                       return;
                }

                prev=del;
                del=del->next;
}
break;




        case 2:printf("enter the name\n");
       scanf("%s",a);
        while(del)
        {
                if(strcmp(del->name,a)==0)
                  {
                          if(del==*ptr)
                                  *ptr=del->next;
                          else
                                  prev->next=del->next;
                          free(del);

                          del=0;
                          return;
                  }

                prev=del;
                del=del->next;
       }
        break;
}
}