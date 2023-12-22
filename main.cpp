/* C++ program that replaces every element in an array by the element multiplied by its index*/


#include <iostream>

using namespace std;

int main()
{   int n;
    int numbers[5];
    cout << "Enter numbers in array: "<< endl;
    while(n<5){
        cin >> numbers[n];
        ++n;
    }
    int i;
    for(i=0;i<n;++i){
        numbers[i] = numbers[i]*i;
        }
        cout <<"new number at index 0 is " <<numbers[0]<<"\n";
        cout <<"new number at index 1 is "<<numbers[1]<<"\n";
        cout <<"new number at index 2 is " <<numbers[2]<<"\n";
        cout <<"new number at index 3 is " <<numbers[3]<<"\n";
        cout <<"new number at index 4 is " <<numbers[4];
    return 0;
}
