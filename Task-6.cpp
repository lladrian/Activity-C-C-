/* 
     Author : Adrian C. Manatad
       Date : February 28, 2022
     Reason : for commission
     
Task 6: Create a program in C++ that will accept a start and ending range and find prime number within a range. 
Sample Output:
Input number for starting range: 1
Input number for ending range: 100
The prime numbers between 1 and 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 
83 89 97
The total number of prime numbers between 1 to 100 is: 25
*/

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
