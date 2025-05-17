#include <iostream>
using namespace std;
int main()
{
    int count, sum;

    // Asking user to input the no:of terms needed to be added
    cout << "You can find sum of square of natural numbers upto n, using this program" << endl;
    cout << "To calculate, enter number of terms needed: ";
    cin >> count;

    // Using formula to calculate sum and outputting it.
    sum = ( count * (count+1) * ( (2*count)+1 ) ) / 6;
    cout << "\nThe sum is: " << sum ;

    return 0;
}