
#include <iostream>
using namespace std;
int main(){
    cout << "=========================\n ";
    cout << "           ATM            \n ";
    cout << "=========================\n ";
    cout << "|  7  |  8  |  9  |  CANCEL  |\n ";
    cout << "|  4  |  5  |  6  |  CLEAR   |\n ";
    cout << "|  1  |  2  |  3  |          |\n ";
    cout << "|  0  |  .  |  00 |  ENTER   |\n ";
    cout << "=========================\n\n";


    int choice;
    double balance = 1000;
    double amount;

    int pin = 1234;
    int enteredPin;
    int attempts = 3;
     
    // ===== Login =====
    while (attempts > 0){
        cout << "Enter PIN:";
        cin  >> enteredPin;
        if (enteredPin == pin){
            cout << "\nLogin successful \n";
            break;
         }else{
            attempts--;
            cout << "Wrong PIN Attempts Left: " << attempts << endl;
         }

    }
    if (attempts == 0){
        cout << "\nCard blocked! Try again Later.\n";
        return 0;
    }
// ===== ATM Menu =====
do {
    cout << "\n===== ATM Menu =====\n";
    cout << "1. Check Balance \n";
    cout << "2. Deposit \n";
    cout << "3. Withdraw \n";
    cout << "4. Change PIN \n";
    cout << "Exit \n";
    cout << "Choose an option: ";
    cin  >> choice;
    
    switch (choice){
       case 1:
              cout << "Your Balance is: " << balance << " EGP\n ";
              break;
              
              case 2:
              cout << "Enter deposit amount: ";
              cin  >> amount;
              if (amount > 0){
                balance += amount;
                cout << "Deposit successful \n";
              }else {
                cout << "Invalid amount! \n";
              }
break;

case 3:
cout << "Enter withdraw amount: ";
cin  >> amount;
if (amount > 0 && amount <= balance){
    balance -= amount;
    cout << "winthdraw successful \n";
}else{
    cout << "Insufficient balance or invalid amount!\n";

}
break;
case 4:{
    int oldPin, newPin, confirmPin;
    cout << "Enter old PIN: ";
    cin  >> oldPin;

    if (oldPin == pin){
        cout << "Enter new PIN: ";
        cin  >> newPin;
        cout << "Confirm new PIN: ";
        cin  >> confirmPin;

        if (newPin == confirmPin){
            pin = newPin;
            cout << "PIN changed successfully \n";
        }else {
            cout << "PIN confirmtion does not match \n";

        }
    }else{
        cout << "Wrong old PIN \n";

    }
    break;

}
case 5:
cout << "Thank you for using ATM \n";
break;

default: 
cout << "Invalid choice!\n";

    }    
}while (choice != 5);
return 0;
}