#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st
{
int rollno;
char name[10];
float marks;
struct st *next;
}SLL;
void add_data(SLL **);
void printnode(SLL *);
void stud_del(SLL **);
void stud_save(SLL *);
  void stud_sort(SLL *);
  void revlist(SLL *);
  void deleteall(SLL **);
  void modify(SLL *);
  int countnode(SLL *);