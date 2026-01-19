#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value, key;
    
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n---- OPERATION ON ARRAY----" << endl;
        cout << "1. Traversal " << endl;
        cout << "2. Insertion " << endl;
        cout << "3. Deletion " << endl;
        cout << "4. Searching " << endl;
        cout << "5. Updating " << endl;
        cout << "6. Sorting " << endl;
        cout << "7. Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: 
            cout << "Array elements are:\n";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 2:   
            cout << "Enter position to insert (0-based index): ";
            cin >> pos;
            cout << "Enter value to insert: ";
            cin >> value;

            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;

            cout << "Element inserted successfully.\n";
            cout << "Updated array: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 3: 
            cout << "Enter position to delete (0-based index): ";
            cin >> pos;

            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;

            cout << "Element deleted successfully.\n";
            cout << "Updated array: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
            
        case 4:   
            cout << "Enter element to search: ";
            cin >> key;

            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at index " << i << endl;
                    break;
                }
                if (i == n - 1) {
                    cout << "Element not found\n";
                }
            }
            break;

        case 5:   
            cout << "Enter position to update (0-based index): ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> value;

            arr[pos] = value;
            cout << "Element updated successfully.\n";
            cout << "Updated array: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 6:   
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout << "Array sorted successfully.\n";
            cout << "Updated array: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 7:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}
