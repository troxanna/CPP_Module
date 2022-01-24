#pragma once

#include <iostream>
#include <fstream>
#include <string>

class Sed
{
private:
	std::string strTo;
	std::string strFrom;
	std::string fileName;
	std::fstream inFile;
	std::fstream outFile;

	char * str_replace( std::string &buf );

public:
	Sed( void ) {};
	~Sed( void );
	bool	setFile(std::string fileName);
	bool	replace( std::string strTo, std::string strFrom );
};


