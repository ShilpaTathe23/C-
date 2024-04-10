//Animal Hierarchy:
//Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then 
//create derived classes like Mammal, Bird, and Fish. Each of these derived classes 
//should have specific properties and methods related to their respective categories of animals.
#include<iostream>
using namespace std;

class animal{
    private:
    string name;
    string color;
    int leg;
    string stay;

    public:
    animal()
    {
        cout<<"----default----"<<endl;
        this->name="NA";
        this->color="NA";
        this->leg=0;
        this->stay="NA";
    }

    animal(string name,string color,int leg,string stay)
    {
        cout<<"----Parameter------"<<endl;
        this->name=name;
        this->color=color;
        this->leg=leg;
        this->stay=stay;
    }

    void display()
    {
        cout<<"name="<<name<<"color="<<color<<"leg="<<leg<<"stay="<<stay<<endl;
    }


};

class Mammal1:public animal
{
    private:
    string sound;
      public: 
      Mammal1()
      {
        cout<<"----Default-----"<<endl;
        this->sound="NA";
      }

      Mammal1(string name,string color,int leg,string stay,string sound):animal(name,color,leg,stay)
      {
        this->sound=sound;
      }
};

class fish1:public animal 
{
    public:
    fish1()
    {
       cout<<"-----Default----"<<endl;
    }

    fish1(string name,string color,int leg,string stay):animal(name,color,leg,stay)
    {
       cout<<"------Fish parameter-----"<<endl;
    }
    void swim1()
    {
        cout<<"Fish swims"<<endl;
    }

};

class bird:public animal
{
    public:

    bird(string name,string color,int leg,string stay):animal(name,color,leg,stay)
    {
        cout<<"-----parameter----"<<endl;
    }
    
    bird()
    {
        cout<<"-----default----"<<endl;
    }
    void fly()
    {
        cout<<"Birds fly in sky"<<endl;
    }
};

int main()
{
    animal a1;
    a1.display();

    fish1 f1("Tuna","Black",0,"Water");
    f1.swim1();
    f1.display();

    Mammal1 m1("Dog","black",4,"home","bark");
    m1.display();

    bird b1("sparrow","brown",2,"nest");
    b1.display();
    

    return 0;

}