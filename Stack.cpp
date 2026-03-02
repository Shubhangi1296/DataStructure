#include<iostream>
using namespace std;

class Stack{
    int arr[10];
    int top;

public:
    Stack(){
        top = -1;
    }

    void push(int value){
        if (top >= 9){
            cout << "Stack Overflow! Cannot push" << value << endl;
        } else {
            arr[++top] = value;
            cout << value << "pushed into stack" << endl;
        }
    }

    void pop(){
        if (top < 0){
            cout << "Stack is empty" << endl;
        } else {
            cout << arr[top--] <<"popped from stack" << endl;
        }
    }

    void display(){
        if (top < 0){
            cout << "Stack is empty";
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++){
                cout << arr[i] <<" ";
            }
            cout << endl;
        }
    }
};

int main(){
    Stack s;
    int choice, value;

    while (true){
        cout << "\n1.Push \n2.Pop \n3.Display \n4.Exit \nEnter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;
            
            case 3:
                s.display();
                break;

            case 4:
                cout << "Exit" << endl;
            
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }
    return 0;
} 
