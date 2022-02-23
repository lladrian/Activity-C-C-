#include <iostream>

using namespace std;

int main (){

int n, total=0, i=1, frameTotal=0;


    cout <<"Input the value for nth term: ";
    cin >> n;

    do {
        frameTotal += i * i;
        if (i <= n ) {
            cout  << i <<"*" << i << "=" << frameTotal <<endl;
        }

        total += frameTotal;  // you can also try this total += i*i;
        i++;
        frameTotal = 0;

    } while (i<=n);

    cout <<"\nThe sum of the above series is: " << total << endl;
    return 0;
}
