#include <iostream>

using namespace std;

int main (){

int n, total=0, i=1;


    cout <<"Input the value for nth term: ";
    cin >> n;

    do {

        if (i < n ) {
            cout  << i <<"+";
        }
        if (i == n ) {
            cout  << i;
        }

        total += i;
        i++;

    } while (i<=n);

    cout <<"= " << total << endl;
    return 0;
}
