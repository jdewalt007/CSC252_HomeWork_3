#include "FileReader.h"
#include <ctime>
#include <algorithm>
#include <iomanip>
using std::ios;
using std::vector;
using std::cout;
using std::endl;


FileReader::FileReader() {}

FileReader::~FileReader() {}


void FileReader::writeData()
{
	srand(time(0));
	inout.open("C:\\temp\\myData.txt", ios::out | ios::app);
	for (int i = 0; i < 100; i++)
		inout << (rand() % 99) + 1 << " ";
	inout.close();
}

void FileReader::readData() 
{
	vector<int> myIntegers;
	inout.open("C:\\temp\\myData.txt", ios::in);
	if (inout.fail())
	{
		cout << "No file exists to read from" << endl;
		system("pause > nul");
		system("cls");
	}

	else
	{
		int number;
		while (!inout.eof())
		{
			inout >> number;
			if (inout.eof())
				break;
			else
				myIntegers.push_back(number);
		}
		sort(myIntegers.begin(), myIntegers.end());
		int count = 0;
		for (int j = 0; j < myIntegers.size(); j++)
		{
			cout << std::left;
			cout << std::setw(3) << myIntegers[j];
			count++;
			if (count % 10 == 0)
				cout << endl;
		}
		inout.close();
	}
}






