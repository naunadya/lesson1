
#include <iostream>
using namespace std;
#define SIZE 3
//void printMenu (const string arg [size])
    

    int main() {
   
    const string play_ [] = {"_Play_", "Settings", "Exit"};
    const string settings_ [] = {"Play", "_Settings_", "Exit"};
    const string exit_ [] = {"Play", "Settings", "_Exit_"};
    int index = 1;    
    char key;    

    do {     
        if (index ==1){
            for (int i = 0; i < SIZE; i++){
                cout << play_[i]  << endl;
            }
            
        } else if (index ==2){
            for (int i = 0; i < SIZE; i++){
                cout << settings_[i]  << endl;
            }
            
        } else  if (index ==3){          
            for (int i = 0; i < SIZE; i++){
                cout << exit_[i]  << endl;
            } 
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
    } while (true);
    return 0;
}

//void printMenu (const string arg [size]){
//     for (int i = 0; i < size; i++){                
///                cout <<  arg [i] << endl;
 //           }     
//}