
#include <iostream>
using namespace std;
#define SIZE 3
void printMenu (const string arg [size])
    

    int main() {
   
    const string play_ [] = {"_Play_", "Settings", "Exit"};
    const string settings_ [] = {"Play", "_Settings_", "Exit"};
    const string exit_ [] = {"Play", "Settings", "_Exit_"};
    int current = 0;
    char key;

    while (true){
        if (current ==0){
            printMenu (play_);
        } else if (current ==1){
            printMenu (settings_);
        } else {          
            printMenu (exit_);
        } 
    }   
    return 0;
}

void printMenu (const string arg [size]){
     for (int i = 0; i < size; i++){                
                cout <<  arg [i] << endl;
            }     
}