#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include "SimonSays.h"

int answer;
bool isHardMode;
int timer;
bool isCorrect;
int simonNumber;

//count how many numbers are in the integer
int countDigit(long long n){
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int getNumber() {
    if (isHardMode == true) {
        std::cout << "What did simon say in total?" << std::endl;
    }
    else {
        std::cout << "What did simon say?" << std::endl;
    }

    std::cin >> answer;

    return answer;
}

bool checkAnswer(int answer, int correctNumber) {
    if (answer != correctNumber) {
        std::cout << "it was: " << correctNumber << std::endl << std::endl;
        if (correctNumber < 1000) {
            system("CLS");
            std::cout << "YOU SUCK!";
        }
        else {
            system("CLS");
            std::cout << "You died, your score is  " << countDigit(correctNumber) << std::endl;
        }
        return false;
    }
    return true;
}

int generateRandom(int number) {
    int add;
    add = rand() % 9 + 1;
    number = number * 10 + add;
    return number;
}

void showNumber(int number, int showAmount) {
    for (int i = 0; i < showAmount; i++) {
        if (isHardMode == true) {
            int add = number % 10;
            std::cout << "Simon says: " << add << std::endl;
        }
        else {
            std::cout << "Simon says: " << number << std::endl;
        }
    }
}

void playSimonSays() {
    simonNumber = generateRandom(simonNumber);
    //Get random number (and add it to the previous number)
    
    system("CLS"); //clear screen

    showNumber(simonNumber, 1);
    std::this_thread::sleep_for(std::chrono::milliseconds(timer));

    system("CLS");
    
    answer = getNumber();

    //Get score
    isCorrect = checkAnswer(answer, simonNumber);

    if (isCorrect) {
        //Go to next number
        playSimonSays();
    }
}

int main()
{
    char question;
    char diffuculty;

    srand(time(NULL));

    std::cout << "Start game? (Y/N)" << std::endl;
    std::cin >> question;

    //stop game when not wanting to play
    if (question == 'n' || question == 'N') {
        system("CLS");
        std::cout << "Smell ya later";
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        system("CLS");
        std::cout << "NERD";
        return 0;
    }

    std::cout << "Hard mode? (Y/N)" << std::endl;
    std::cin >> diffuculty;

    //Change diffuculty
    if (diffuculty == 'y' || diffuculty == 'Y') { 
        isHardMode = true; 
        timer = 1000;
    }
    else { 
        isHardMode = false; 
        timer = 2000;
    }

    for (int i = 0; i < 3; i++) {
        simonNumber = generateRandom(simonNumber);
    }

    std::cout << "Simon says: " << simonNumber << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    answer = getNumber();
    checkAnswer(answer, simonNumber);

    //Start program for the rest of the game
    playSimonSays();

    return 0;
}
