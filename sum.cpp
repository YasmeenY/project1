//A simple Adding numbers program.


#include<iostream>
using namespace std;

int main() {
    int num, sum = 0;
    //read sequence of number
    cout << "Enter the numbers you want to add: ";
    
    while(cin>>num) {
        //cal sum
        sum = sum + num;
    }
    
    //display sum
    cout<<sum<<endl;
    return 0;
}
