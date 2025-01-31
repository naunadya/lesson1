#include <iostream>
using namespace std;
//void enter (char arr [10][10]);
//void print (char arr [10][10]);

    int main() {
        int arr [3][5]= {{1,2,3,4,5},
                            {10,20,30,40,50},
                            {100,200,300,400,500}};
       // cout << arr[0][0];
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 5; j++){
                cout << arr [i][j]<< " ";
            }
            cout << endl;
        }

    return 0;
}    