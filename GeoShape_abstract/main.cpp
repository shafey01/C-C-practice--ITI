#include <iostream>

using namespace std;

class Shape{

private:
    float dim1;
    float dim2;
    float area;
public:
    Shape()
    {
        dim1=dim2=0;
    }
    Shape(float _d)
    {
        dim1 = _d;
    }
    Shape(float _d1, float _d2)
    {
        dim1 = _d1;
        dim2 = _d2;
    }

    void set_dim1 (float _d1)
    {
        this->dim1;

    }
    void set_dim2 (float _d2)
    {
        this->dim2;

    }

    float get_dim1()
    {
        return dim1;
    }
    float get_dim2()
    {
        return dim2;
    }

    float cal_area()
    {
        area = 0;
        return area;
    }

    virtual int prevent(int x) = 0;


    ~Shape()
    {
        cout<<"Destructor Shape"<<endl;
    }


};

class Rect: public Shape
{


public:

    Rect(){  };

    Rect(float dim1, float dim2) : Shape(dim1, dim2)
    {

    }

    float cal_area()
    {
        return get_dim1() * get_dim2();
    }

    ~Rect()
    {
        cout<<"Destructor Rectangle"<<endl;
    }
    int prevent(int x)
    {

    }
};


class Tri : public Shape
{

public:
    Tri(){  };

    Tri(float dim1, float dim2) : Shape(dim1, dim2)
    {

    }

    float cal_area()
    {
        return .5 * get_dim1() * get_dim2();
    }

    ~Tri()
    {
        cout<<"Destructor Triangle"<<endl;
    }
    int prevent(int x)
    {

    }
};

class Sqr: public Shape
{


public:

    Sqr(){  };

    Sqr(float dim1):Shape(dim1)
    {

    }

   float cal_area()
    {
        return get_dim1() * get_dim1();
    }

    ~Sqr()
    {
        cout<<"Destructor Rectangle"<<endl;
    }
    int prevent(int x)
    {

    }
};

class circle: public Shape
{
    public:
    circle(){};

    circle(float dim1):Shape(dim1)
    {

    }

    float cal_area()
    {
        return 3.14 * get_dim1() * get_dim1();
    }
    int prevent(int x)
    {

    }
};


float allarea(Rect r, Tri t, circle c, Sqr s)
{
    return (r.cal_area() + t.cal_area() + c.cal_area() +s.cal_area());
}

int main()
{

    Tri t(4,3);
    Rect r(5,4);
    circle x(10.0);
    Sqr s(10);

    cout<<"Sum of Area \n"<<allarea(r,t,x,s)<<endl;


  //  Shape s;

//    circle x(10.0);


 //   cout<<x.cal_area()<<endl;



    return 0;
}
