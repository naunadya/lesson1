#include <iostream>
using namespace std;
void enter (int a, char arr [10][10], int flag);
void print (int a, char arr [10][10]);

    int main() {
        int a;
        cout << "enter a"<< endl;
        cin >>a;
        int flag;
        while (flag !=0){
            cout << "If you want to print triangle to right, enter: 1 "<< endl;
            cout << "If you want to print triangle to left, enter: -1 "<< endl;
            cout << "If you want to print triangle to down, enter: 2 "<< endl;
            cout << "If you want to print triangle to top, enter: -2 "<< endl;
            cout << "enter choise"<< endl;
            cin >> flag;

            char arr [10][10];

            enter (a, arr, flag);
            print (a, arr);  
        } 
          
    return 0;
}
void enter (int a, char arr [10][10], int flag){
        
    switch (flag){
        case 1:
            for (int i = 0; i < a; i++ ){
                for (int j = 0; j< a;j++){
                    if (j ==0 ){
                        arr[i][j] = '#';
                    }else if (i==j && i < a/2 || (a-1)==(i+j) && i >= a/2 ) {
                        arr[i][j] = '#';
                    } else {
                        arr[i][j] = ' ';
                    } 
                }
            }
            break;
        case -1:
            for (int i = 0; i < a; i++ ){
                for (int j = 0; j< a;j++){
                    if (j ==(a-1) ){
                        arr[i][j] = '#';
                    }else if ((i+j)==(a-1) && i < a/2 || i==j && i >= a/2 ) {
                        arr[i][j] = '#';
                    } else {
                        arr[i][j] = ' ';
                    } 
                }
            }
            break;
        case 2:
            for (int i = 0; i < a; i++ ){
                for (int j = 0; j< a;j++){
                    if (i ==0 ){
                        arr[i][j] = '#';
                    }else if ((i==j) && j < a/2 || (i+j) == (a-1) && j >= a/2) {
                        arr[i][j] = '#';
                    } else {
                        arr[i][j] = ' ';
                    } 
                }
            }
            break;
        case -2:
            for (int i = 0; i < a; i++ ){
                for (int j = 0; j< a;j++){
                    if (i ==(a-1)){
                        arr[i][j] = '#';
                    }else if ((i+j)==(a-1) && j< a/2 || i == j &&  j>= a/2) {
                        arr[i][j] = '#';
                    } else {
                        arr[i][j] = ' ';
                    } 
                }
            }
            break;

    }
    }

void print (int a, char arr [10][10]){
         for (int i = 0; i < a; i++ ){
            for (int j = 0; j< a;j++){  
                cout << arr[i][j] ;   
            }
            cout << endl;
         }  
}    