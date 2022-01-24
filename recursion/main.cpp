#include <iostream>

using namespace std;

int pow(int num, int power)
{
    if(power ==1)
        return num;
    else
        return num * pow(num, power -1);
}

int main()
{
    int num, power;

    cout<<"Enter The number"<<endl;
    cin>>num;
    cout<<"Enter the number of Power"<<endl;
    cin>>power;

    cout<<pow(num, power)<<endl;

    return 0;
}
