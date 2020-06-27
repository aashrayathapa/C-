#include <iostream>

using namespace std;
/* The story is going to be based on the three little pigs and the user will get to choose which of the three houses the wolf gets to blow down (the wolf being the user) */

int main (){

  int answer = 3;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  bool outOfGuesses = false;

//Tell the story of the three pigs
  cout << "\t   THE THREE LITTLE PIGS\n";

  cout << "\n";

  cout << "There were three little pigs who just moved out of University." << endl;

    cout << "They each needed to build a house to live in now that they were finished." << endl;

    cout << "\nThe first pig decided to build his house with straw." << endl;

    cout << "The second pig decided to build his house with sticks." << endl;

    cout << "The third pig decided to build his house with brick." << endl;

//Big bad wolf enter and prompts user to blow a house down

  cout << "\nOne day a big bad wolf came to eat the pigs\n";

  cout << "But to do that he had to blow the house down\n";

  cout << "\nWhich house should the Wolf blow down?\n";

  while (answer != guess && !outOfGuesses){

    if (guessCount < guessLimit){
      
      cout << "\n1. House 1\n";
      cout << "2. House 2\n";
      cout << "3. House 3\n";
      cout << "Enter Guess: ";
      cin >> guess;
      guessCount ++;

  } else {

    outOfGuesses = true;
    cout << "\nOh no!\n";
    cout << "He huffed and he puffed!\n";

  }

  }
  
if (outOfGuesses){
  cout << "The Wolf blew the house down and got them!\n";
  } else {
      
    cout << "You saved them! House 3 was made with bricks!\n";
}

  

  return 0;
}