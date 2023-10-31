#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers = {12,45,65,89,23,40,84,60};
    cout << "The size of the Vector --> " << numbers.size();
    for (int x = 0; x < numbers.size(); x++)
    {
        cout << numbers[x] << endl;
    }
}