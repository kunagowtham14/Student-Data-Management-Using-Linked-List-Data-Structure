#include "header.h"
//#include "main.c"
void modify(SLL *ptr)
{
        SLL *temp;
	temp=ptr;
        int op,rollno,f;
        char name[20],name1[20];
        float marks,marks1;

        if(ptr==0)
        {
                printf("no records found\n");
                return;
        }

        printf("Enter which record to search for modification\n");
        printf("1 : Search by roll number\n");
        printf("2 : Search by name\n");
        printf("3 : Search by percentage\n");
        scanf(" %d",&op);

        switch(op)
        {
                
                case 1:
                        printf("enter roll number to search\n");
                        scanf("%d",&rollno);

                        f=0;

                        while(ptr)
                        {
                                if(ptr->rollno==rollno)
                                {
                                        f=1;

                                        printf("Current details:\n");
                                        printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                                           

                                        printf("enter updated name and percentage\n");
                                        scanf("%s %f",name1,&marks1);

                                        strcpy(ptr->name,name1);
 ptr->marks=marks1;

                                        printf("Modified details:\n");
                                         printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                                        break;
                                }

                                ptr=ptr->next;
                        }

                        if(f==0)
                                printf("record not found\n");

                        break;


                
                case 2:
                        printf("enter name to search\n");
                        scanf("%s",name);

                        f=0;

                        while(ptr)
                        {
                                if(strcmp(ptr->name,name)==0)
                                {
                                        f++;
                                        printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);

                                }

                                ptr=ptr->next;
                        }

                        if(f==0)
                        {
                                printf("record not found\n");
                                break;
                        }
			if(f==1)
                        {
                                ptr=temp;

                                while(ptr)
                                {
                                        if(strcmp(ptr->name,name)==0)
                                        {
                                                printf("enter updated name and percentage\n");

                                                scanf("%s %f",name1,&marks1);

                                                strcpy(ptr->name,name1);
                                                ptr->marks=marks1;

                                                printf("modified details\n");
                                                 printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);

                                                break;
                                        }
                                        ptr=ptr->next;
                                }
                        }
else
{

printf("enter roll number of the record to modify\n");
                                scanf("%d",&rollno);

                                ptr=temp;

                                while(ptr)
                                {
                                        if(ptr->rollno==rollno &&
                                           strcmp(ptr->name,name)==0)
                                        {
                                                printf("enter updated name and percentage\n");
                                                scanf("%s %f",name1,&marks1);

                                                strcpy(ptr->name,name1);
                                                ptr->marks=marks1;

                                                printf("modified details\n");
                                                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                                                break;
                                        }
                                        ptr=ptr->next;
                                }
                        }

                        break;
               
                case 3:
                        printf("enter percentage to search\n");
                        scanf("%f",&marks);

                        f=0;

                        while(ptr)

                        {
                                if(ptr->marks==marks)
                                {
                                        f++;
                                        printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                                }

                                ptr=ptr->next;
                        }

                        if(f==0)
                        {
                                printf("record not found\n");
                                break;
                        }
			if(f==1)
                        {
                                ptr=temp;

                                while(ptr)
                                {
                                        if(ptr->marks==marks)
                                        {
                                                printf("enter updated name and percentage\n");
                                                scanf("%s %f",name1,&marks1);

                                                strcpy(ptr->name,name1);
                                                ptr->marks=marks1;

                                                printf("modified details\n");
                                                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                                                break;
                                        }
                                        ptr=ptr->next;
                                }
                        }
else
{

printf("enter roll number of the record to modify\n");
                                scanf("%d",&rollno);

                                ptr=temp;

                                while(ptr)
                                {

                                        if(ptr->rollno==rollno &&
                                           ptr->marks==marks)
                                        {
                                                printf("enter updated name and percentage\n");
                                                scanf("%s %f",name1,&marks1);

                                                strcpy(ptr->name,name1);
                                                ptr->marks=marks1;

                                                printf("modified details\n");
                                                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
                                                break;
                                        }
                                        ptr=ptr->next;
                                }
                        }

                        break;


                default:
                      printf("invalid option\n");
        }
}