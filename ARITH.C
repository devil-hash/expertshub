#include <stdio.h>
#include <conio.h>
void main()
{
   int input1, input2, output1,o2,o3,o4,o5;
   clrscr();
   printf("enter inputs");
   scanf ("%d%d",&input1,&input2);
   output1=input1+input2;
   printf("sum of values are %d\n",output1);
   o2=input1-input2;
   printf("sub of values are %d\n",o2);
   o3=input1*input2;
   printf("multiplication of values are %d\n",o3);
   o4=input1/input2;
   printf("division of values are are %d\n",o4);

   getch();
}
