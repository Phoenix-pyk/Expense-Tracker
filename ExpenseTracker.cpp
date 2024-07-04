#include <iostream>
#include <vector>
using namespace std;

int main() {
    // created a struct of expense which includes date description and amount.
    struct expense {
        int date = 0000;
        string category;
        string description;
        double amount = 0;
    };
    // a vector of expenses to store user data.
    vector<expense> expenses;
    char yesno;
    string command;
    int month = 00;
    string cat;
// do while loop to ask user to enter data.
    do {
        expense nnew;
        cout << "Enter date of expense in the format MMDD: ";
        cin >> nnew.date;
        cout << endl;
        cout << "Enter expense category, is it personal, groceries or other? ";
        cin >> nnew.category;
        cout << "Enter short description without space or period for the expense: ";
        cin >> nnew.description;
        cout << "Enter expense amount: ";
        cin >> nnew.amount;
        expenses.push_back(nnew);
        cout << "Do you want to put more expenses? Enter Y or N: ";
        cin >> yesno;
    } while (yesno == 'Y');

    //ask user if they want to see expenses.
    cout << "Would you like to see your expenses? ";
    cin >> yesno;

    //if yes, ask the user if they want to see all expenses, or by category
    if (yesno=='Y') {
        cout << "Enter all, date or category: ";
        cin >> command;
        //Show expenses by date
        if (command == "date") {
            cout << "Enter which month expenses you want to see in number format, example 01 for January.";
            cin >> month;
            cout << endl;
            for (auto &i: expenses) {
                if ((i.date / 100) == month)
                    cout << i.date << " " << i.category << " " << i.description << " " << i.amount << endl;
            }
            //Show expenses by category
        } else if (command == "category") {
            cout << "Enter which category you want to see, personal, groceries or other: ";
            cin >> cat;
            for (auto &i: expenses) {
                if (i.category == cat)
                    cout << i.date << " " << i.category << " " << i.description << " " << i.amount << endl;
            }
        }
        //Show all expenses
        for (auto &i: expenses)
            cout << i.date << " " << i.description << " " << i.amount << endl;
    }
    //Ask user if they want a monthly summary or category summary
    cout << "Would you like to see total expenses per month? Enter Y or N" << endl;
    cin >> yesno;
    if (yesno=='Y'){
        int month = 00;
        string type;
        cout <<"Which month would you like to see? Enter in 00 format: " ;
        cin >> month;
        cout << "What type of expenses? Enter All, "
    }
}
