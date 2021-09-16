//A calculator program that calculates the expressions (+) or (-) given.


#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char c;
    int sum = 0;
    char prevOp = '+';
    int preNum = 0;
    int totalNum = 0;
    while (cin >>c) {
        if(c == '+' || c == '-') { //checks for + or - signs
            if(prevOp == '+') { //if sees + does addition
                sum += totalNum;
                preNum = -1;
                totalNum = 0;
            }
            else if(prevOp == '-') { //if sees - does subtraction
                sum -= totalNum;
                preNum = -1;
                totalNum = 0;
            }
            if(c == '+') {
                prevOp = '+';
            }
            else if(c == '-') {
                prevOp = '-';
            }
        }
        else {
            int num = c - '0';
            if(preNum == -1) {
                totalNum = num;
                preNum = num;
            }
            else {
                totalNum = totalNum*10 + num;
                preNum = num;
            }
        }
    }
    if(prevOp == '+') {
        sum += totalNum;
    }
    else if(prevOp == '-') {
        sum -= totalNum;
    }
    cout<<sum<<endl; //prints the total number
    return 0;
}
