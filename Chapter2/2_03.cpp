#include<iostream>
#include<vector>
using namespace std;
//用传引用的方式传值
void display(const vector<int> &vec);
void swap(int &value1, int &value2);
void bubble_sort( vector<int> &vec);

int main()
{
    int ia[8] = {8, 34, 3, 13, 1, 21, 5, 2};
    vector<int> vec(ia, ia + 8);
    cout << "vector before sort: ";
    display(vec);

    bubble_sort(vec);

    cout << "vector after sort: ";
    display(vec);

    return 0;
}

void display(const vector<int> &vec)
{
    for (int ix = 0; ix < vec.size();ix++)
        cout << vec[ix] << ' ';
    cout << endl;
}

void swap(int &value1, int &value2)
{
    int temp = value1;
    value1 = value2;
    value2 = temp;
}

void bubble_sort(vector<int> &vec)
{
    for (int ix = 0; ix < vec.size()-1;ix++)
    {
        for (int jx = 0; jx < vec.size()-ix-1;jx++)
        {
            if(vec[jx]>vec[jx+1])
                swap(vec[jx], vec[jx + 1]);
        }
    }
}