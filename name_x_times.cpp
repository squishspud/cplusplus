#include <iostream>
using namespace std;
// Define name_x_times() below:
void name_x_times(string name, int x) {
  while (x > 0){
    cout << name;
    x--;
  }
}

int main() {
  
  //change next line to your name
  string my_name = "My name is ___! \n";
  int some_number = 34; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);
  
}
