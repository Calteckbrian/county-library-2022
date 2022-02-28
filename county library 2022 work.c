/*COUNTY LIBRARY SYSTEM
BY
February 2022
MIT License
C 89 Compiler
*/


#include <stdio.h>
#include <stdlib.h>

int menu ()
{

int action;
printf("select an action:\n");
printf("1.add a new patron\n");
printf("2.view all patrons\n");
printf("3.add new books\n");
printf("4.view all books\n");
printf("your action\n");
scanf("%d",&action);
if(action< 1 || action > 4) {
  printf("invalid action. try again\n");
}

return;
}
void execute_action(int action) {
    switch(action) {
      case 1:
          printf("adding a new patron\n");
          break;
      case 2:
         printf("Here is a list of patrons\n");
         break;
      case 3:
          printf("Here is the list of all book\n");
          break;
      default:
        printf("invalid action.\n");

    }


int main()
{
    printf("COUNTY LIBRARY SSYSTEM\n");
    printf("welcome Brian");
    execute_action(menu());
    printf("you selected action %d",menu());
    return 0;
}
