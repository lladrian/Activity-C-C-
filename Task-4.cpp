#include <iostream>

using namespace std;

int main (){

int multiNum, total=0, i=1, frameTotal=0;


    cout <<"Input the number upto: ";
    cin >> multiNum;

    cout <<"Multiplication table of: " << multiNum << endl;

    do {

        frameTotal += multiNum * i;
        if (i <= 10) {
            cout  << multiNum <<"*" << i << "=" << frameTotal <<endl;
        }

        i++;
        frameTotal = 0;

    } while (i<=10);

    return 0;
}
