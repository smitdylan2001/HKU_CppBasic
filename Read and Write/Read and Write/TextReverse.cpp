#include "TextReverse.h"

TextReverse::TextReverse(std::string readPath, std::string writePath){
	this->readPath = readPath;
	this->writePath = writePath;
}

void TextReverse::reverseText(){
	charactercount = 0;

	std::ifstream in_stream;
	std::ofstream out_stream;
	in_stream.open(readPath);
	out_stream.open(writePath, std::ios::out);

	if (!in_stream || !out_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	while (!in_stream.eof()) {
		charactercount++;
		in_stream.get(ch);
	}

	if (in_stream.is_open())
	{
		std::ifstream myFile(readPath, std::ios::ate);
		std::streampos size = myFile.tellg();

		for (int i = 1; i <= size; i++) {
			myFile.seekg(-i, std::ios::end);
			myFile.get(ch);
			if (!out_stream) {
				std::cout << "Probleem bij openen file" << std::endl;
				exit(1);
			}
			out_stream.put(ch);
		}
	}

	out_stream.close();
	in_stream.close();	
}
