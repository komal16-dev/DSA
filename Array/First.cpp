#include <iostream>
using namespace std;

int main(){
    int a[5];

    cout << "Enter 5 numbers: " << endl;

    //  store input from user to array
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }

    cout << "The a are: ";

    //  print array elements
    for (int n = 0; n < 5; ++n) {
        cout << a[n] << "  ";
    }

    return 0;
}
