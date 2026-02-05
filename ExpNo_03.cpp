#include<iostream>
using namespace std;

int main(){
    int n, arr[100], choice, key;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    do{
        cout << "\nSearching Technique Menu\n";
        cout << "1. Linear Search" << endl;
        cout << "2. Binary Search" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1: {
            cout << "Enter element to search: ";
            cin >> key;
            int pos = -1;
            for (int i = 0; i < n; i++){
                if (arr[i] == key){
                    pos = i;
                    break;
                }
            }
            if (pos != -1){
                cout << "Element found at position: " << pos + 1 << endl;
            } else{
                cout << "Element not found...." << endl;
            }
            break;
        }
        case 2: {
            bool sorted = true;
            for (int i = 0; i < n - 1; i++){
                if (arr[i] > arr[i + 1]){
                    sorted = false;
                    break;
                }
            }
            if (!sorted){
                cout << " Array is not sorted. Binary search cannot be performed. " << endl;
                break;
            }

            cout << "Enter element to search: ";
            cin >> key;

            int low = 0, high = n - 1, mid;
            int found = -1;

            while(low <= high){
                mid = (low + high) / 2;
                if (arr[mid] == key){
                    found = mid;
                    break;
                } else if (key < arr[mid]){
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            if (found != -1){
                cout << "Element found at position: " << found + 1 << endl;
            } else {
                cout << "Element not found...." << endl;
            }
            break;
        }

        case 3: 
            cout << "Exit..." << endl;
            break;
        
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        
        }
    } while (choice != 3);
    
    return 0;
}