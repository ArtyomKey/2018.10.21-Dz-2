/* Реализуйте структуру Rational для работы с рациональными числами, как с
несократимыми дробями. В программе должно присутствовать описание
структуры и программа показывающая работоспособность структуры*/
#include <iostream>
#include <string>
using namespace std;
struct ratio{
    int m;
    unsigned n;
};
ratio operator+(const ratio &a, const ratio &b){
    return {a.m*b.n+b.m*a.n, a.n*b.n};
}
ratio  operator-(const ratio &a, const ratio &b){
    return {a.m*b.n-b.m*a.n, a.n*b.n};
}
ratio operator*(const ratio &a, const ratio &b){
    return {a.m*b.m, a.n*b.n};
}
ratio operator/(const ratio &a, const ratio &b){
    return {a.m/b.m, a.n/b.n};
}

char* operator==(const ratio &a, const ratio &b){
    int c;
    c = a.m*b.n-b.m*a.n;
    if(c>0) {
	 return "first more then second";
    } else{
	if(c<0) {
	     return "first less then second";
    	} else {
	 return "equal";
	};
    };
}
    
int main()
{   char* k;
    ratio a, b, m;
    cin >> a.m >> a.n >> b.m >> b.n;
    m = a+b;
    cout << m.m << "/" << m.n << "\n";
    m = a-b;
    cout << m.m << "/" << m.n << "\n";
    m = a*b;
    cout << m.m << "/" << m.n << "\n";
    m = a/b;
    cout << m.m << "/" << m.n << "\n";
    k = a==b;
    cout << k;
}