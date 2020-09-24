#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;

int countDigit(long long n){
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

void playSimonSays(long long simonNumber, bool isHardMode) {
    int answer;
    int add;
    srand((unsigned int)time(NULL));
    add = rand() % 9 + 1;
    simonNumber = simonNumber * 10 + add;

    system("CLS");
    if (isHardMode == true) { cout << "Simon says: " << add << endl; }
    else { cout << "Simon says: " << simonNumber << endl; }
    
    this_thread::sleep_for(chrono::milliseconds(2000));
    system("CLS");
    if (isHardMode == true) { cout << "What did simon say in total?" << endl; }
    else { cout << "What did simon say?" << endl; }

    cin >> answer;

    if (answer != simonNumber) {
        if (simonNumber < 100) { cout << "YOU SUCK!"; }
        else { cout << "You died, your score is  " << countDigit(simonNumber); }
    }
    else playSimonSays(simonNumber, isHardMode);
}

int main()
{
    long long simonSays = 0;
    char question;
    char diffuculty;
    bool isHardMode;


    cout << "Start game? (Y/N)" << endl;
    cin >> question;

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

    if (diffuculty == 'y' || diffuculty == 'Y') { isHardMode = true; }
    else { isHardMode = false; }

    playSimonSays(simonSays, isHardMode);

    return 0;
}
