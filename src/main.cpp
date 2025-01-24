#include <iostream>
using namespace std;
void enter (char arr [10][40]);
void print (char arr [10][40]);

    int main() {
        //int a, b;
        //cout << "enter a"<< endl;
        //cin >>a;
        //cout << "enter b"<< endl;
        //cin >> b;
        char arr [10][40];

         enter (arr);
         print (arr);   
          
    return 0;
}
void enter (char arr [10][40]){
        for (int i = 0; i < 10; i++ ){
            for (int j = 0; j< 40;j++){
                if (i ==0 || i ==9){
                    arr[i][j] = '#';
                }else if (j == 0|| j ==39){
                    arr[i][j] = '#';
                }else if (j ==19){
                    arr[i][j] = ':';
                } else if (i ==3 && j ==4 || i ==4&& j ==4 || i ==5 && j ==4 || i ==3 && j ==36 || i ==4 && j ==36 || i ==5 && j ==36  ){
                    arr[i][j] = '|';
                } else {
                    arr[i][j] = ' ';
                }                
            }
        }
}

void print (char arr [10][40]){
         for (int i = 0; i < 10; i++ ){
            for (int j = 0; j< 40;j++){  
                cout << arr[i][j] ;   
            }
            cout << endl;
         }  
}    