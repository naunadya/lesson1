
#include <iostream>
using namespace std;
#define SIZE 3
void printMenu (const string arg[SIZE]);  
void printPlay (char operation, int index, char key); 
char printSettings (int index, char key, char operation); 
int printKey (int index, char operation_play, char operation, char key);
   // char operation_play;

    int main() {   
    const string play_ [] = {"_Play_", "Settings", "Exit"};
    const string settings_ [] = {"Play", "_Settings_", "Exit"};
    const string exit_ [] = {"Play", "Settings", "_Exit_"};
    int index = 1;
    char key;  
    char  operation_play;  
    char operation;           
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
        
    index = printKey (index,  operation_play,  operation,  key);  
    } 
    // if (key == 'e' && index ==1){
    //    printPlay (operation, index);
    //} else 
   //if (key == 'e' && index == 2){
     //   //cout << "123"<< endl;
       // printSettings ( index) ;  
    //}
    return 0;
}


void printMenu(const string arg[SIZE]){
    for (int i = 0; i < SIZE; i++){                
                cout <<  arg[i] << endl;
           } 
 //   cout << "Enter key: ";
 //   cin >> key;   
}

int printKey (int index, char operation_play, char operation, char key){
   // char key;
    cout << operation_play;
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
        printPlay (operation_play, index, key);
        operation_play = operation;
    }else if (key == 'e' && index == 2){
        //cout << "123"<< endl;
        printSettings ( index, key, operation_play) ;  
    }
    return index;
} 

void printPlay( char operation_play, int index, char key){
    //char key;  
    //cout << "Enter key: ";    
    
   // if (key =='e' && index ==1)
        while (key != 'q'){
             cout << operation_play;
            int num1, num2, rez;
            cout << "Enter number 1: ";
            cin >> num1;
            cout << "Enter number 2: ";
            cin >> num2;
          // cout << operation;
                if ( operation_play =='+'){
                    rez = num1 + num2;
                }else if (operation_play =='-'){
                    rez = num1 - num2;
                } else if (operation_play =='*'){
                    rez = num1 * num2;
                }else if (operation_play =='/'&& num2 !=0){
                    rez = num1 / num2;
                }else {
                 if (operation_play =='/'&& num2 !=0){
                    cout << "Error"<< endl;
                    break;
                } 
                }           
            cout << "Rezult = " << rez<< endl;
            cout << "Enter key: ";
            cin >> key;
            
    }    
}

char printSettings(int index, char key, char operation_play){
    char operation;
    //cout << "Enter key: ";
    //cin >> key;
    //char operation;
      //  if (index ==2&& key == 'e')               
        while (key != 'q'){
            cout << "Enter operation: ";
            cin >> operation;
            cout << "Enter key: ";
            cin >> key;     
            } 
            cout << operation;
            return operation;       
    } 

