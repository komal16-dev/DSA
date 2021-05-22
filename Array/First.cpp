#include <iostream>
using namespace std;

int main(){
    int a[]={},n;
    cout<<"Enter no of elements:";
    cin>>n;

    cout << "Enter numbers: " << endl;
    for (int i = 0; i <= n; ++i) {
        cin >> a[i];
    }

    cout << "The elements are: "<<endl;
    for (int j = 1; j <= n; j++) {
    cout <<j <<":" << a[j] <<endl;
    }

    return 0;
}
