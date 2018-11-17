#include <iostream>
#include "BankAccount.h"
using namespace std;

int main()
{
int number;
cout<<"======> Welcome to FCI Banking Application <========="<<endl;
cout<<"1. Create a New Account"<<endl;
cout<<"2. List Clients and Accounts"<<endl;
cout<<"3. Withdraw Money"<<endl;
cout<<"4. Deposit Money"<<endl;
cout<<"5 .Exit "<<endl;

while(cin>>number){
bankApplication app;
if(number==1){ app.set_account();}
if(number==2){  app.listclients();}
if(number==3){ app.withdraw();}
if(number==4){ app.deposit();}
if(number==5){break;}

}
}
