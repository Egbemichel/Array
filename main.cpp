/*C++ Program that searches for the largest and smallest numbers in an array of known length and switches their indexes*/

#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int numbers[6];
    cout << "Enter numbers in array:\n";
    while(n<6){
        cin >> numbers[n];
        ++n;
    }
    n=1;
    int maxn=numbers[0],minn=numbers[0];
    int a=0,b=0;
    while(n<6){
    if(maxn<numbers[n]){
        maxn=numbers[n];
        a=n;

    }else{}
    if(minn>numbers[n]){
        minn=numbers[n];
        b=n;

    }else{}
    ++n;
    }

    int temp=numbers[a];
    numbers[a]=numbers[b];
    numbers[b]=temp;
    int i=0;
    while(i<6){
        cout <<"Number at index "<<i<<" "<<"is "<<numbers[i]<<endl;
        ++i;
    }
    return 0;
}
