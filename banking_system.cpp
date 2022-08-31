#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

using namespace std;


class Account {
    private:
        int account_no;
        char name[50];
        int deposit;
        char type;
    public:
        void create_account(); // to get data from user 
        void show_account() const; // func to show data on screen
        void modify(); // add new data to account
        void deposit_amount(); //accept amount and add to balance 
        void withdraw_amount(); // accept amount to subtract from balance
        void report_amount(); // return amount
        int return_acc_number(); // return account number
        int return_dep_number(); // return deposit number
        char return_acc_type(); // return account type
};

void Account::create_account(){
    cout << "Enter an Account Number:" << endl;
    cin >> account_no;

    cout << "Enter Name: " << endl;
    cin.ignore();
    cin.getline(name, 50);

    cout << "Enter the Account Type : " << endl;
    cin >> type;
    type = toupper(type);

    cout << "Enter the initial amount : " << endl;
    cin >> deposit;
}

void Account::show_account() const{
    cout << "Account No. : " << account_no << endl;
    cout << "Account Holder Name : " << name << endl;
    cout << "Type of Account : " << type << endl;
    cout << "Account Balance : " << deposit << endl;
}

int main (){

}