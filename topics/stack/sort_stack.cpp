#include<bits/stdc++.h>
using namespace std;

stack<int> sortStack(stack<int> &inputStack) {
    stack<int> tempStack;

    while (!inputStack.empty()) {
        int current = inputStack.top();
        inputStack.pop();

        while (!tempStack.empty() && tempStack.top() > current) {
            inputStack.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(current);
    }

    return tempStack;
}

int main() {
    stack<int> inputStack;
    inputStack.push(34);
    inputStack.push(3);
    inputStack.push(31);
    inputStack.push(98);
    inputStack.push(92);
    inputStack.push(23);

    stack<int> sortedStack = sortStack(inputStack);

    cout << "Sorted Stack (Top to Bottom):" << endl;
    while (!sortedStack.empty()) {
        cout << sortedStack.top() << " ";
        sortedStack.pop();
    }
    cout << endl;

    return 0;
}