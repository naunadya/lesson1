#include <iostream>
using namespace std;


char * copyStr (char *str, int size){
    char newStr[size] = {};
    for (int i = 0; i< size; i++){
        newStr [i] = str[i];
    }
    return newStr;
}


int main (){
    int size = 5;

    char wordChar [size] = {'H', 'e', 'l', 'l', 'o'};
    cout << *copyStr (wordChar, size);
    return 0;
}