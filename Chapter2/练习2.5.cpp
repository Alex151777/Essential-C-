#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int max(int a, int b)
    {   return (a > b) ? a : b; }

double max(double a, double b)
    {   return (a > b) ? a : b; }

string max(const string &s1, const string &s2)
    {   return (s1 > s2) ? s1 : s2;}

int max(const vector<int>&vec)
    {   return *max_element(vec.begin(), vec.end());}

double max(const vector<double> &vec)
    {    return *max_element(vec.begin(), vec.end());}

string max(const vector<string> &vec)
    {    return *max_element(vec.begin(), vec.end());}

int max(const int *parray, int len)
    {   return *max_element(parray, parray + len);}

double max(const double *parray, int len)
    {   return *max_element(parray, parray + len);}

string max(const string *parray, int len)
    {   return *max_element(parray, parray + len);}

int main()
{
    string s_array[] = {"We", "are","the", "world"};
    vector<string> s_vec(s_array, s_array+4);

    int i_array[] = {1, 2, 6, 78, 12, 45, 54, 89};
    vector<int> i_vec(i_array, i_array + 8);

    double d_array[] = {4.12, 6.23, 7.485, 9.271, 9.98};
    vector<double> d_vec(d_array, d_array + 5);

    int imax = max(max(i_vec), max(i_array, 8));
    double dmax = max(max(d_vec), max(d_array, 5));
    string smax = max(max(s_vec), max(s_array, 4));

    cout << max(6, 4) << endl;
    cout << max(2.45, 8.45567) << endl;
    cout << max("Hello,world","Ales") << endl;
    cout << "i max should be 89 --- found: " << imax << endl;
    cout << "d max should be 9.98 --- found: " << dmax << endl;
    cout << "s max should be are world--- found: " << smax << endl;

}