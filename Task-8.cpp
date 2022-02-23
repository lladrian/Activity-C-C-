#include <iostream>

using namespace std;

int main (){

int numStart = 1, numEnd, i, val, counter, lastPrime=1;

    cout <<"Input a number to find the last prime number occurs before the number: ";
    cin >> numEnd;

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
             lastPrime = val;
        }
        val++;
    } while (val <=numEnd);

    cout << endl << lastPrime << " is the last prime number before "<< numEnd <<endl <<endl ;
return 0;
}
