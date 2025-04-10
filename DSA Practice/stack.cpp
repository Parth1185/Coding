


    // IN JAVA, stack.peek(), in cpp, stack.top()
    
#include <iostream>
#include <vector>
using namespace std;

void push(vector<int>& stack) {
    int n;
    cout << "Enter the number of elements to push: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        stack.push_back(value);
    }
}

void pop(vector<int>& stack) {
    if (stack.empty()) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Popped element: " << stack.back() << endl;
    stack.pop_back();
}

void top(vector<int>& stack) {
    if (!stack.empty()) {
        cout << "Top Element: " << stack.back() << endl;
    } else {
        cout << "Stack is empty.\n";
    }
}

void display(vector<int>& stack) {
    if (stack.empty()) {
        cout << "Stack is Empty!!\n";
        return;
    }
    
    int size = stack.size();  
    cout << "Stack Elements (Size " << size << "): ";
    for (int i = size - 1; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

bool Empty_Stack(vector<int>& stack) {
    return stack.empty();
}

int size_of_stack(vector<int>& stack) {
    return stack.size();
}

int main() {
    vector<int> stack;
    
    push(stack);
    top(stack);
        
    cout << "Is stack empty? " << (Empty_Stack(stack) ? "Yes" : "No") << endl;
    display(stack);

    pop(stack);
    
    cout << "Is stack empty after popping? " << (Empty_Stack(stack) ? "Yes" : "No") << endl;
    display(stack);

    return 0;
}
