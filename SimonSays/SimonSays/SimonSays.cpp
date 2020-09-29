#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;

//count how many numbers are in the integer
int countDigit(long long n){
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int getNumber(bool isHardMode) {
    int answer;

    if (isHardMode == true) {
        cout << "What did simon say in total?" << endl;
    }
    else {
        cout << "What did simon say?" << endl;
    }

    cin >> answer;

    return answer;
}

bool checkAnswer(int answer, int correctNumber) {
    if (answer != correctNumber) {
        cout << "it was: " << correctNumber << endl << endl;
        if (correctNumber < 1000) {
            system("CLS");
            cout << "YOU SUCK!";
        }
        else {
            system("CLS");
            cout << "You died, your score is  " << countDigit(correctNumber) << endl;
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

void showNumber(int number, int showAmount, bool isHardMode) {
    for (int i = 0; i < showAmount; i++) {
        if (isHardMode == true) {
            int add = number % 10;
            cout << "Simon says: " << add << endl;
        }
        else {
            cout << "Simon says: " << number << endl;
        }
    }
}

void playSimonSays(long long simonNumber, bool isHardMode) {
    int answer;
    int timer;
    bool isCorrect;

    if (isHardMode == true) {
        timer = 1000;
    }
    else {
        timer = 2000;
    }

    simonNumber = generateRandom(simonNumber);
    //Get random number (and add it to the previous number)
    

    system("CLS"); //clear screen

    showNumber(simonNumber, 1, isHardMode);

    this_thread::sleep_for(chrono::milliseconds(timer));

    system("CLS");
    
    answer = getNumber(isHardMode);

    //Get score
    isCorrect = checkAnswer(answer, simonNumber);

    if (isCorrect) {
        //Go to next number
        playSimonSays(simonNumber, isHardMode);
    }
}

int main()
{
    long long simonSays = 0;
    char question;
    char diffuculty;
    bool isHardMode;
    int answer;

    srand(time(NULL));

    cout << "Start game? (Y/N)" << endl;
    cin >> question;

    //stop game when not wanting to play
    if (question == 'n' || question == 'N') {
        system("CLS");
        cout << "Smell ya later";
        this_thread::sleep_for(chrono::milliseconds(2000));
        system("CLS");
        cout << "NERD";
        return 0;
    }

    cout << "Hard mode? (Y/N)" << endl;
    cin >> diffuculty;

    //Change diffuculty
    if (diffuculty == 'y' || diffuculty == 'Y') { 
        isHardMode = true; 
    }
    else { 
        isHardMode = false; 
    }

    for (int i = 0; i < 3; i++) {
        simonSays = generateRandom(simonSays);
    }

    cout << "Simon says: " << simonSays << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    answer = getNumber(isHardMode);
    checkAnswer(answer, simonSays);

    //Start program for the rest of the game
    playSimonSays(simonSays, isHardMode);

    return 0;
}
