#include<iostream>
#include<string>
using namespace std;
class Account
{
    long account_number,balance; string Account_Holder_name, Account_type;
    public:
    void getAccountInformation()
    {
        cout<<"enter the account number"<<endl;
        cin>>account_number;
        cout<<"enter the balance"<<endl;
        cin>>balance;
        cout<<" enter the account name holder"<<endl;
        getline(cin,Account_Holder_name);
        cout<<"enter the account type(savings/current)"<<endl;
        getline(cin,Account_type);
    }
    void display()
   {
        cout<<" the account number  "<<account_number<<endl;
        cout<<" the balance  "<<balance<<endl;
        cout<<" the account name holder  "<<Account_Holder_name<<endl;
        cout<<"the account type  "<< Account_type<<endl;

    }
    void withdraw()
    {
        int with;
        cout<<"entr the amount to be withdrawn "<<endl;
        cin>>with;
        balance=balance-with;
        cout<<"the remaining balance after withdrawal  "<<balance<<endl;
    }
    void deposit()
    {
        int depo;
        cout<<"entr the amount to be deposited "<<endl;
        cin>>depo;
        balance=balance+depo;
        cout<<"the remaining balance after deposite  "<<balance<<endl;
    }

};
int main()
{
    Account obj;
    obj.getAccountInformation();
    obj.display();
    obj.withdraw();
    obj.deposit();
}