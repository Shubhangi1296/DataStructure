#include<iostream>
using namespace std;
int main(){
int r1, r2, c1, c2, choice;
int A[10][10], B[10][10], C[10][10];

cout <<"Enter rows and columns of Matrix A : ";
cin >> r1 >> c1;
cout << "Enter rows and columns of Matrix B : ";
cin >> r2 >> c2;

cout << "Enter elements of matrix A: " << endl;
for (int i = 0; i < r1; i++)
    for (int j = 0; j < c1; j++)
        cin >> A[i][j];

cout << "Enter elements of matrix B: " << endl;
for (int i = 0; i < r2; i++)
    for (int j = 0; j < c2; j++)
        cin >> B[i][j];

do{
cout << "------Matrix Operations------" << endl;
cout << "1. Addition " << endl;
cout << "2. Subtraction " << endl;
cout << "3. Multiplication " << endl;
cout << "4. Exit " << endl;
cout << "Enter your choice : ";
cin >> choice;

switch(choice){
    case 1:
        if (r1 == r2 && c1 == c2){
            cout << "Result of Addition: "<<endl;
            for (int i = 0; i < r1; i++){
                for (int j = 0; j < c1; j++){
                    C[i][j] = A[i][j] + B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }else{
            cout << "Addition not possible due to different dimensions " << endl;
        }
    break;
    case 2:
        if (r1 == r2 && c1 == c2){
            cout << "Result of Subtraction: "<<endl;
            for (int i = 0; i < r1; i++){
                for (int j = 0; j < c1; j++){
                    C[i][j] = A[i][j] - B[i][j];
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }else{
            cout << "Subtraction not possible due to different dimensions " << endl;
        }
    break;
    case 3:
        if (c1 == r2){
            cout << "Result of Multiplication: "<< endl;
            for (int i = 0; i < r1; i++){
                for (int j = 0; j < c2; j++){
                    C[i][j] = 0;
                    for (int k = 0; k < c1; k++){
                        C[i][j] += A[i][k] * B[k][j];
                    }
                    cout << C[i][j] << " ";
                }
                cout << endl;
            }
        }else{
            cout << "Multiplication not possible " << endl;
        }
        break;
        case 4:
        cout << "Exiting..." << endl;
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    }while(choice != 4);

    return 0;
}