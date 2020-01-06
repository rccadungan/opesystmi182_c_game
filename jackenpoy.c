#include <ncurses.h>     // ncurses library
#include <stdlib.h>
#include <time.h>
/* Internal function declarations   */

int rock ();           
int paper();
int scissors();
int rock_comp ();
int paper_comp ();
int scissors_comp ();
int reload();
char user_input;

/* main function */

int main(void) {
  initscr();
  noecho();
  curs_set(FALSE);
  srand(time(0));
	
mvaddstr (1, 80, "Welcome!\n");
mvaddstr (2, 65, "This is a rock, paper, and scissors game.\n");
mvaddstr (3, 30, "To play the game, enter 1 for Rock, 2 for Paper and 3 for Scissors. You will be playing against the computer.");
mvaddstr (6, 45, "Player's Choice: ");
mvaddstr (6, 110, "Computer's Choice: ");
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
refresh();


user_input = getch();
	if (user_input == '1') {
	rock();
	}else if (user_input == '2'){
	paper();
	}else if (user_input == '3'){
	scissors();
	}else {
	mvaddstr(19, 80,"Invalid input");
	}
refresh();

int n = (rand()%3+1);
	if (n == 1){
	rock_comp();
	}else if (n == 2){
	paper_comp();
	}else if (n == 3){
	scissors_comp();
	}else {
	mvaddstr(19, 80,"Invalid input /n");
	}
reload();

    if ((user_input=='1')&&(n==1))
      {
        mvaddstr(20, 78, "Nobody Wins");
      }
    else if ((user_input=='1')&&(n==2))
      { mvaddstr(20, 77, "Paper Covers Rock");
      }
    else if ((user_input=='1')&&(n==3))
      { mvaddstr(20, 75, "Rock Breaks Scissors");
      }
    else if((user_input=='2')&&(n==1))
      { mvaddstr(20, 77, "Paper Covers Rock");
      }
    else if((user_input=='2')&&(n==2))
      { mvaddstr(20, 75, "Nobody Wins");
      }
    else if((user_input=='2')&&(n==3))
      { mvaddstr(20, 75, "Scissors Cuts Paper");
      }
    else if((user_input=='3')&&(n==1))
      { mvaddstr(20, 75, "Rock Breaks Scissors");
      }
    else if((user_input=='3')&&(n==2))
      { mvaddstr(20, 75, "Scissors Cuts Paper");
      }
    else if((user_input=='3')&&(n==3))
      { mvaddstr(20, 75,"Nobody Wins");
      }
    else
      { mvaddstr(20, 75, "You have selected an invalid selection.\n");       
      }

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
  mvaddstr(10, 48, "    ***      ");
  mvaddstr(10, 48, "   *****     ");
  mvaddstr(11, 48, "  *******    ");
  mvaddstr(12, 48, "   *****     ");
  mvaddstr(13, 48, "    ***      ");
  mvaddstr(13, 48, "     *        ");
} 

int paper(){
  mvaddstr(10, 48, "      ******   ");
  mvaddstr(10, 48, "     ******    ");
  mvaddstr(11, 48, "    ******     ");
  mvaddstr(12, 48, "   ******      ");
  mvaddstr(13, 48, "  ******       ");
  mvaddstr(13, 48, " ******        ");
}

int scissors(){
  mvaddstr(10, 48, "  **    **   ");
  mvaddstr(10, 48, "   **  **    ");
  mvaddstr(11, 48, "    ****     ");
  mvaddstr(12, 48, "    ***      ");
  mvaddstr(13, 48, "  **   **    ");
  mvaddstr(13, 48, "  **   **    ");
}

int  rock_comp (){
  mvaddstr(10, 112, "    ***      ");
  mvaddstr(10, 112, "   *****     ");
  mvaddstr(11, 112, "  *******    ");
  mvaddstr(12, 112, "   *****     ");
  mvaddstr(13, 112, "    ***      ");
  mvaddstr(13, 112, "     *        ");
} 

int paper_comp (){
  mvaddstr(10, 112, "      ******   ");
  mvaddstr(10, 112, "     ******    ");
  mvaddstr(11, 112, "    ******     ");
  mvaddstr(12, 112, "   ******      ");
  mvaddstr(13, 112, "  ******       ");
  mvaddstr(13, 112, " ******        ");
}

int scissors_comp (){
  mvaddstr(10, 112, "  **    **   ");
  mvaddstr(10, 112, "   **  **    ");
  mvaddstr(11, 112, "    ****     ");
  mvaddstr(12, 112, "    ***      ");
  mvaddstr(13, 112, "  **   **    ");
  mvaddstr(13, 112, "  **   **    ");
}
