#include <iostream>
#include <string.h>

using namespace std;

int add(int firstNumber, int secondNumber) {
    int answer = firstNumber + secondNumber;
    
    cout << "The answer is " << answer << "!\n";
    cout << "Answer pointer: " << &answer;
    
    return 0;
}

int main(void) {
    int x;
    int y;
    
    cout << "What is the first number to add? ";
    cin >> x;
    
    cout << "\nWhat is the second number? ";
    cin >> y;
    
    add(x, y);
    
    return 0;
}
