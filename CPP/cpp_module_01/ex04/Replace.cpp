
#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
}

Replace::~Replace()
{
}

void	Replace::replaceInFile(void)
{
	this->_file.open(this->_filename);
	if (!this->_file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}
	std::string	line;
	while (std::getline(this->_file, line))
	{
		this->_buffer += line;
		this->_buffer += '\n';
	}
	this->_file.close();
	this->replace();
	this->_output.open(this->_filename + ".replace");
	if (!this->_output.is_open())
	{
		std::cout << "Error: could not create output file" << std::endl;
		return ;
	}
	this->_output << this->_buffer;
	this->_output.close();
}

void	Replace::replace(void)
{
	size_t	pos = 0;
	while ((pos = this->_buffer.find(this->_s1, pos)) != std::string::npos)
	{
		this->_buffer.replace(pos, this->_s1.length(), this->_s2);
		pos += this->_s2.length();
	}
}