#include <iostream>
using namespace std;

void bubbleSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if (a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int a[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i + 1; j < n; j++){
            if(a[j] < a[min])
            min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void display(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, choice;
    int a[100];

    cout << " Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    do {
        cout << "\n-------Menu-------\n";
        cout << "1.Bubble Sort" << endl;
        cout << "2.Selection Sort" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                bubbleSort(a, n);
                cout << "Array after Bubble Sort: ";
                display(a, n);
                break;

            case 2:
                selectionSort(a, n);
                cout << "Array after Selection Sort: ";
                display(a, n);
                break;

            default:
                cout << "Invalid choice";
        }
    } while(choice != 3);
    return 0;
}