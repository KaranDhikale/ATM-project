#include<iostream>
using namespace std;

class ATM
using namespace std;

class BankAccount {
protected:
    int balance;

public:
    
    void Balance(int b) {
        balance = b;
    }

    void checkBalance() {
        cout << "Your current balance is: Rs. " << balance << endl;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs. " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: Rs. " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds!" << endl;
        }
    }
};


class ATM : public BankAccount {
private:
    int pin;

public:
    void UserDetails(int b, int p) {
        Balance(b);  
        pin = p;
    }

    bool authenticate(int enteredPin) {
        return (enteredPin == pin);
    }
};

int main() {
    ATM atm1;
    atm1.UserDetails(1000, 1234);

    int enteredPin, choice, amount;

    cout << "Welcome to the ATM!" << endl;
    cout << "Please enter your PIN: ";
    cin >> enteredPin;

    if (!atm1.authenticate(enteredPin)) {
        cout << "Authentication failed! Exiting..." << endl;
        return 0;
    }

    do {
        cout << "------------------------------------" << endl;
        cout << "ATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "------------------------------------" << endl;

        switch (choice) {
            case 1:
                atm1.checkBalance();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                atm1.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                atm1.withdraw(amount);
                break;
            case 4:
                cout << "Exiting... Thank you for using the ATM!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

{

  private :

  int balance ;
  int pin ;

  public :

  void userATM ( int b , int p ) 
  {
    balance = b ;
    pin = p ;
  }

  bool Authenticate ( int enteredPin ) 
  {
    if ( enteredPin == pin ) 
    {
      return true ;
    } 
    else 
    {
      return false ;
    }
  }

  void checkbalance ( ) 
  {
    cout << "Your current balance is : Rs.  " << balance << endl ;
  }

  void deposit ( int amount ) 
  {
    if ( amount > 0 ) 
    {
      balance += amount ;
      cout << "Deposited : Rs.   " << amount << endl ;
    } 
    else 
    {
      cout << "Invalid deposit amount!" << endl ;
    }
  }

  void withdraw ( int amount ) 
  {
    if ( amount > 0 && amount <= balance ) 
    {
      balance -= amount ;
      cout << "Withdrew : Rs.  " << amount << endl ;
    } 
    else 
    {
      cout << "Invalid withdrawal amount or insufficient funds!" << endl ;
    }
  }

} ;

int main ( )
{
  ATM ATM1 ;
  ATM1.userATM ( 1000 , 1234 ) ; 

  int enteredPin ;
  int choice, amount ;

  cout << "Welcome to the ATM!" << endl ;
  cout << "Please enter your PIN : " ;
  cin >> enteredPin ;

  if ( !ATM1.Authenticate ( enteredPin ) )
  {
    cout << "Authentication failed! Exiting..." << endl ;
    return 0 ;
  }

  do 
  { 
    cout << "------------------------------------" << endl ;
    cout << "ATM Menu :" << endl ;
    cout << "1. Check Balance" << endl ;
    cout << "2. Deposit" << endl ;
    cout << "3. Withdraw" << endl ;
    cout << "4. Exit" << endl ;
    cout << "Enter your choice : " ;
    cin >> choice ;

    switch ( choice ) 
    {

      case 1 :
        ATM1.checkbalance ( ) ;
        break ;

      case 2 :
        cout << "Enter amount to deposit : " ;
        cin >> amount ;
        ATM1.deposit ( amount ) ;
        break ;

      case 3 :
        cout << "Enter amount to withdraw : " ;
        cin >> amount ;
        ATM1.withdraw ( amount ) ;
        break ;

      case 4 :
        cout << "Exiting... Thank you for using the ATM!" << endl ; 
        break ;

      default :
        cout << "Invalid choice! Please try again." << endl ;

    }
  } while ( choice != 4 ) ;

}
