#include "Sed.hpp"

Sed::~Sed (void)
{
	if (this->inFile.is_open()) 
		this->inFile.close();
	if (this->outFile.is_open())
		this->outFile.close();
}

bool	Sed::setFile(std::string fileName)
{
	//добавить close, если open
	if (fileName == "")
		return (false);
	this->fileName = fileName;
	this->inFile.open(fileName, std::fstream::in);
	if (!this->inFile.is_open())
		return (false);
	return (true);
}

char *Sed::str_replace( std::string &buf )
{
	char *tmp;
	int lenght;
	int b;

	b = 0;
	lenght = buf.length() + (strTo.length() - strFrom.length());
	tmp = new char [lenght + 1];
	for (int i = 0; i < lenght; i++)
	{
		if (!strncmp(buf.c_str() + b, strFrom.c_str(), strFrom.length()))
		{
			for (size_t j = 0; j < strTo.length(); j++)
				tmp[i++] = strTo.c_str()[j];
			b = b + strFrom.length();
			--i;
		}
		else
		{
			std::cout <<  buf.c_str()[b] << std::endl;
			std::cout <<  i << std::endl;
			tmp[i] = buf.c_str()[b++];
		}
	}
	tmp[lenght] = '\0';
	return (tmp);
}

bool	Sed::replace( std::string strFrom, std::string strTo )
{
	char	*buf_replace;
	std::string buf;

	this->outFile.open(fileName + ".replace", std::fstream::out | std::fstream::app);
	if (!this->outFile.is_open())
		return (false);
	if (strTo == "" || strFrom == "")
		return (false);
	this->strFrom = strFrom;
	this->strTo = strTo;
	while (getline(this->inFile, buf))
	{
		buf_replace = str_replace( buf );
		this->outFile << buf_replace << '\n';
		delete [] buf_replace;
	}
	return (true);	
}