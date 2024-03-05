
#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
		std::string _buffer;
		std::ifstream _file;
		std::ofstream _output;
		void		replace(void);
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();
		void	replaceInFile(void);
};

#endif