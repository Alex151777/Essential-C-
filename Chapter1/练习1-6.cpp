#include<iostream>
#include<vector>
using namespace std;

//array形式较简单，故不做练习
int main()
{

    vector<int> vector_number;

    int sum = 0;
    int value;

    while(cin>>value)
        vector_number.push_back(value);

    for (int index = 0; index < vector_number.size();index++)
    {
        sum += vector_number[index];
    }

    cout << "Sum = " << sum << endl;
    cout << "Aver = " << sum / vector_number.size();

    return 0;
}