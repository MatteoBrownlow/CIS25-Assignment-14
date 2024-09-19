#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

  long randomNumber = time(0);
  srand(randomNumber);
  int secretNumber = rand();
  cout << secretNumber << endl;
  return 0;
}
