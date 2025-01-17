
#include <iostream>
using namespace std;
#define SIZE 3
void printMenu (const string arg[SIZE]);  
void printPlay (char operation, char key, int num1, int num2, int rez); 
void printSettings (char operation, char key); 
int printKey (int index);

    int main() {   
    const string play_ [] = {"_Play_", "Settings", "Exit"};
    const string settings_ [] = {"Play", "_Settings_", "Exit"};
    const string exit_ [] = {"Play", "Settings", "_Exit_"};
    int index = 1;
    char key;
    char operation = '+';           
    while (true) {     
        if (index ==1){
            printMenu (play_) ;
                                   
        } else if (index ==2){
           printMenu (settings_);
           //if (key =='e'){
           //     printSettings;           
            } else  if (index ==3){     
                printMenu (exit_);           
                }            
        
    index = printKey (index);  
    } 
    return 0;
}


void printMenu(const string arg[SIZE]){
    for (int i = 0; i < SIZE; i++){                
                cout <<  arg[i] << endl;
           } 
 //   cout << "Enter key: ";
 //   cin >> key;   
}

int printKey (int index){
    char key;
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
    } else if (key == 'e' && index ==1){
        printPlay (char operation, char key, int num1, int num2, int rez);
    } else if (key == 'e' && index == 2){
        //cout << "123"<< endl;
        printSettings (char operation, char key) ;     
        
    }
    return index;
} 

void printPlay(char operation, char key, int num1, int num2, int rez){
    //int index;
    //char key;  
    //cout << "Enter key: ";    
    
    //if (key =='e')
    //&& index ==1)
        while (key != 'q'){
            //int num1, num2, rez;
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
                 if (operation =='/'&& num2 !=0){
                    cout << "Error"<< endl;
                    break;
                }             
            cout << "Rezult = " << rez<< endl;
            cout << "Enter key: ";
            cin >> key;
            }
    }    
}

void printSettings(char operation, char key){
    //int index;
    //char key;
    //cout << "Enter key: ";
    //cin >> key;
    //char operation;
        //if (index ==2 )
        //&& key == 'e')               
        while (key != 'q'){
            cout << "Enter operation: ";
            cin >> operation;
            cout << "Enter key: ";
            cin >> key;     
            }        
    } 
//}
