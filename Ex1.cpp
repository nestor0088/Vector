#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers;
    numbers.push_back(4);
    numbers.push_back(6);
    numbers.push_back(10);
    cout << "The size of the Vector --> " << numbers.size();
    for (int x = 0; x < numbers.size(); x++)
    {
        cout << numbers[x] << endl;
    }
}