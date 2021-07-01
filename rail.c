#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 void main()
{
    char name[100],to[100],from[100],yn;//yn to get input yes or no from user to change their class of reserve  
    int ch,a;//a stands for seat number by user
    char y,n;
    printf("\t\t\t--------welcome to railway reservation --------\n");
    printf("traveller name:");
        scanf("%s",&name);
    printf("place you want to travel from:");
        scanf("%s",&from);
    printf("\t\t\tto:");
        scanf("%s",&to);
    printf("press1 to reserve your seat in first class\n");
    printf("press2 to reserve your seat in second class\n");
        scanf("%d",&ch);
    switch(ch)
    {
    case 1:
  { 
       printf("\t\t\t\t----*you have chossen first class*------\n");
    printf("enter your seat number from 0 to 200\n");
            scanf("%d",&a);
                        if(a>=0&&a<=200)
                        {
                            printf("your seat is reserved in first class,seat number:%d\n",a);
                             printf("\t\t\t\t-----*happy journey!!!*-------\n");
                        }
                                    else
                                    {
                                        printf("sorry seat are not available in first class would u like to revserve seat in second class\n");
                                         printf("enter (Y/N)\n");//y=yes,n=no
                                         scanf("%s",&yn);
                                       switch (yn)
                                       {
                                           case'y':
                                                {
                                                    read:
                                                    printf("enter seat number above 200\n");
                                                    scanf("%d",&a);
                                                    if(a<200||a>500)
                                                    {
                                                        printf("please enter the seat number below 500 and above 200...");
                                                        goto read;
                                                    }
                                                    else
                                                    {
                                              printf("your seat as reserved in second class,your seat number is :%d\n",a);
                                                printf("\t\t\t\t-----*happy journey!!!*-------\n");
                                                    }
                                                break;
                                                }
                                                case 'n':
                                                 {
                                                  printf("thank you come again later....\n");
                                                  break;
                                                  }
                                            
                                       }
                                    }
  break;
}
    case 2:
{
    printf("\t\t\t\t\t----*you have choosen second class*---");
     printf("enter your seat number from 201 to 400\n");
            scanf("%d",&a);
                    if(a>=201&&a<=400)
                    {
                     printf("your seat is reserved in second class,seat number is :%d",a);
                     printf("\t\t\t\t-----*happy journey!!!*-------");
                    }
                      else 
                      {
                      printf("sorry seat are not available in second class would you like to reserve seat in first class\n");
                        printf("for yes press y,for no press n\n");
                          scanf("%s",&yn);
                      }
            switch(yn)
{
    case 'y':
    {
    again:
              printf("enter the seat number below 200\n");
               scanf("%d",&a);

               if(a>=201)
               {
                printf("please select the seat below 200\n");
goto again;
               }

            else
            {
                 printf("your seat is reserved,seat number is :%d",a);
                 printf("\t\t\t\t-----*happy journey!!!*-------");
            }
            case 'n':
            {
            printf("thank you come again later....\n");
            }
    }
}
break;

}
    }

}
