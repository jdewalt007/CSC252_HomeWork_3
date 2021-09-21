#pragma once
#include <fstream>
#include <vector>
#include <iostream>


class FileReader
{
public:
	FileReader();
	~FileReader();

	void writeData();

	void readData() ;

private:
	std::fstream inout;





};

