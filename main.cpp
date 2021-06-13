#include <iostream>
using namespace std;

// REQUIRES: n >= 0
// EFFECTS: computes the number of mice at month n
int num_mice(int month, int initial_num) {
    //starting with 3 mice
    if(month <= 1){
		return initial_num;
	}
    //mice reproduce 7 babies every month
    //mouse needs to be 1 month old in order to give birth
	else{
		return num_mice(month - 1, initial_num) + 7 * num_mice(month - 2, initial_num);
	}
  return 0;
}

int main() {
    int user_month;
    int starting_mice;
    cout << endl;
    cout << endl;
    cout << "==============================================================" << endl;
    cout << "Hello! Welcome to my Mouse Reproduction Calculator. " << endl;
    cout << "Enter the number of months the mice have been in your home " << endl;
    cout << "and the number of mice you initially counted.";
    cout << endl;
    cout << endl;
    cout << "Num. of months: ";
    cin >> user_month;
    cout << "Initial num. of mice: ";
    cin >> starting_mice;


    cout << "There is at most " << num_mice(user_month, starting_mice);
    cout << " mice in your home" << endl;

    cout << "==============================================================" << endl;
}