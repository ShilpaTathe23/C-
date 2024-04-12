#include<iostream>
using namespace std;

class employee{
    private:
    string name;
    int empId;
    protected:
    double salary;

    public:
    employee()
    {
        cout<<"----Default Employee-----"<<endl;
        name="NA";
        empId=0;
        salary=0;
    }

    employee(string name,int empId,double salary)
    {
        cout<<"----parameter constructor---"<<endl;
        this->name=name;
        this->empId=empId;
        this->salary=salary;
    }

    void display()
    {
        cout<<"Name="<<name<<" empId="<<empId<<" salary="<<salary;
    }

    void calsalary()
    {
        cout<<"Salary="<<salary;
    }

};

class manager:virtual public employee
{
    private:
    string deptn;
    int incentive;

    public:
    manager()
    {
        cout<<"----Default manager----"<<endl;
        deptn="NA";
        incentive=0;
    }

    manager(string name,int empId,double salary,string deptn,int incentive):employee(name,empId,salary)
    {
        cout<<"-----Parameter manager-----"<<endl;
        this->deptn=deptn;
        this->incentive=incentive;
    }

    void calsalary()
    {
        cout<<"Salary of manager="<<this->salary+incentive;
    }
};

class saleperson:virtual public employee{
    private:
    int pa,fa,ta;
    public:
    saleperson()
    {
        cout<<"----Default saleperson----"<<endl;
        pa=fa=ta=0;
    }

    saleperson(string name,int empId,double salary,int pa,int fa,int ta):employee(name,empId,salary)
    {
        cout<<"----Parameter saleperson----"<<endl;
         this->pa=pa;
         this->fa=fa;
         this->ta=ta;
    }

    void display()
    {
       employee::display();
       cout<<" pa="<<pa<<" fa="<<fa<<" ta="<<ta;
    }
};

class saleManager:public manager,public saleperson
{
    public:
    saleManager()
    {
       cout<<"---Default salemanager----"<<endl;
    }
};



int main()
{
    // employee e1;
     //manager m1;
     //saleperson sp;

     saleManager smagr;
}