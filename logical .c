/*#include<stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int user,computer;
	char y;
	do
	{
	
	printf("----Game App------");
	printf("\nPlease netr your (1-3): ");
	printf("\n Press 1 bat");
	printf("\n Press 2 ball");
	printf("\n Press 3 stupm");
	
	printf("\nUser choice is: ");
	scanf("%d",&user);
	
    srand(time(0));  
        computer = (rand() % 3) + 1; 
        
         printf("\nComputer choice is: %d\n", computer);
         
          printf("Now Computer choice is: ");
        switch (computer)
        {
        case 1:
            printf("Bat\n");
            break;
        case 2:
            printf("Ball\n");
            break;
        case 3:
            printf("Stump\n");
            break;
        }
         
        
        if(user == computer)
        {
        	printf("It's a draw!'");
		}
		
		else if((user ==1 && computer == 2)||
		        (user ==2 && computer == 3)||
				(user == 3 && computer ==1))
				
				{
					printf("you win !");
				}
        else
        {
        	printf("loas !");
		}
        
        
         printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &y);
        
}while(y == 'y' || y == 'Y');

	 
}*/
 c++ program in game 

/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class GameApp {
private:
    int userWin = 0;
    int computerWin = 0;

public:
    void game() {
        int user, com;
        char y;

        srand(time(0));  /

        do {
            cout << "------- Please enter your cricket game choice -----";
            cout << "\n Press 1: Bat";
            cout << "\n Press 2: Ball";
            cout << "\n Press 3: Stump";

            cout << "\nUser choice is: ";
            cin >> user;

            com = (rand() % 3) + 1;

            cout << "Computer choice is: ";
            switch (com) {
                case 1: cout << "Bat\n"; break;
                case 2: cout << "Ball\n"; break;
                case 3: cout << "Stump\n"; break;
            }

            if (user == com) {
                cout << "It's a draw!\n";
            } else if ((user == 1 && com == 2) ||
                       (user == 2 && com == 3) ||
                       (user == 3 && com == 1)) {
                cout << "You win!\n";
                userWin++;
            } else {
                cout << "You lose!\n";
                computerWin++;
            }

            cout << "Try again? (y/n): ";
            cin >> y;

        } while (y == 'y' || y == 'Y');
    }

    void display() {
        cout << "\nFinal Results:";
        cout << "\nUser wins: " << userWin;
        cout << "\nComputer wins: " << computerWin << endl;
    }
};

int main() {
    GameApp g1;
    g1.game();
    g1.display();

  
}
*/






























































	

