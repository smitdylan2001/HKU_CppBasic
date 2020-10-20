#include "CombineFiles.h"

CombineFiles::CombineFiles(std::string readPath1, std::string readPath2, std::string writePath){
	this->readPath1 = readPath1;
	this->readPath2 = readPath2;
	this->writePath = writePath;
}

void CombineFiles::combineText(){
	std::noskipws;
	std::ifstream in_stream1;
	std::ifstream in_stream2;
	std::ofstream out_stream;

	in_stream1.open(readPath1);
	in_stream2.open(readPath2);
	out_stream.open(writePath, std::ios::out);

	if (!in_stream1 || !in_stream2 || !out_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}


	while (!in_stream1.eof()) {
		std::getline(in_stream1, line);
		out_stream << line << std::endl;
		if (!in_stream2.eof()) {
			std::getline(in_stream2, line);
			out_stream << line << std::endl;
		}
	}

	in_stream1.close();
	in_stream2.close();
	out_stream.close();
}
