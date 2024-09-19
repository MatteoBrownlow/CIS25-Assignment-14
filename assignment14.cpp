#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

  long randomNumber = time(0);
  srand(randomNumber);
  int secretNumber = (rand() % 1000) + 1;
  cout << "Guess the number 1 - 1000" << endl;
  int guess = 0;
  while(guess != secretNumber){
    cout << "Enter your guess: " << endl;
    cin >> guess;
  }
  cout << "You got it! The number was " << secretNumber << endl;
  return 0;
}
