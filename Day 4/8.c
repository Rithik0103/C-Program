#include <stdio.h>
 
struct complex
{
   int r, i;
};
 
int main()
{
   struct complex a, b, c;
   printf("Enter  first complex number : ");
   scanf("%d%d", &a.r, &a.i);
   printf("Enter the  second complex number : ");
   scanf("%d%d", &b.r, &b.i);
 
   c.r = a.r - b.r;
   c.i = a.i - b.i;
   
   if (c.i >= 0)
  printf("Difference of  complex numbers = %d + %di", c.r, c.i);
   else
  printf("Difference of  complex numbers = %d %di", c.r, c.i);
 
   return 0;
}
