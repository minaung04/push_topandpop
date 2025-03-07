#include<iostream>
using namespace std;

#define MAX 100 // Maximum stack size

struct Stack {
    int data[MAX]; // Array to store stack elements
    int top;       // Top pointer
};

// Function to initialize Stack
void initialize(Stack &S) {
    S.top = -1; 
}

// Push Operation
int push(int T, Stack &S) {
    if (S.top == MAX - 1) {
        cout << "Stack Overflow!" << endl;
        return -1; // Stack is full
    }
    S.top++;
    S.data[S.top] = T; 
    return 1; // Success
}

// Top and Pop Operation
int topandpop(Stack &S) {
    if (S.top == -1) {
        cout << "Stack Underflow!" << endl;
        return -1; // Stack is empty
    }
    int topElement = S.data[S.top];
    S.top--; // Pop the top element
    return topElement; // Return the popped element
}

int main() {
    Stack S;
    initialize(S);

    push(10, S);
    push(20, S);
    push(30, S);

    cout << "Popped Element: " << topandpop(S) << endl; 
    cout << "Popped Element: " << topandpop(S) << endl; 
    cout << "Popped Element: " << topandpop(S) << endl; 
    cout << "Popped Element: " << topandpop(S) << endl; 
    return 0;
}