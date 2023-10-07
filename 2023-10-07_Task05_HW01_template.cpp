#include <iostream>
#include <vector>

using namespace std;

template <class T>
T my_sqrt(T a)
{
    return a * a;
}

int main()
{
    int x = 4;
    vector<int> x_arr = {-1, 4, 8};
    cout << "[IN]: " << x << endl;
    cout << "[OUT]: " << my_sqrt(x) << endl;

    cout << "[IN]: ";
    for (auto i = 0; i < x_arr.size(); i++)
    {
        cout << x_arr[i];
        if (i < (x_arr.size() - 1)) cout << ", ";
    }
    cout << endl;
 
    cout << "[OUT]: ";
    for (auto i = 0; i < x_arr.size(); i++)
    {
        cout << my_sqrt(x_arr[i]);
        if (i < (x_arr.size() - 1)) cout << ", ";
    }
    cout << endl;

    system("pause");
}