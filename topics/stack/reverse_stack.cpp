#include<bits/stdc++.h>
using namespace std;    

void reverseStack(stack<int> &inputStack) {
    stack<int> tempStack1;
    stack<int> tempStack2;

    // Transfer elements from inputStack to tempStack1
    while (!inputStack.empty()) {
        tempStack1.push(inputStack.top());
        inputStack.pop();
    }

    // Transfer elements from tempStack1 to tempStack2
    while (!tempStack1.empty()) {
        tempStack2.push(tempStack1.top());
        tempStack1.pop();
    }

    // Transfer elements back to inputStack, now reversed
    while (!tempStack2.empty()) {
        inputStack.push(tempStack2.top());
        tempStack2.pop();
    }
}   

int main() {
    stack<int> inputStack;
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);

    cout << "Original Stack (Top to Bottom):" << endl;
    stack<int> tempStack = inputStack; // Create a copy to display
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    reverseStack(inputStack);

    cout << "Reversed Stack (Top to Bottom):" << endl;
    while (!inputStack.empty()) {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;

    return 0;
}