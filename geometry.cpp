/*Geometric Shapes with Polymorphism:
Problem Statement: Extend the shape hierarchy example by implementing polymorphism.
 Define a base class Shape with methods to calculate area and perimeter. Then, create derived classes 
 like Circle, Rectangle, and Triangle, each with its own implementation of these methods.
*/
#include<iostream>
using namespace std;

class shape{
    public:
    shape()
    {
        cout<<"---Default Shape---"<<endl;
    }
    virtual void area()
    {
        cout<<"\nAREA:"<<endl;
    }

    virtual void perimeter()
    {
        cout<<"\nPERIMETER:"<<endl;
    }
};

class rect:public shape
{
    private: int l,b;
    public:
    rect()
    {
        cout<<"---Default Rectangle---"<<endl;
        l=b=0;
    }
    rect(int l,int b)
    {
        cout<<"---Parameter Rectangle---"<<endl;
        this->l=l;
        this->b=b;
    }

    void area()
    {
        cout<<"Area of Rectangle="<<l*b<<endl;
    }
    void perimeter()
    {
        cout<<" Perimeter of rectangle="<<2*(l+b)<<endl;
    }
};

class circle:public shape{
    private: int r;
    public:
    circle()
    {
        cout<<"------Default circle----"<<endl;
        r=0;
    }
    circle(int r)
{
    cout<<" -----paramater circle---"<<endl;
    this->r=r;
}
void area()
{
    cout<<"Area of circle="<<3.14*r*r<<endl;
}
void perimeter()
    {
        cout<<" Perimeter of circle="<<2*3.14*r<<endl;
    }
};

class square:public shape{
    private:int s;
    public:
    square()
    {
        cout<<"-----Default square----"<<endl;
        s=0;
    }
    square(int s)
    {
        cout<<"------paramater square--"<<endl;
        this->s=s;
    }
    void area()
    {
        cout<<" area of square="<<s*s<<endl;
    }
    void perimeter()
    {
        cout<<" Circumference of square="<<4*s<<endl;
    }
};
int main()
{
     
     rect r1(5,6);
     r1.area();
     r1.perimeter();
     circle c1(6);
     c1.area();
     c1.perimeter();
     square s1(10);
     s1.area();
     s1.perimeter();

 
     circle c2(12);
     c2.area();
     return 0;

}
