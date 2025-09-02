#include<stdio.h>
int main()
/*WAP to enter an age and check whether he is an adult or not if yes
 then write these conditions :
 1)Adult
 2)You can vote
 3)You can drive
 */
{
  int age;
  printf("Enter age : ");
  scanf("%d", &age);
  if(age>=18)
    {
      printf("Adult \n");
      printf("You can vote \n");
      printf("You can drive \n");
    }   
    else if( age>13 && age < 18)
    {
      printf("You are not an adult \n");
      printf("You are a teenager \n");
    }    
    else if ( age>0 && age<13 )
    {
      printf("Child \n");
    }
    else
    {
      printf("Not Born \n");
    }
    printf("Thank You \n");
     //return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}

