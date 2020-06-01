#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
  int a,b;
  srand(time(0));
  b = rand()%99+1;
  int c = 5;
    while(1){
        cout << "Please enter the number you want to guess.\n";
        cin >> a;
        c = c - 1;
    
        if (a > b){
            cout << "Too high!\n";
        }
        else if (b < a){
            cout << "Too low!\n";
        }
        else {
            cout << "You got it!\n";
            break;
        }
        if (c == 0){
            cout << "Game Over\n";
			cout << "The correct number was " << b;
            break;
        }
		cout << "You have " << c << " tries left!\n";
    }
}
