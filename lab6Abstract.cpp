//3:Create a abstract class Shape with pure virtual method area;
//Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
//Test these all classes by creating object of respective class.

#include<iostream>
using namespace std;

class shape{
    public:
    shape()
    {
        cout<<"---Default Shape---"<<endl;
    }
    virtual void area()=0;
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
};
int main()
{
    //shape s1;
    //s1.area();
     
     rect r1(5,6);
     r1.area();
     circle c1(6);
     c1.area();
     square s1(10);
     s1.area();

}
