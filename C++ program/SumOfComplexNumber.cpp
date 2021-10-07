#include <iostream>
using namespace std;
class complex {
    float real;
    float imag;
    public:
    void getdata(float x,float y)
    {
        real=x;
        imag=y;
    }
    void display(void)
    {
        cout<<real<<"+i"<<imag<<endl;
    }
    complex sum(complex);
};
complex complex::sum(complex x1)
{
   complex t;
   t.real=real+x1.real;
   t.imag=imag+x1.imag;
   return t;
}

int main() {
    complex c1,c2,c3;
    c1.getdata(1.2,4.5);
    c2.getdata(3.1,3.3);
    c3=c1.sum(c2);
    c1.display();
    c2.display();
    cout<<"Sum ";
    c3.display();
    return 0;
}


