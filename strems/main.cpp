#include <iostream>
#include<bits/stdc++.h>

using namespace std;

template <class T>
SSwap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}


class complexx {

private:
    int real;
    int imagin;
public:
    complexx()
    {
        real = 0;
        imagin = 0;
    }

    complexx(int x, int y)
    {
            real = x;
            imagin = y;
    }

    complexx(const complexx & c)
    {
        cout<<"Copy Constructor"<<endl;

        this->real = c.real;
        this->imagin = c.imagin;



    }

    void setvaluesreal (int real);
    void setvaluesimagin(int imagin);
    int getvaluesreal();
    int getvaluesimagin();
    void display();
   // complexx add(complexx x, complexx y);
    complexx operator + (const complexx &c)
    {

        this->real = real + c.real;
        this->imagin = imagin + c.imagin;

        return *this;
    }

    complexx operator - (const complexx &c)
    {

        this->real = real - c.real;
        this->imagin = imagin - c.imagin;

        return *this;
    }
    complexx operator + (int n)
    {

        this->real = real + n;


        return *this;
    }

    // c1 -= c2 >>> c1 = c1-c2
    complexx operator -= (const complexx &c)
    {

        this->real -= c.real;

        return *this;
    }
    //prefix --p
    complexx operator -- ()
    {

        this->real = real--;


        return *this;
    }
    //postfix p--
    complexx operator -- (int)
    {
        this->real = real;
        real--;



        return *this;
    }

    operator int ()
    {




        return this->real;



    }


    bool operator == (const complexx &c)
    {
        return ((this->real == c.real) && (this->imagin == c.imagin));
    }

    bool operator != (const complexx &c)
    {
        return ((this->real != c.real) && (this->imagin != c.imagin));
    }

    bool operator > (const complexx &c)
    {
        return ((this->real > c.real) && (this->imagin > c.imagin));
    }

    bool operator < (const complexx &c)
    {
        return ((this->real < c.real) && (this->imagin < c.imagin));
    }

    bool operator >= (const complexx &c)
    {
        return ((this->real >= c.real) && (this->imagin >= c.imagin));
    }

    bool operator <= (const complexx &c)
    {
        return ((this->real <= c.real) && (this->imagin <= c.imagin));
    }


friend    istream & operator >> (istream &in,  complexx &c)
    {
        cout<<"Real"<<endl;
        in>>c.real;
        cout<<"Imagin"<<endl;
        in>>c.imagin;

        return in;
    }
 friend   ostream  & operator << (ostream &out, const complexx &c)
    {
        out<<c.real;
        out<<"+"<<c.imagin<<"i"<<endl;
        return out;
    }

    ~complexx()
    {
        cout<<"Destructor"<<endl;
    }
};


void complexx::setvaluesreal(int r)
{
    real = r;

}

void complexx::setvaluesimagin(int im)
{
    imagin = im;

}




int complexx::getvaluesreal()
{
    return real;
}

int  complexx::getvaluesimagin()
{
    return imagin;
}

//complexx add(complexx x, complexx y)
//{
//    complexx c;
//    c.setvaluesreal(x.getvaluesreal() + y.getvaluesreal());
//    c.setvaluesimagin(abs(x.getvaluesimagin()) + abs(y.getvaluesimagin()));
//
//    return c;
//}

void complexx::display()
{
    if(imagin>=2)
    {
        cout<<real<<"+"<<imagin<<"i"<<endl;
    }
    else if(imagin==1)
    {
      cout<<real<<"+"<<"i"<<endl;
    }
    else if(imagin ==0 && real == 0)
    {
        cout<<"0"<<endl;
    }
    else if(imagin== -1)
    {
        cout<<real<<"-"<<"i"<<endl;
    }
    else if(real<0 && imagin <0)
    {
        cout<<real<<imagin<<"i"<<endl;
    }

}

complexx add(complexx x, complexx y)
{
    complexx c;
    c.setvaluesreal(x.getvaluesreal() + y.getvaluesreal());
    c.setvaluesimagin(abs(x.getvaluesimagin()) + abs(y.getvaluesimagin()));

    return c;
}
complexx sub(complexx x, complexx y)
{
    complexx c;
    c.setvaluesreal(x.getvaluesreal() - y.getvaluesreal());
    c.setvaluesimagin(x.getvaluesimagin() - y.getvaluesimagin());

    return c;
}


complexx operator - (int n, complexx &x)
{
    complexx c;
    c.setvaluesreal(n - x.getvaluesreal());
    c.setvaluesimagin(x.getvaluesimagin());


    return c;
}



int main()
{

    complexx com;


    cin>>com;
    cout<<com;

//    complexx com1;
//    complexx result;
//    complexx result2;
//
//    int x,y,a,b;
//
//
//    cout<<"Enter the values of complex 1"<<endl;
//    cin>>x;
//    cin>>y;
//
//    SSwap(x,y);
//    com.setvaluesreal(x);
//    com.setvaluesimagin(y);
//
//
//
//    com.display();


//    cout<<"Enter the values of complex 2"<<endl;
//    cin>>a;
//    com1.setvaluesreal(a);
//    cin>>b;
//    com1.setvaluesimagin(b);




//    result = com + com1;
//
//    result.display();
//
//
//    result = com - com1;
//        result.display();
////
//    result = com1 + 5;
//        result.display();
//    cout<<"Test111"<<endl;
//    result2 = 5 - com;
//    result2.display();
//    cout<<"Test"<<endl;
//    com -= com1;
//        com.display();
//
//    com --;
//        com.display();
//
//    --com;
//    com1.display();
//
//
//
//    int q = (int) com;





// com == com1 > < >= <=
//    cout<<"--------------ADD----------"<<endl;
//    result = add(com, com1);
//    result.display();
//    cout<<"--------------SUB-----------"<<endl;
//    result = sub( com,com1);
//    result.display();
//
//
//    cout<<"--------------ADD----------"<<endl;
//    result = com + com1;
//    result.display();





    return 0;
}
