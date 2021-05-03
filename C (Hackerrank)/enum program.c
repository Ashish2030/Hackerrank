# include <stdio.h>
# include <string.h>
# include <stdlib.h>
 void main()
{
 
  enum employee_depart
  {
    it, operations, management, accounts, stores
  };
 
  struct employee_records
  {
   char name[10];
   int employee_id;
   float salary;
   enum employee_depart emp;
  }; 
 
  struct employee_records em;
 
  strcpy(em.name, "Debasif");
  em.employee_id=546502;
  em.salary=40000;
  em.emp=management;
 
  printf("Name of the employee=%s\n", em.name);
  printf("“Employee id=%d\n", em.employee_id);
  printf("Employee salary=%7.2f\n", em.salary);
  printf("Employee department=%d\n", em.emp);
  
}