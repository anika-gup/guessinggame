#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//guessing game Anika Gupta 8/30
int main()
{
  
  int keep_playing = 1;
  int random_num;
  int guess;
  
  while (keep_playing ==1) { //while user wants to keep playing
    int counter=0;
    int guessed=0;
    srand((unsigned) time(NULL));
    random_num = 1+(rand()%100); // getting a random number
    //  cout << random_num << endl;

    while (guessed==0) {  //while correct value not guessed
      cout << "guess a number between 1 and 100." << endl;
      cin >> guess;
      counter++;

      if (guess > random_num) { //if guess is too high
	cout << guess << " is too high." << endl;
      
      }

      else if (guess < random_num) { //if guess is too low
	cout << guess << " is too low." << endl;
      
      }
      else { //if accurate guess
	cout << "You got it right!" << endl;
	cout << "It took you " << counter << " tries." << endl;
	
        cout << "Would you like to play again? Type y for yes, n for no." << endl;
	char input = 'a';
	cin >> input;
	if (input=='y') {
	  //if to continue playing
	  guessed=1;
	}
	else {
	  //if to quit playing
	  cout << "Okay, thanks for playing!" << endl;
	  guessed=1;
	  keep_playing=0;
	}
      }

    }

  }
  return 0;
}
