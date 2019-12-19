#include <ncurses.h>     // ncurses library
/* Internal function declarations   */

int player1_input, player2_input;

/* main function */

int main() {
initscr();
curs_set(FALSE);

mvaddstr (1, 80, "Welcome!\n");
mvaddstr (2, 65, "This is a rock, paper, and scissors game.\n");
mvaddstr (3, 30, "To play the game, enter 1 for Rock, 2 for Paper and 3 for Scissors. This is a two-player game.");
mvaddstr (6, 45, "Player 1 Choice: ");
scanf("%d", &player1_input);
mvaddstr (6, 110, "Player 2 Choice: ");
scanf("%d", &player2_input);

{
     
    if ((player1_input==1)&&(player2_input==1))
      {
        printf("\nNobody Wins");
      }
    else if ((player1_input==1)&&(player2_input==2))
      { printf("\nPaper Covers Rock");
      }
    else if ((player1_input==1)&&(player2_input==3))
      { printf("\nRock Breaks Scissors");
      }
    else if((player1_input==2)&&(player2_input==1))
      { printf("\nPaper Covers Rock");
      }
    else if((player1_input==2)&&(player2_input==2))
      { printf("\nNobody Wins");
      }
    else if((player1_input==2)&&(player2_input==3))
      { printf("\nScissors Cuts Paper");
      }
    else if((player1_input==3)&&(player2_input==1))
      { printf("\nRock Breaks Scissors");
      }
    else if((player1_input==3)&&(player2_input==2))
      { printf("\nScissors Cuts Paper");
      }
    else if((player1_input==3)&&(player2_input==3))
      { printf("\nNobody Wins");
      }
    else
      { printf("You have selected an invalid selection.\n");
       
      }
  
    
   }
  endwin();
  return 0;
}
