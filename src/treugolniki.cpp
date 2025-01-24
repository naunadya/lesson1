#include <iostream>
using namespace std;
void enter (char arr [10][10]);
void print (char arr [10][10]);

    int main() {
        //int a, b;
        //cout << "enter a"<< endl;
        //cin >>a;
        //cout << "enter b"<< endl;
        //cin >> b;
        char arr [10][10];

         enter (arr);
         print (arr);   
          
    return 0;
}
void enter (char arr [10][10]){
        for (int i = 0; i < 10; i++ ){
            for (int j = 0; j< 10;j++){
                if (j ==0 ){
                    arr[i][j] = '#';
                }//else if (i==j && i <= 10/2 && j <=10/2 || i==(10-j) && i > 10/2 && j < 10/2  ) {
                   // arr[i][j] = '#';
                //}
                else {
                    arr[i][j] = ' ';
                } 
                for (int n = 0; n< 10/2; n ++){
                    for (int m = 0; m < 10/2; m++){
                        if (n == m){
                            arr[i][j] = '#';
                        }
                    }
                }
                  for (int n = 10; n< 10/2; n --){
                    for (int m =10/2; m < 0; m--){
                        if (n == (10-m)){
                            arr[i][j] = '#';
                        }
                    }
                }             
            }
        }
}

void print (char arr [10][10]){
         for (int i = 0; i < 10; i++ ){
            for (int j = 0; j< 10;j++){  
                cout << arr[i][j] ;   
            }
            cout << endl;
         }  
}    