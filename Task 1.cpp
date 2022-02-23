#include <iostream>

using namespace std;

int main (){

int num, key = 1;


    cout <<"Enter a number: ";
    cin >> num;

    cout << endl <<"The factors are: ";
    do {

            if (num % key == 0) {
                cout << " "<< key;
            }
        key++;

    } while (key<=num);

    cout << "\n\n";
    return 0;
}
