#include <iostream>
#include<bits/stdc++.h>

using namespace std;


struct complexx {

//private:
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



template<class T>
class Stack {

private:
    T* stc;
    int top;
    int Size;
    static int conter;
public:

    Stack(){
        Size = 5;
        stc = new T[Size];
        top = 0;

//        conter++;

    }

    Stack(int Size)
    {
        //this->Size = Size;
        //Size = n;
        stc = new T[Size];
        top = 0;

        conter++;
    }

    Stack(const Stack &s)
    {
        cout<<"Copy constructor"<<endl;
        top = s.top;
        Size = s.Size;

        stc = new T[Size];

        for(int i = 0; i<top; i++)
            stc[i] = s.stc[i];

        conter++;
    }
    ~Stack()
    {
        cout<<"Destructor"<<endl;

//        conter --;
    }

    bool isfull()
    {
        return (top == Size);
    }

    bool isempty()
    {
        return (top == 0);
    }


   void push(T x)
    {

        if(!isfull())
            stc[top++] = x;
            else
                cout<<"Stack is Full"<<endl;


    }

   T pop()
    {

        if(!isempty())
            return stc[--top];
            else
                cout<<"Stack is Empty"<<endl;
    }

    int topp()
    {
        return stc[top-1];
    }

    void display()
    {
        for(int i=0; i<top; i++)
            cout<<stc[i]<<endl;
    }

     Stack Reverse(Stack x)
    {
        Stack s;
        while(!x.isempty())
        {
//            int y;
//            y = x.topp();
//            x.pop();
//            s.push(y);

            s.push(x.topp());

            x.pop();

        }



        return s;
    }

    Stack rev()
    {
        cout<<"Reverse"<<endl;
        Stack rev(this->Size);
        rev.top = this->top;
        for(int i=0; i<rev.top ; i++)
            rev.stc[i] = stc[top -i -1];

        return rev;
    }

    // s = s1

    Stack operator = (const Stack &s)
    {
        top = s.top;
        Size = s.Size;

        delete [] stc;
      //  cout << s.Size << " " << s.top << endl;
        stc = new T[Size];

        for(int i=0; i<top; i++)

        stc[i] = s.stc[i];

        return *this;

    }

    // s3 = s + s1

    Stack operator +(const Stack &s)
    {
       // cout << "Here " << this->Size << " "  << (s.Size) << endl;
        Stack s3((this->Size + s.Size));


        for(int i=0; i<this->top; i++)
            s3.stc[i] = this->stc[i];



        s3.top = top + s.top;

        for(int i=this->top; i<s3.top  ; i++)
            s3.stc[i] = s.stc[i - this->top];






        //cout << "Here " << endl;
        return s3;

    }

    static int get_conter()
    {
        return conter;
    }


    friend void print(Stack s);


};
//template<class T>
//T print (Stack s)
//{
//    for(int i=0; i<s.top; i++)
//        cout<<s.stc[i]<<endl;
//}

//int Stack ::conter = 0;

int main()
{

//    Stack s,s1,s3;

    complexx c;
    c.setvaluesreal(12);
    c.setvaluesimagin(2);

    Stack<complexx> z;

    z.push(c);


    complexx x = z.pop();
    x.display();



//    s.push(12);
//    s.push(13);
//    s.push(122);
//    s.push(10);
//
//
//    s1.push(2);
//    s1.push(3);
//    s1.push(4);



//s = s1;
//
//     print(s1);


//s3 =s+s1;
//
//    print(s3);

//    cout<<"---------------------"<<endl;
//
//    cout<<Stack::get_conter()<<endl;



//    print(s);
//
//    z = s.rev();
//
//    cout<<"---------------"<<endl;
//    cout<<s.pop()<<endl;
//    cout<<"----------------"<<endl;
//
//
//    Stack x = s.rev();
//
//    cout<<"-------------"<<endl;
//
//    print(x);


//    cout<<"----------------"<<endl;
//    y = x.rev();
//    print(y);


//    cout<<"-----------"<<endl;
//    cout<<s.topp()<<endl;
//    cout<<"---------------------"<<endl;
//    cout<<"-----REFERSE---------"<<endl;


 // z.Reverse(s).display();






    return 0;
}
