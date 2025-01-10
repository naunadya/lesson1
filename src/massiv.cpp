
#include <iostream>
using namespace std;
#define SIZE 3
void printMenu (const string arg [SIZE]);  
void printSettings (const string arg [SIZE]); 
void printExit (const string arg [SIZE]); 
    int main() {   
    const string play_ [] = {"_Play_", "Settings", "Exit"};
    const string settings_ [] = {"Play", "_Settings_", "Exit"};
    const string exit_ [] = {"Play", "Settings", "_Exit_"};
    int index = 1;    
    char key;
    char operation = '+';    
    do {     
        if (index ==1){
            printMenu (play_) ;
        } else if (index ==2){
           printSettings (settings_);
        } else  if (index ==3){     
            printExit (exit_);           
        }  
         
    cout << "Enter key: ";
    cin >> key; 
       
    if (key =='w'){
        if (index ==1){
            index =3;
        }
        else {index -=1;
        }        
    } else if (key =='s'){
        if (index == 3){
            index =1;
        }
        else {index +=1;     
        }
    } 
    }while (true);    
    return 0;
}

void printMenu (const string arg [SIZE]){
    for (int i = 0; i < SIZE; i++){                
                cout <<  arg [i] << endl;
           } 
    cout << "Enter key: ";
    cin >> key;
    if (key =='e'&& index ==1){   

        while (key != 'q'){
            int num1, num2, rez;
            cout << "Enter number 1: ";
            cin >> num1;
            cout << "Enter number 2: ";
            cin >> num2;
                if ( operation =='+'){
                rez = num1 + num2;
                }else if (operation =='-'){
                    rez = num1 - num2;
                } else if (operation =='*'){
                    rez = num1 * num2;
                }else if (operation =='/'&& num2 !=0){
                    rez = num1 / num2;
                }else {
                    cout << "Error"<< endl;
                    break;
                }        
            cout << "Rezult = " << rez<< endl;
            cout << "Enter key: ";
            cin >> key;
            }
    }    
}

void printSettings (const string arg [SIZE]){
    for (int i = 0; i < SIZE; i++){                
        cout <<  arg [i] << endl;
    } 
    cout << "Enter key: ";
    cin >> key;
        if (index ==2 && key == 'e'){        
        while (key != 'q'){
            cout << "Enter operation: ";
            cin >> operation;
            cout << "Enter key: ";
            cin >> key;     
            }        
    } 
}

void printExit (const string arg [SIZE]){
    for (int i = 0; i < SIZE; i++){                
        cout <<  arg [i] << endl;
    } 
}