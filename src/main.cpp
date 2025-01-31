#include <iostream>
using namespace std;
//void enter (char arr [10][10]);
//void print (char arr [10][10]);

    int main() {
        int arr [3][2][2][3]= {{{   {1,2,3},
                                    {4,5,6}
                                },
                                {   {10,20,30},
                                    {40,50,60}
                                }
                                },
                                {{   {100,200,300}, 
                                     {400,500,600}
                                },
                                {   {4000,5000,6000},
                                    {1000,2000,3000}
                                }
                                },
                                {{   {700,800,900}, 
                                     {200,300,400}
                                },
                                {   {70,80,90},
                                    {20,30,40}
                                }
                                }};
       // cout << arr[0][0][1];
        for (int i = 0; i < 3; i+=2){
            for (int j =0; j < 2; j++){
                for (int k = 1; k < 2; k++){
                    for (int m = 2; m >1; m--){
                        cout <<  (arr [i][j][k][m])<< " ";
                    }
                    cout << endl;   
                }
                cout << endl;
            }   
            cout << endl;
        }

    return 0;
}    