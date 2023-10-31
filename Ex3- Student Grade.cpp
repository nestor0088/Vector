#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	string name;
	double g;
	vector<double> grades;
	double totalgrade = 0;
	double average;
	cout << "Enter Student Name --> ";
	getline(cin, name);
	for (int x = 0; x < 5; x++)
	{
		cout << "Enter Grade #" << (x + 1) << " --> ";
		cin >> g;
		grades.push_back(g);
		totalgrade += g;
	}
	average = totalgrade / grades.size();
	grades.push_back(average);
	cout << "Student Name --> " << name << endl;
	for (int x = 0; x < grades.size(); x++)
	{
		cout << grades[x] << endl;
	}
}