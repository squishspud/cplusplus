#include <iostream>
using namespace std;
int main() {
  int weight, planetnumber;
  cout << "Please enter your earth weight.\n";
  cin >> weight;
  cout << "Please enter the number of the planet you want to fight on.\n";
  cin >> planetnumber;
  int output;
  switch (planetnumber){
    case 1:
      output = weight*0.78;
      cout << "Your weight on Venus is " << output;
      break;
    case 2:
      output = weight*0.39;
      cout << "Your weight on Mars is " << output;
      break;
    case 3:
      output = weight*0.78;
      cout << "Your weight on Venus is " << output;
      break;
    case 4:
      output = weight*2.65;
      cout << "Your weight on Jupiter is " << output;
      break;
    case 5:
      output = weight*1.17;
      cout << "Your weight on Saturn is " << output;
      break;
    case 6:
      output = weight*1.05;
      cout << "Your weight on Uranus is " << output;
      break;

  }
}
