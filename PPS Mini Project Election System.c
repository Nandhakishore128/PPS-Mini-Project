#include<stdio.h>

int can1vote=0, can2vote=0, can3vote=0, can4vote=0, can5vote=0, nota=0;

#define candidate1 "Narendra Modi"
#define candidate2 "Donald Trump"
#define candidate3 "Vladimir Putin"
#define candidate4 "Joe Biden"
#define candidate5 "Kim Jong Un"

void red () {
  printf("\033[1;31m");
}

void yellow() {
  printf("\033[1;33m");
}

void green() {
    printf("\033[1;32m");
}

void blue() {
    printf("\033[1;34m");
}

void cyan() {
    printf("\033[1;36m");
}

void reset() {
  printf("\033[0m");
}

void cast()
{
    int choice;
    red();
    printf("\n\n******PLEASE CAST YOUR VOTE FOR YOUR PREFERRED CANDIDATE******\n\n");
    blue();
    printf("1) %s\n", candidate1);
    printf("2) %s\n", candidate2);
    printf("3) %s\n", candidate3);
    printf("4) %s\n", candidate4);
    printf("5) %s\n", candidate5);
    printf("6) NOTA\n\n");
    green();
    printf("Enter your choice ( 1 - 6 ): ");

    scanf("%d", &choice);
    switch (choice)
        {
            case 1 : can1vote++;
                       break;
            case 2 : can2vote++;
                       break;
            case 3 : can3vote++;
                       break;
            case 4 : can4vote++;
                       break;
            case 5 : can5vote++;
                       break;  
            case 6 : nota++;
                       break;    
            default :  red();
                       printf("\n\n******INVALID CHOICE! PLEASE TRY AGAIN.******\n\n");                                            
        }
    reset();
    printf("\n\n******THANK YOU FOR CASTING YOUR VOTE!******\n\n");
}

void votecount()
{
    blue();
    printf("\n\n******VOTE COUNT******\n\n");
    green();
    printf("%s - %d\n", candidate1, can1vote);
    printf("%s - %d\n", candidate2, can2vote);
    printf("%s - %d\n", candidate3, can3vote);
    printf("%s - %d\n", candidate4, can4vote);
    printf("%s - %d\n", candidate5, can5vote);
    printf("%s - %d\n\n", "NOTA", nota);

}

void leadcan()
{
    green();
    printf("\n\n******LEADING CANDIDATE******\n\n");
    red();
    if (can1vote>can2vote && can1vote>can3vote && can1vote>can4vote && can1vote>can5vote)
    printf("%s is on the lead !", candidate1);
    else if (can2vote>can1vote && can2vote>can3vote && can2vote>can4vote && can2vote>can5vote)
    printf("%s is on the lead !", candidate2);
    else if (can3vote>can2vote && can3vote>can1vote && can3vote>can4vote && can3vote>can5vote)
    printf("%s is on the lead !", candidate3);
    else if (can4vote>can2vote && can4vote>can3vote && can4vote>can1vote && can4vote>can5vote)
    printf("%s is on the lead !", candidate4);
    else if (can5vote>can2vote && can5vote>can3vote && can5vote>can4vote && can5vote>can1vote)
    printf("%s is on the lead !", candidate5);
    else
    printf("******NO MAJORITY!******");

}

int main()
{
    int i;
    int choice;
   do{
       yellow();
   printf("\n\n*******************************************\n");
   reset();
   printf("****WELCOME TO COMPUTER ELECTION SYSTEM****\n");
   yellow();
   printf("*******************************************\n\n");
   cyan();
   printf(" 1) Cast Vote\n");
   printf(" 2) Check Vote Count\n");
   printf(" 3) Check Leading Candidate\n");
   printf(" 4) Exit\n\n");
   green();
   printf("Enter Your Choice ( 1 - 4 ) : ");
   scanf("%d", &choice);
   switch (choice)
         {
             case 1 : cast();
                      break;
             case 2 : votecount();
                      break; 
             case 3 : leadcan();
                      break;  
             case 4 : reset();
                      printf("\n\n******THANK YOU FOR USING COMPUTER ELECTION!******\n\n");
                      break;   
             default : red();
                       printf("******ERROR : IVALID CHOICE! PLEASE TRY AGAIN******");                

         }
     }  while(choice!=4);

return 0;

}
