/* 
     Author : Adrian C. Manatad
       Date : February 28, 2022
     Reason : for commission
     
     Task 3: Create a program in C++ that will accept a number. Calculate and display the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... 
+ (n*n).
Sample Output:
Input the value for nth term: 3
1*1 = 1 
2*2 = 4 
3*3 = 9 
The sum of the above series is: 14

*/
        
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
