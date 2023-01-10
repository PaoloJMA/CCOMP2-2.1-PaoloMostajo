#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount;

    cout << "Initial account name is: " << myAccount.GetName();

    cout << "\nPlease enter the account name: "<< endl;

    string theName;

    getline(cin, theName);

    myAccount.SetName(theName);

    cout << "Name in objet myAccount is : " << myAccount.GetName() << endl;

    return 0;
}