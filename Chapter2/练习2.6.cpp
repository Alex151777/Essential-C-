#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

template<typename Type>
Type max(Type t1,Type t2)
    {   return (t1 > t2) ? t1 : t2;}

template<typename elemType>
elemType max(const vector<elemType> &vec)
    {  return *max_element(vec.begin(),vec.end());}

template<typename arrayType>
arrayType max(const arrayType *parray,int len)
    {   return *max_element(parray,parray+len);}

int main()
{
    string s_array[] = {"We", "are","the", "world"};
    vector<string> s_vec(s_array, s_array+4);

    int i_array[] = {1, 2, 6, 78, 12, 45, 54, 89};
    vector<int> i_vec(i_array, i_array + 8);

    double d_array[] = {4.12, 6.23, 7.485, 9.271, 9.98};
    vector<double> d_vec(d_array, d_array + 5);

    //Todo:错误提示：有多个重载函数示例与参数列表匹配,暂时未解决
    int imax = max(max(i_vec), max(i_array, 8));
    double dmax = max(max(d_vec), max(d_array, 5));
    string smax = max(max(s_vec), max(s_array, 4));

    cout << "i max should be 89 --- found: " << imax << endl;
    cout << "d max should be 9.98 --- found: " << dmax << endl;
    cout << "s max should be are world--- found: " << smax << endl;
}