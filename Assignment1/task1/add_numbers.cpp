#include <iostream>
#include <string>

using namespace std;

int add_numbers(int a, int b) {
    return a + b;
}

int main() {
    int a ;
    int b ;
    cin >> a >> b;
    int sum = add_numbers(a, b);
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;
    return 0;
}
