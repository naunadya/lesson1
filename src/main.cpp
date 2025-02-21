#include <iostream>
using namespace std;

template <typename T, typename T2>
T multi (T number1, T2 number2);

template <typename T, typename T2>
T sum ( T num1, T2 num2);


//#define SQR(x) (x*x)
int sqr ( int num);
double sqr (double num);
// int sum (char num1, char num2);
//  sum (double num1, double num2);

    int main() {
       //cout <<  sqr (9)<< endl;   
       // cout <<  sqr (9.5)<< endl;   
        cout <<  sum (sqr (20), multi (6.76, 5))<< endl;
        //cout <<  sum ('2', '6')<< endl;
        // cout <<  sum (5.6 , 12.45)<< endl;
    return 0;
}    

int sqr ( int num){
    return num*num;
}

double sqr ( double num){
    return num*num;
}
template <typename T, typename T2>
T sum ( T num1, T2 num2){
    return num1+num2;
}

template <typename T, typename T2>
T multi (T number1, T2 number2){
    return number1*number2;
}


// double sum (double num1, double num2){
//  return num1+num2;
// }

// int sum (int num1, int num2){
//  return num1+num2;
// }

// int sum (char num1, char num2){
//  return num1+num2;
// }

