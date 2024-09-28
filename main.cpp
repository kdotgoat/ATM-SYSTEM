#include <iostream>

using namespace std;

void showMenu(){
    cout<<"********MENU********"<<endl;
    cout<<"1.Check balance"<<endl;
    cout<<"2.Deposit amount"<<endl;
    cout<<"3.Withdraw amount"<<endl;
    cout<<"4.EXIT"<<endl;
}
int main()
{
 int option;
 double balance = 0.00;

 do{
 showMenu();
 cout<<"Option: "<< endl;
 cin>>option;
 system("cls");
 switch(option){
 case 1:cout<<"Your account balance is "<<balance<<" KSH"<<endl;break;
 case 2:
     double depositAmount;
     cout<<"Enter deposit amount: "<<endl;
     cin>>depositAmount;
     balance += depositAmount;
     cout<<"Your current balance is: "<<balance<<endl;
     break;
 case 3:
     double withdrawalAmount;
     cout<<"Enter the withdrawal amount: "<<endl;
     cin>>withdrawalAmount;
     if(withdrawalAmount<=balance){
        balance -= withdrawalAmount;}
     else{
     cout<<"Insufficient funds!!"<<endl; break; }
     }

 }while(option!=4);
 system("pause>0");
    return 0;
}
