#include <iostream>

using namespace std;


class Sum
{
    int x;
    int y;


public:

    Sum()
    {
        x=y=0;
    }

    Sum(int _x, int _y)
    {
        x = _x;
        y = _y;
    }


    void set_x(int _x)
    {x = _x;}
    void set_y(int _y)
    {y = _y;}


    int get_x(){return x;}
    int get_y(){return y;}

  virtual int summtion()
    {
        return x+y;
    }


    ~Sum()
    {
        cout<<"Constructor from Sum"<<endl;
    }

};

class child_sum : public Sum
{
    int z;

public:
    child_sum():Sum(){}
    child_sum(int _z, int x, int y):Sum(x, y){

        z = _z;
    }

    int summtion()
    {
        return get_x() + get_y() + z;
    }

};


int main()
{


    child_sum child(5,2,9);

    Sum* sum_ptr = &child;

    //child_sum s(5,2,8);


    //sum_ptr->get_x();


    //sum_ptr->summtion();



    cout<<sum_ptr->summtion()<<endl;

    cout<<child.summtion()<<endl;


    return 0;
}
