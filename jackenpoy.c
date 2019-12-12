#include <ncurses.h>     // ncurses library
/* Internal function declarations   */

int  rock ();           
int paper();
int scissors();
int reload();
int user_input;

/* main function */

int main(void) {
  initscr();
  noecho();
  curs_set(FALSE);
	
mvaddstr (1, 80, "Welcome!\n");
mvaddstr (2, 65, "This is a rock, paper, and scissor game.\n");
mvaddstr (3, 30, "To play the game, enter 1 for Rock, 2 for Paper and 3 for Scissors. You will be playing against the computer.");
mvaddstr (6, 45, "Player's Choice: ");
mvaddstr (6, 110, "Computer's Choice: \n");
mvaddstr(7, 80,  "     |     ");
mvaddstr(8, 80,  "     |     ");
mvaddstr(9, 80,  "     |     ");
mvaddstr(10, 80, "     |     ");
mvaddstr(11, 80, "     |     ");
mvaddstr(12, 80, "     |     ");
mvaddstr(13, 80, "     |     ");
mvaddstr(14, 80, "     |     ");
mvaddstr(15, 80, "     |     ");
mvaddstr(16, 80, "     |     ");
mvaddstr(17, 80, "     |     ");
mvaddstr(18, 80, "     |     ");


int user_input = getch();
	if (user_input == 1) {
	rock();
	}else if (user_input == 2){
	paper();
	}else if (user_input == 3){
	scissors();
	}else {
	printf("Invalid input");
	}
reload();

int randint(int n){ 
	if (n == 1){
	rock();
	}else if (n == 2){
	paper();
	}else if (n == 3){
	scissors();
	}else {
	printf("Invalid input");
	}}
reload();

  rock();
  reload();

  paper();
  reload();

  scissors();
  reload();

  endwin();
  return 0;
} 

/* internal functions  */
int reload()
{	
refresh();
  getch();
}

int  rock (){
  mvaddstr(10, 45, "    ***      ");
  mvaddstr(10, 45, "   *****     ");
  mvaddstr(11, 45, "  *******    ");
  mvaddstr(12, 45, "   *****     ");
  mvaddstr(13, 45, "    ***      ");
  mvaddstr(13, 45, "     *        ");
} 

int paper(){
  mvaddstr(10, 45, "      ******   ");
  mvaddstr(10, 45, "     ******    ");
  mvaddstr(11, 45, "    ******     ");
  mvaddstr(12, 45, "   ******      ");
  mvaddstr(13, 45, "  ******       ");
  mvaddstr(13, 45, " ******        ");
}

int scissors(){
  mvaddstr(10, 45, "  **    **   ");
  mvaddstr(10, 45, "   **  **    ");
  mvaddstr(11, 45, "    ****     ");
  mvaddstr(12, 45, "    ***      ");
  mvaddstr(13, 45, "  **   **    ");
  mvaddstr(13, 45, "  **   **    ");
}
