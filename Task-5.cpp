/* 
     Author : Adrian C. Manatad
       Date : February 28, 2022
     Reason : for commission
     
 Task 5: Create a program in C++ that will accept a number and display the cube of the accepted number. 
Sample Output:
Input the number of terms : 2
Number is : 2 and the cube of 2 is: 8 

*/

#include <iostream>

using namespace std;

int main (){

int num, cube=1,i=1;


    cout <<"Input the number of terms: ";
    cin >> num;

    do {
        cube *= num;
        i++;
    } while (i<=3);

    cout <<"\nNumber is "<< num << " and the cube of " << num << " is " << cube << endl;
return 0;
}
