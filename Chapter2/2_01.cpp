//练习Fibonacci数列
#include<iostream>
using namespace std;

bool fibonacci_elem(int pos, int &elem);
void print_sequence(int pos);

int main()
{
    int pos;
    int elem;

    cout << "Please enter a postion:";
    cin >> pos;
    if(fibonacci_elem(pos,elem))
        {
            cout << "element # " << pos << " is " << elem << endl;
            print_sequence(pos);
        }
    else
        cout << "Sorry.Could not calcucate the element # " << pos << endl;
    
}

bool fibonacci_elem(int pos,int &elem)
{
    //检查位置值是否合理
    if(pos<0||pos>1024)
    {
        elem = 0;
        return false;
    }
    else
    {
        elem = 1;
        int n1 = 1, n2 = 1;
        for (int index = 3; index <= pos;index++)
        {
            elem = n1 + n2;
            n1 = n2;
            n2 = elem;
        }
        return true;
    }
}

void print_sequence(int pos)
{
    cout << "The Fibonacci Sequence for " << pos << " postions: \n\t";
    switch (pos)
    {
        default:
        case 2:
            cout << "1 ";
        case 1:
            cout << "1 ";
            break;
    }
    int elem = 1;
    int n1 = 1, n2 = 1;
    for (int index = 3; index <= pos; index++)
    {
        elem = n1 + n2;
        n1 = n2;
        n2 = elem;
        cout << elem << (!(index % 10) ? "\n\t" : " ");
    }
    cout << endl;
    
}