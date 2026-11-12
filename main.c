#include "header.h"
int main()
{
       SLL *headptr=0;
        int c;
	char op;
        while(1)
        {
                printf("enter the option\n");
		printf("*********************************************************\n");
                printf("a.add new record\nb.show the list\nc.delete a record\nd.save record\ne.sort the list\nf.count records\ng.delete all records\nh.reverselist\ni.modify a record\nj.exit\n");
                
		printf("*********************************************************\n");
		scanf(" %c",&op);
                switch(op)
                {
                        case 'a':add_data(&headptr);break;
                        case 'b':printnode(headptr);break;
                        case 'c':stud_del(&headptr);break;
                        case 'd':stud_save(headptr);break;
                        case 'e':stud_sort(headptr);break;
                        case 'f':c=countnode(headptr);
                              printf("%d",c);
                              break;
                        case 'g':deleteall(&headptr);break;
                        case 'h':revlist(headptr);break;
                        case 'i':modify(headptr);break;
                        case 'j':return 0;
			default:printf("invalid choice\n");
			        
                }
        }
}
