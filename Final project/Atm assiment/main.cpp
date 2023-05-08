#include <iostream>

using namespace std;
class Accounts{
public:
    int accountNumber;
    string name;
    int balance;

    void setAccountNumber (int n){
      accountNumber=n;
    }
    void setBalance (int b){
      balance=b ;
    }
    void setName(string na){
      name=na;
    }

    int getAccountNumber(){
      return accountNumber;
    }

    float getBalance(){
      return balance;
   }

    string getName(){
      return name;
    }

   void withdraw (float num){
     balance-=num;
   }
   void deposit (float num){
       balance+=num;
   }
};


int main()
{
    Accounts ac1;
    ac1.setAccountNumber(2000);
    ac1.setName("Noha Elgammal");
    ac1.setBalance(80000);

     int accountNumber;

     while (accountNumber !=2000){
    cout << "Enter account number" << endl;
    cin>>accountNumber;
         }
    cout << "Hello Noha Elgammal" << endl;


     int choice;
     int num;
     while (true){
    cout << "choice The operation :" << endl;
    cout<<" for Withdraw enter  1:" <<endl;
     cout<<" for Deposit enter  2:" <<endl;
     cout<<" to check balance enter 3:" <<endl;
    cin>>choice;


switch(choice){
  case 1:{
    cout<<"Enter the amount of money : ";
    cin>>num;
    if(ac1.getBalance()>num){
        ac1.withdraw(num);
    }
     else{
        cout<<" Invalid operation " ;
     }
    }
   break;
   case 2:{
   cout<<"Enter the amount of money : ";
    cin>>num;
    ac1.deposit(num);

   }
   break;

   case 3:
   cout<<"Your Balance Is: " <<ac1.getBalance()<<endl;
   break;
   default:
    cout<<"Invalid Input:" <<endl;
    break;
    }
   }
    return 0;
}
