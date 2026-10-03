#include <stdio.h>
int main() {
   int attendance,present = 0, absent;
    
   for(int i=1; i <= 15; i++)
   {
    printf("Enter attendance for student %d (1=present, 0=absent): " , i);
    scanf("%d", &attendance);
    
    if (attendance == 1 )
    {
        present++;
    }
    else
    {
        absent++;
    }
   }
 absent = 15 - present;
 printf("Present students = %d\n", present);

 printf("Absent students = %d\n", absent);



   return 0;

   }

