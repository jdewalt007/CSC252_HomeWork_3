#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;
#include "FileReader.h"





int main()
{

	FileReader Turbo5000;
	Turbo5000.writeData();
	Turbo5000.readData(); 
	
	vector<FileReader*> c;
	c.push_back(new FileReader);
	cout << c.size() << endl;
	cout << c[0] << endl;
	c[0]->writeData();
	c[0]->readData();
	system("pause > nul");

	return 0;
}
