 #include "header.h"
//#include "main.c"
void stud_save(SLL *ptr)
{
        if(ptr==0)
        {
                printf("no records found");
                return ;
        }
        FILE *fp=fopen("stu.txt","w");
        while(ptr)
        {
                fprintf(fp,"%d %s %f",ptr->rollno,ptr->name,ptr->marks);
                ptr=ptr->next;
        }
        printf("details saved in file\n");
        fclose(fp);
}