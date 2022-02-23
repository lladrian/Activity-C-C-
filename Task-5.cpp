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
