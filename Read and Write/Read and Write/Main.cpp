#include "TextReverse.h"
#include "CombineFiles.h"
#include <iostream>
#include <filesystem>



int main()
{
    std::noskipws;

    TextReverse reverseProgram("Files\\jabberwocky.txt", "Files\\newFile.txt");
    reverseProgram.reverseText();

    std::cout << std::endl << "done with reversing " << std::endl;

    CombineFiles combineFiles("Files\\jabberwocky.txt", "Files\\jabberwocky_lat.txt", "Files\\newFile2.txt");
    combineFiles.combineText();

    std::cout << std::endl << "done with combining " << std::endl;

    return 0;
}

