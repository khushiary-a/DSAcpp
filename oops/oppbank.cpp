#include<iostream>
using namespace std;
class Bank{
   string name;
   int balance;
   int account;
   
   public:
   Bank(string name ,int account , int balance){
    this->name = name;
    this->account = account;
    if(balance>=200){
    this->balance = balance;
    }else{
        cout<<"put atleast 200";
    }
   }

   void checkBalance(){
    if(balance>0){
      cout<<"Your current balance is: "<<balance<<endl;
    }else{
        cout<<"Your balance is zero";
    }
    
   }
   void deposite(int d){
    balance+=d;
    cout<<"You have deposited: "<<d<<endl;
    cout<<"Your current balance is: "<<balance<<endl;
   }
   void withdraw(int w){
     balance = balance - w;
     cout<<"You have withdraw: "<<w<<endl;
     cout<<"Your total balance is: "<<balance<<endl;
   }

};
int main(){

   Bank * obj; 
   while (true)
   {
    /* code */
   
   
    cout<<"wellcome to MYBANK"<<endl;
    cout<<"1.create u r acc  2. check balence 3. deposite 4 . withdraw "<<endl;
    cout<<"Enter u r option:"<<endl;
    int a;
    cin>>a;
    switch(a) {
            case 1: {
                string name;
                cout << "Enter your name: ";
                cin >> name;
                int account;
                cout << "Enter your account number: ";
                cin >> account;
                int balance;
                cout << "Enter balance: ";
                cin >> balance;
                obj = new Bank(name, account, balance);
                break;
            }
            case 2:
                if (obj) {
                    obj->checkBalance();
                } else {
                    cout << "No account found! Please create an account first." << endl;
                }
                break;
            case 3: {
                if (obj) {
                    int d;
                    cout << "Enter amount to deposit: ";
                    cin >> d;
                    obj->deposite(d);
                } else {
                    cout << "No account found! Please create an account first." << endl;
                }
                break;
            }
            case 4: {
                if (obj) {
                    int w;
                    cout << "Enter amount to withdraw: ";
                    cin >> w;
                    obj->withdraw(w);
                } else {
                    cout << "No account found! Please create an account first." << endl;
                }
                break;
            }
            
            default:
                cout << "Invalid option. Please try again." << endl;
                
        }
   }
    
    
    
    return 0;
}