#include <iostream>
using namespace std;

int main(){
    int a=0, b=0,c=0, Triangolo=0, Quadrato=0, Rettangolo=0, Trapezio=0;
    cin >> a >> b >> c;
    Triangolo=a*b/2;
    Quadrato=a*a;
    Rettangolo=a*b;
    Trapezio=(a+b)*c/2;
    cout<<Triangolo<<endl;
    cout<<Quadrato<<endl;
    cout<<Rettangolo<<endl;
    cout<<Trapezio<<endl;
    return 0;

}
