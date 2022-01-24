#include <iostream>

using namespace std;

template<class T>
SSwap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x,y;
    char z,a;

    cout<<"Enter value 1 and value 2"<<endl;

    cin>>x>>y;

    cout<<"Before Swap X = "<<x<<", Y =  "<<y<<endl;
    SSwap(x,y);
    cout<<"After Swap X = "<<x<<", Y =  "<<y<<endl;

    cout<<"Enter value 1 and value 2"<<endl;
    cin>>z>>a;

    cout<<"Before Swap X = "<<z<<", Y =  "<<a<<endl;
    SSwap(z,a);
    cout<<"After Swap X = "<<z<<", Y =  "<<a<<endl;

    return 0;
}
