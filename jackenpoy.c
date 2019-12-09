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
	
mvaddstr (10, 10, "Welcome!\n");
mvaddstr (11, 10, "This is a rock, paper, and scissor game. \n To play the game, enter 1 for Rock, 2 for Paper and 3 for Scissors. You will be playing against the computer.");
mvaddstr (12, 10, "Player's Choice: \n");
int user_input = getch();
	if (user_input == 1) {
	rock();
	}else if (user_input == 2){
	paper();
	}else if (user_input == 3){
	scissors();
	}else {
	printf("/n Invalid input");
	}
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
  mvaddstr(10, 33, "    ***      ");
  mvaddstr(10, 33, "   *****     ");
  mvaddstr(11, 33, "  *******    ");
  mvaddstr(12, 33, "   *****     ");
  mvaddstr(13, 33, "    ***      ");
  mvaddstr(13, 33, "     *        ");
} 

int paper(){
  mvaddstr(10, 33, "      ******   ");
  mvaddstr(10, 33, "     ******    ");
  mvaddstr(11, 33, "    ******     ");
  mvaddstr(12, 33, "   ******      ");
  mvaddstr(13, 33, "  ******       ");
  mvaddstr(13, 33, " ******        ");
}

int scissors(){
  mvaddstr(10, 33, "  **    **   ");
  mvaddstr(10, 33, "   **  **    ");
  mvaddstr(11, 33, "    ****     ");
  mvaddstr(12, 33, "    ***      ");
  mvaddstr(13, 33, "  **   **    ");
  mvaddstr(13, 33, "  **   **    ");
}
