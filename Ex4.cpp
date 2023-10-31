#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<int> numbers = { 23,56,78,89,90 };
	cout << "Original Vector" << endl;
	for (int x = 0; x < numbers.size(); x++)
	{
		cout << numbers[x] << endl;
	}
	numbers.insert(numbers.begin() + 2, 100);
	cout << "\n\nCurrent Vector" << endl;
	for (int x = 0; x < numbers.size(); x++)
	{
		cout << numbers[x] << endl;
	}
}