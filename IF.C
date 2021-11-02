#include <stdio.h>
#include <conio.h>
int ragul=1;
void main()
{
while(ragul)
{
gowtham:
clrscr();
   printf("Ragul's Current status: \n");
   scanf("%d",&ragul);
   if(ragul==0)
   {
     printf("ragul is sitting \n");
     getch();
     goto gowtham;
   }
   if(ragul==1)
   {
     printf("ragul is standing \n");
   }
   else
   {
   printf("ragul is sleeping \n");
   }
}
getch();
}