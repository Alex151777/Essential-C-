#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a + b;
}

int substract(int a,int b)
{
    return a - b;
}

int main()
{

    int x = 6, y = 3;
    int (*pf)(int, int);
    pf = add;
    pf(x, y);
    cout << pf(x, y) << endl;
    pf = substract;
    pf(x, y);
    cout << pf(x, y) << endl;

    return 0;
}