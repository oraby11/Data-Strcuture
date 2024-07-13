#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_H_INCLUDED

typedef struct
{
   int model;
   char name[20];
   int id;

} element_type;

#define MAXELEMENT  100


typedef element_type  stack_entry;
#define MAX_STACK  MAXELEMENT

typedef element_type  entry_type;
#define MAX  MAXELEMENT


#endif // GLOBAL_H_INCLUDED
