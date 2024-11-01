#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int k, i = 1, sum_k = 0, number;
// Asking the user to enter the amount of integers to sum
    cout << " Enter the amount of integers to sum = "; cin >> k;
// Stop the program if the amount equals to zero
    if (k == 0) {
        cout << "No integers for addition" << endl;
    }
    else {
        do {
            cout << "Enter integer nr. " << i << ": " << endl;
            cin >> number;
// Checking if the input is valid. Error if it is not
            if (cin.fail()) {
                cout << "Error. Enter a valid integer." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            else
// Calculating the sum if the amount is non-zero
            sum_k += number;
            i++;
        } while (i <= k);
        cout << "The total sum of " << k << " integers is: " << sum_k << endl;
        return 0;
    }
}
