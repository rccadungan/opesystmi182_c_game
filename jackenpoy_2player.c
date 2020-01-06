#include <ncurses.h>     // ncurses library
#include <stdio.h>
#include <stdlib.h>
/* Internal function declarations   */
int rock ();           
int paper();
int scissors();
int rock_p2 ();
int paper_p2 ();
int scissors_p2 ();
int reload();
char player1_input, player2_input;

/* main function */

int main(void) {
initscr();
curs_set(FALSE);

mvaddstr (1, 80, "Welcome!\n");
mvaddstr (2, 65, "This is a rock, paper, and scissors game.\n");
mvaddstr (3, 25, "To play the game, enter 1 for Rock, 2 for Paper and 3 for Scissors. This is a two-player game. Press ENTER to see the result.");
mvaddstr (6, 45, "Player 1 Choice: ");
player1_input = getch();
 	if (player1_input == '1') {
	rock();
	}else if (player1_input == '2'){
	paper();
	}else if (player1_input == '3'){
	scissors();
	}else {
	mvaddstr(19, 80,"Invalid input");
	}
refresh();

mvaddstr (6, 110, "Player 2 Choice: ");
player2_input= getch();
	if (player2_input == '1') {
	rock_p2();
	}else if (player2_input == '2'){
	paper_p2();
	}else if (player2_input == '3'){
	scissors_p2();
	}else {
	mvaddstr(19, 80,"Invalid input");
	}
reload();
{
      
    if ((player1_input=='1')&&(player2_input=='1'))
      {
        mvaddstr(20, 78,"Nobody Wins");
      }
    else if ((player1_input=='1')&&(player2_input=='2'))
      { mvaddstr(20, 77,"Paper Covers Rock");
      }
    else if ((player1_input=='1')&&(player2_input=='3'))
      { mvaddstr(20, 75,"Rock Breaks Scissors");
      }
    else if((player1_input=='2')&&(player2_input=='1'))
      { mvaddstr(20, 77,"Paper Covers Rock");
      }
    else if((player1_input=='2')&&(player2_input=='2'))
      { mvaddstr(20, 78,"Nobody Wins");
      }
    else if((player1_input=='2')&&(player2_input=='3'))
      { mvaddstr(20, 75,"Scissors Cuts Paper");
      }
    else if((player1_input=='3')&&(player2_input=='1'))
      { mvaddstr(20, 75,"Rock Breaks Scissors");
      }
    else if((player1_input=='3')&&(player2_input=='2'))
      { mvaddstr(20, 75,"Scissors Cuts Paper");
      }
    else if((player1_input=='3')&&(player2_input=='3'))
      { mvaddstr(20, 78,"Nobody Wins");
      }
    else
      { mvaddstr(20, 75,"You have selected an invalid selection.\n");
       
      }
reload();  
    
   }
  endwin();
  return 0;
}

/* internal functions  */
int reload()
{	
refresh();
  getch();
}

int rock (){
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
  mvaddstr(13, 45, "  **   **    ");
}
int  rock_p2 (){
  mvaddstr(10, 112, "    ***      ");
  mvaddstr(10, 112, "   *****     ");
  mvaddstr(11, 112, "  *******    ");
  mvaddstr(12, 112, "   *****     ");
  mvaddstr(13, 112, "    ***      ");
  mvaddstr(13, 112, "     *        ");
} 

int paper_p2 (){
  mvaddstr(10, 112, "      ******   ");
  mvaddstr(10, 112, "     ******    ");
  mvaddstr(11, 112, "    ******     ");
  mvaddstr(12, 112, "   ******      ");
  mvaddstr(13, 112, "  ******       ");
  mvaddstr(13, 112, " ******        ");
}

int scissors_p2 (){
  mvaddstr(10, 110, "  **    **   ");
  mvaddstr(10, 110, "   **  **    ");
  mvaddstr(11, 110, "    ****     ");
  mvaddstr(12, 110, "    ***      ");
  mvaddstr(13, 110, "  **   **    ");
  mvaddstr(13, 110, "  **   **    ");
}
