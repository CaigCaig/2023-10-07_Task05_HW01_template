#include <vector>
#include <iostream>

using namespace std;

template <typename T>
int my_square(T const& l)
{
	return l * l;
}

template <typename T>
auto my_square(vector<T> const& l)
{
	using v_type = typename vector<T>::value_type;
	vector<v_type> result;
	for (auto it : l)
	{
		v_type temp = it * it;
		result.push_back(temp);
	}
	return result;
}

int main() {
	int x = 4;
	cout << "[IN]: " << x << endl;
	cout << "[OUT]: " << my_square(x) << endl;

	vector<int> x_arr = { -1, 4, 8 };
	vector<int> y_arr = my_square(x_arr);

	cout << "[IN]: ";
	for (auto i : x_arr) cout << i << ", ";
	cout << endl;

	cout << "[OUT]: ";
	for (auto i : y_arr) cout << i << ", ";
	cout << endl;

	system("pause");
}