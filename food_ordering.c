#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include<time.h>

void breakFast();
void lunch();
void dinner();
void mainmenu();
void exit();

COORD coord = {0,0};

void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int num;
float price;
float total;
char choice;
int again;

void main()
{
	mainmenu();
}

void mainmenu()
{
	char choice = ' ' ;
  printf("              ==============================          \n");
  printf("                   Food Ordering System          \n ");
  printf("             ==============================          \n\n");

  printf("\t\tEnter [A] -> Breakfast Menu\n");
  printf("\t\tEnter [B] -> Lunch Menu\n");
  printf("\t\tEnter [C] -> Dinner Menu\n");
  printf("\t\tEnter [D] -> Exit\n\n");
  
  printf("              ==============================          \n");
  time_t t;   // not a primitive datatype
  time(&t);
  printf("\t\t %s", ctime(&t));
  printf("              ==============================          \n\n");
  
  printf("\t      Please Enter Your Choice: ");
  scanf("%c", &choice);
  
    system("cls");

    {
		if (toupper(choice) == 'A')
              breakFast();
        else if (toupper(choice) == 'B')
              lunch();
        else if (toupper(choice) == 'C')
              dinner();
        else if (toupper(choice) == 'D')
              exit(0);
        else if (toupper(choice) != 'A', 'B' , 'C' , 'D')
            {
               mainmenu();
            }
	}

}
