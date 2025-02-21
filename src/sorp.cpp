#include <iostream>
using namespace std;

void enter (int *arr, int size);
int * seach (int * arr, int key, int size);
int * print (int *a, int size);
void myswap (int &a, int &b){
    cout << "In"<< endl;
    cout << a<< " "<< b<< endl;
    int temp = a;
    a = b;
    b = temp;
}


int main (){
    

int a = 5; 
int b = 7;
int *ptrb = &b;
int &refb = b;

cout << "Before"<< endl;
cout << &a<< " "<< &b<< endl;
myswap(a,b);

cout << "After"<< endl;

cout << b<< " "<< &b;
cout << *ptrb << " " <<ptrb <<  endl;
cout << refb << " " <<&refb <<  endl;
    // }


   /// cout << *(ptra+3)<< endl;

    // for (int i =0; i< 6; i++){
    //     cout << *(ptra+i)<< endl;
    // }

   // enter (arr, size); 


    // int key=1000;
    // cout << * seach (arr, key, size);
    return 0;
}
int * seach (int * arr, int key, int size){
    int max =size+1;
    int min = 0;
    int *rez ;
    while (true){    
        rez =&(arr[(max+min)/2]);
            if (key> *rez){
                min =  (max+min)/2;
            }else if (key < *rez){
                max = (max+min)/2;
            } else {
            return rez;
         }
    }    
  // return rez;
}


void enter (int *arr, int size){
    int j = 0;
    for (int i = 3; i < 13; i++){
        arr [j] = i;
        j++;
    }
}


