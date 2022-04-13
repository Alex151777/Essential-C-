#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
//用指针的方式传值
void display(const vector<int> *vec, ostream &os = cout);
void swap(int *value1, int *value2);
void bubble_sort(vector<int> *vec, ofstream *ofil = 0);

int main()
{
    int ia[8] = {8, 34, 3, 13, 1, 21, 5, 2};
    vector<int> vec(ia, ia + 8);
    ofstream ofil("data.txt");
    cout << "vector before sort: ";
    display(&vec,ofil);

    bubble_sort(&vec,&ofil);

    cout << "vector after sort: ";
    display(&vec,ofil);

    return 0;
}

void display(const vector<int> *vec,ostream &os)
{
    for (int ix = 0; ix < vec->size();ix++)
        os << (*vec)[ix] << ' ';
    os << endl;
}

void swap(int *value1, int *value2)
{
    int temp = *value1;
    *value1 = *value2;
    *value2 = temp;
}

void bubble_sort(vector<int> *vec,ofstream *ofil)
{
    for (int ix = 0; ix < vec->size()-1;ix++)
    {
        for (int jx = 0; jx < vec->size()-ix-1;jx++)
        {
            if((*vec)[jx]>(*vec)[jx+1])
                swap((*vec)[jx], (*vec)[jx + 1]);
        }
        if(ofil!=0)
            display(vec,*ofil);
    }
}