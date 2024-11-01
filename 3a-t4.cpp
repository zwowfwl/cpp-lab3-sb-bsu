#include<iostream>
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
// Calculating the sum if the amount is non-zero
	else {
		do {
			cout << "Enter integer nr. " << i << ": ";
			cin >> number;
			sum_k += number; i++;
		} while (i <= k);
		cout << " The total sum of " << k << " integers is: " << sum_k;
	}
	return 0;
}
