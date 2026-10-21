
//I am making basic calculator

#include <iostream>
#include <cmath>
using namespace std;

double pluss(double a, double b){
    return a+b;
}

double minuss(double a, double b){
    return a-b;
}

double multiplyy(double a, double b){
    return a*b;
}

double dividee(double a, double b){
    if(b==0){
        cout<<"Dividing with 0 is forbidden.";
        return 0;
    }
    return a/b;
}
double moduloo(double a, double b){
    if(b==0){
        cout<<"Finding modul from 0 is not a number.";
        return 0;
    }
    return fmod(a,b);
}
double power(double a, double b){
    return pow(a,b);
}
double swrtt(double a){
    return sqrt(a);
}
int main(){
    double a,b;
    cout<<"Unesite broj -> ";
    cin>>a;
    cout<<endl<<"Unesite broj -> ";
    cin>>b;
    cout<<endl<<"Plus -> "<<pluss(a,b);
    cout<<endl<<"Minus -> "<<minuss(a,b);
    cout<<endl<<"Multiply -> "<<multiplyy(a,b);
    cout<<endl<<"Divide -> "<<dividee(a,b) <<"\t Remainder -> "<<moduloo(a,b);
    cout<<endl<<"Power -> "<<power(a,b);
    cout<<endl<<"Sqrt -> "<<sqrtt(a);
}
