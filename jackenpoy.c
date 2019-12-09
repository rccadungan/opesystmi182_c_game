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
	
echo ("Welcome!\n";)
echo ("This is a rock, paper, and scissor game. \n To play the game, enter 1 for Rock, 2 for Paper and 3 for Scissors. You will be playing against the computer.");
echo ("Player's Choice: \n");
scanf ("%d, &user_input");
	if (&user_input == 1) {
	getchw rock()
	}else if (&user_input == 2){
	getchw paper()
	}else if (&user_input == 3){
	getchw scissors()
	}else {
	printf("/n Invalid input")
	}
 
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
