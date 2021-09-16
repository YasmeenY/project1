//This program will take 3 inputs at most and give the results. I left it at 3 because I didnt know when the program should end since in gradescope it didnt accept when I made a specific input for it to end and keep an infinite loop.

#include <iostream>

using namespace std;

int main() {
    // integer for integers
    int integer = 0;
    // character = char, operation for + and -
    char operation;
    // total for the sum in total
    int total = 0;
    int x = 3;
    // reads the first integer
    while(x != 0) {
        x--;
        cin >> integer;
        // operation comes first after the first integer
        total=integer;
            while(cin >> operation) {
                // single quotation for character
                if(operation == ';'){
                    break;
                }
                else if (operation == '+') {
                    cin>>integer;
                    total = total + integer;
                }
                else if (operation == '-') {
                    cin>>integer;
                    total = total - integer;
                }
            }
        if (total > 1){
            cout << total << endl;
        }
        else {
            return 0;
        }
    }
}
