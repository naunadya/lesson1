#include <iostream>
using namespace std;

    int main() {
    string play_ = "_Play_";
    string play = "Play";

    string settings_ = "_Settings_";
    string settings = "Settings";

    string exit_ = "_Exit_";
    string exit = "Exit";

    int  index = 1;
    
    while (true){
        if (index ==1){
        cout << play_<< endl<< settings<< endl<<  exit<< endl;
        }
        else if (index ==2){
        cout << play<< endl<< settings_<< endl<<  exit<< endl;
        }
        else if (index ==3){
        cout << play<< endl<< settings<< endl<<  exit_<< endl;
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
    } else if (index ==1 && key == 'e'){
            while (key != 'q'){
            char operation ='+';
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

    } else if (index ==2 && key == 'e'){
        

    }else {
        break;
    }  
    
    }
    }
    return 0;
}