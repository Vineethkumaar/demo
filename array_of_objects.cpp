#include<iostream>
using namespace std;

class base {

    string name;
    int age;
public:
    void get();
    void put();
};

void base:: get()
{

    cout<<"Enter your name:"<<endl;
    string temp;
    cin>>name;
    cout<<"Enter your age:"<<endl;
    cin>>age;
}
void base :: put()
{

    cout<<"Name of the person:"<<name<<endl;
    cout<<"Age of the person:"<<age<<endl;
}
int main()
{

    base obj[3];

    for(int i=0; i<3;i++)
    {
        obj[i].get();
    }
     for(int i=0; i<3;i++)
    {
        cout<<"Obj:"<<i<<endl;
        obj[i].put();
    }

    return 0;

}
