#include <iostream>
using namespace std;
void enter (char arr [10][20]);
void print (char arr [10][20]);

    int main() {
        //int a, b;
        //cout << "enter a"<< endl;
        //cin >>a;
        //cout << "enter b"<< endl;
        //cin >> b;
        char arr [10][20];

         enter (arr);
         print (arr);   
          
    return 0;
}
void enter (char arr [10][20]){
        for (int i = 0; i < 10; i++ ){
            for (int j = 0; j< 20;j++){
                if (i ==0 || i == 9){
                    arr[i][j] = '#';
                }else if (j == 0 || j == 19 ){
                    arr[i][j] = '#';
                }else if (j == 3 && i == 4||j == 3 && i ==5 ){
                    arr[i][j] = '#';
                }else if (j == 16 && i == 4||j == 16 && i ==5 ){
                    arr[i][j] = '#';
                }else if (j == 9){
                    arr[i][j] = ':';
                }else  {
                    arr[i][j] = ' ';
                }                
            }
        }
}

void print (char arr [10][20]){
         for (int i = 0; i < 10; i++ ){
            for (int j = 0; j< 20;j++){  
                cout << arr[i][j] ;   
            }
            cout << endl;
         }  
} 