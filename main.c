#include <stdio.h>
int main()
 {
    float unit,charge,total;
    char name[20];
    printf(" Enter the user name:");
    gets(name);
    printf("Enter the number of units consumed:");
    scanf("%f",&unit);
    if(unit>=1 && unit<=200)
    {
      charge = unit*0.8;
    }
    else if(unit>200 && unit<=300)
    {
      charge = 200*0.8 + (unit-200) * 0.9;
    }
    else if(unit>300)
    {
      charge = 200*0.8 + 100 * 0.9 + (unit-300) * 1;
    }
    else
    {
      printf("invalid input");
      return 1;
    }
    total = charge + 100;
    if (total>400)
    {
    total = total + (total * 0.15);
    }
    printf("\n--------\n");
    printf("\nelectricity bill");
    printf("\nname : %s",name);
    printf("\nunits consumed : %f",unit);
    printf("\ntotal bill amount : %f",total);
    printf("\n--------\n");
  return 0;
}