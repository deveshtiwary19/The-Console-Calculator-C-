#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>

 float add(float x,float y)
 {
     float sum=x+y;
     return sum;
 }
 float difference(float a, float b)
 {
      float diff=a-b;
     return diff;
 }
 float multiply(float c, float d)
 {
     float prd=c*d;
     return prd;
 }
 float division(float k, float l)
 {
     float div=k/l;
     return div;
 }
 int main(void)

 {
     int o;
print:

     printf("|-----------------------THE MECH.IN DVELOPERS WELCOMES YOU------------------------------|\n|__________________________THE CODEFREAKS PRESENTS______________________________________|\n|******************************THE CALCULATOR*******************************************|\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n|-/*/*/*/*/*/*/*/*/*/*/*/***************************/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/-|\n|											|\n|											|\n|****||||****||||****||||****ENTER YOUR CHOICE NUMBER****||||****||||****||||****||||**	|\n|											|\n|---------------------------------------------------------------------------------------|\n|***************************************|***********************************************|\n|					|						|\n|	1. FOR ADDITION			|	2. FOR SUBSTRACTION			|\n|					|						|\n|					|						|\n|***************************************|***********************************************|\n|---------------------------------------------------------------------------------------|\n|***************************************|***********************************************|\n|					|						|\n|	3. FOR MULTIPLICATION		|	4. FOR DIVISION				|\n|					|						|\n|					|						|\n|***************************************|***********************************************|\n|---------------------------------------------------------------------------------------|\n\n\n\n");
     Beep(900,1000);
     int choice;
    printf("ENTER YOUR CHOICE NUMBER HERE:");

     scanf("%d",&choice);
       Beep(500,400);
     if(choice<1||choice>4)
     {
         system("CLS");
       printf("\t\t\t\t|---------------------------------------------------------------|\n\t\t\t\t|_________________THE CODEFREAKS DEVELOPERS_____________________|\n\t\t\t\t|^^^^^^^^^^^^^^^^^^^^^THE RESULT BOX^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n\t\t\t\t|								|\n\t\t\t\t| Its a Invalid Choice!! 	                                |\n\t\t\t\t|								|\n\t\t\t\t|								|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|______________________THANKS FOR USING_________________________|\n\t\t\t\t|________________________MECH.IN________________________________|\n\t\t\t\t|---------------------------------------------------------------|\n");
         again1:
     printf("\nEnter the option\n1.Continue Using\n2.Exit Application\n");
     scanf("%d",&o);

     if(o==1)
     {
         system("CLS");
        goto print;
     }
     else if(o==2)
     {
         printf("Application Exitting\n");
        return 0;
     }
     else
     {
         printf("\t\tEnter Correct Choice\n");
         goto again1;
     }

        Beep(1000,400);
        Beep(1000,400);
        Beep(1000,400);
        Beep(1000,400);
        Beep(300,1000);
       return 0;

     }
     float n1,n2;

    printf("ENTER THE FIRST NUMBER:");

    scanf("%f",&n1);
    Beep(2000,100);
    printf("ENTER THE SECOND NUMBER:");

    scanf("%f",&n2);
     Beep(2000,100);
     system("CLS");
     {
         if(choice==1)
{
         float q=add(n1,n2);
         printf("\t\t\t\t|---------------------------------------------------------------|\n\t\t\t\t|_________________THE CODEFREAKS DEVELOPERS_____________________|\n\t\t\t\t|^^^^^^^^^^^^^^^^^^^^^THE RESULT BOX^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n\t\t\t\t|								|\n\t\t\t\t|The sum of %.2f and %.2f is %.2f	                        \n\t\t\t\t|								|\n\t\t\t\t|								|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|______________________THANKS FOR USING_________________________|\n\t\t\t\t|________________________MECH.IN________________________________|\n\t\t\t\t|---------------------------------------------------------------|\n",n1,n2,q);
}
         else if(choice==2)
{
        float r=difference(n1,n2);
         printf("\t\t\t\t|---------------------------------------------------------------|\n\t\t\t\t|_________________THE CODEFREAKS DEVELOPERS_____________________|\n\t\t\t\t|^^^^^^^^^^^^^^^^^^^^^THE RESULT BOX^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n\t\t\t\t|								|\n\t\t\t\t|The difference of %.2f and %.2f is %.2f	                \n\t\t\t\t|								|\n\t\t\t\t|								|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|______________________THANKS FOR USING_________________________|\n\t\t\t\t|________________________MECH.IN________________________________|\n\t\t\t\t|---------------------------------------------------------------|\n",n1,n2,r);
}
         else if(choice==3)
{
        float y= multiply(n1,n2);
            printf("\t\t\t\t|---------------------------------------------------------------|\n\t\t\t\t|_________________THE CODEFREAKS DEVELOPERS_____________________|\n\t\t\t\t|^^^^^^^^^^^^^^^^^^^^^THE RESULT BOX^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n\t\t\t\t|								|\n\t\t\t\t|The product of %.2f and %.2f is %.2f	                 \n\t\t\t\t|								|\n\t\t\t\t|								|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|______________________THANKS FOR USING_________________________|\n\t\t\t\t|________________________MECH.IN________________________________|\n\t\t\t\t|---------------------------------------------------------------|\n",n1,n2,y);
}
         else if(choice==4)
{
            float z=division(n1,n2);
            printf("\t\t\t\t|---------------------------------------------------------------|\n\t\t\t\t|_________________THE CODEFREAKS DEVELOPERS_____________________|\n\t\t\t\t|^^^^^^^^^^^^^^^^^^^^^THE RESULT BOX^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n\t\t\t\t|								|\n\t\t\t\t|The division of %.2f and %.2f is %.2f	                        \n\t\t\t\t|								|\n\t\t\t\t|								|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|***************************************************************|\n\t\t\t\t|______________________THANKS FOR USING_________________________|\n\t\t\t\t|________________________MECH.IN________________________________|\n\t\t\t\t|---------------------------------------------------------------|\n",n1,n2,z);
}
     }



 printf("\a\a\a\a");



     again:
     printf("\nEnter the option\n1.Continue Using\n2.Exit Application\n");
     scanf("%d",&o);

     if(o==1)
     {
         system("CLS");
        goto print;
     }
     else if(o==2)
     {
         printf("Application Exitting\n");
        return 0;
     }
     else
     {
         printf("\t\tEnter Correct Choice\n");
         goto again;
     }


return 0;
 }

