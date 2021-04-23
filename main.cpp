#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double long a=1;
double long b=2;
double long c=0;
int count=1;

int cccount =1;
double long eps=0.001;
double long func( double long x ) {
    return x*x-3;
}

double long hord(double a, double b, double e)
{ double co=b;
    double c1=a;
    while(fabs(func(b)) > e)
    {
        count++;

        a = b - ((b - a) * func(b))/(func(b) - func(a));
        b = a - ((a - b) * func(a))/(func(a) - func(b));
        cout<<c1<<"  "<<b<<"\n";
        cout<<b<<"  "<<co<<"\n";
        c1=b;

    }
    return b;


}
int ccount =1;
double long MPD() {

    double long ttemp;
    while (fabs((b - a))/2 > eps) {
        ccount=ccount+1;
        c = (a + b) / 2;
        if (func(b) * func(c) < 0)
            a = c;
        else
            b = c;
    }

    ttemp =((a + b) / 2);

    return ttemp;
}
double long Newton(double long (*f)(double long)){
    double long x=a,temp;
    double long xt=0;

    while(fabs(x-xt)>=eps){
       cccount+=1;
       temp=(f(x+eps)-f(x))/eps;
        x=x-f(x)/temp;
        xt=x;
    }
    return x;}

int main() {

    double long temp = hord( a,b,eps );
    cout << "HORD x=" << temp<< endl;
    cout<<count<<endl;

    cout << "MPDx=" << MPD()<< endl;
    cout<<ccount<<endl;

    cout << "NewX=" <<Newton(func)<< endl;
    cout<<cccount<<endl;



    return 0;

}