
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	ifstream in1;
	ofstream out1;
	string filename;

	cout << "Enter the filename that has the student scores: ";
	cin >> filename;
	in1.open(filename);
	out1.open("results.txt");

	string line;
	float total_credits = 0, total_averages = 0;
	int class_num = 0;
	while (getline(in1, line))
	{
		class_num++;
		string c_name, c_number;
		std::istringstream iss(line);
		int credits;
		if (!(iss >> c_number >> c_name >> credits)) { break; }
		int total_grades = 0, test_num = 0, class_grade;
		while (iss >> class_grade) {
			total_grades += class_grade;
			test_num++;
		}

		float class_average = total_grades / test_num;
		total_averages += class_average;
		total_credits += credits;
		
		out1 << "Course Number: " << c_number << " Class Name: " << c_name << " Class Grade: " << class_average << endl;

		
	}
	float gpa = total_averages / 12;
	out1 << "Overall GPA: " << gpa << endl;
	in1.close();
	out1.close();
	system("Pause");
	return 0;
}