#include <iostream>

using namespace std;

int main (){

int numStart, numEnd, i, val, counter, counterVal=0;

    cout <<"Input number for starting range: ";
    cin >> numStart;

    cout <<"Input number for ending range: ";
    cin >> numEnd;

    cout << endl <<"The prime numbers between " << numStart << " and " << numEnd << " are:";

    val = numStart;

    do {
        counter = 0;
        for (i=2; i <= val/2; i++) {
            if (val % i == 0) {
                counter++;
                break;
            }
        }
       if (counter == 0) {
            cout << " "<< val;
            counterVal++;
        }
        val++;
    } while (val <= numEnd);

    cout << endl << "The total number of prime numbers between " << numStart << " and " << numEnd << " is: " << counterVal << endl << endl;

return 0;
}
