/* 
     Author : Adrian C. Manatad
       Date : February 28, 2022
     Reason : for commission
     
Task 2: Create a program in C++ that will accept a number. Calculate and display the series (1+2+3+4+...+n)
Sample Output:
Input the value for nth term: 6
1+2+3+4+5+6=21

*/
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
