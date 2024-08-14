
	#include<iostream>
	#include<fstream>
	#include<string>


	int ft_replace(std::string filename, std::string str1, std::string str2)
	{
		size_t pos = 0;
		std::string line;
		std::ifstream input(filename);
		if(!input)
			return 1;
		while(std::getline(input, line))
		{
			pos = line.find(str1, pos);
			while(pos != std::string::npos)
			{
				line.erase(pos, str1.length());
				line.insert(pos, str2);
				pos = line.find(str1, pos + str2.length());
			}
			std::cout<<line<<std::endl;
		}
		return 0;
	}


	int main(int argc, char** argv)
	{
		std::string filename;
		std::string str1;
		std::string str2;

		if(argc == 4)
		{
			filename = std::string(argv[1]);
			str1 = std::string(argv[2]);
			str2 = std::string(argv[3]);
			if(ft_replace(filename, str1, str2))
				return 1;

			return 0;
		}
		else
			return 1;
	}

