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

void playSimonSays(long long simonNumber, bool isHardMode) {
    int answer;
    int add;
    int timer;

    if (isHardMode == true) {
        timer = 1000;
    }
    else {
        timer = 2000;
    }

    //Get random number (and add it to the previous number)
    srand((unsigned int)time(NULL));
    add = rand() % 9 + 1; 
    simonNumber = simonNumber * 10 + add;

    system("CLS"); //clear screen

    if (isHardMode == true) { 
        cout << "Simon says: " << add << endl; 
    }
    else { 
        cout << "Simon says: " << simonNumber << endl; 
    }
    
    this_thread::sleep_for(chrono::milliseconds(timer)); //Pause game to read number
    system("CLS");
    if (isHardMode == true) { 
        cout << "What did simon say in total?" << endl; 
    }
    else { 
        cout << "What did simon say?" << endl; 
    }

    cin >> answer;

    //Get score
    if (answer != simonNumber) {
        cout << "it was: " << simonNumber << endl << endl;
        if (simonNumber < 100) { 
            cout << "YOU SUCK!"; 
        }
        else { 
            cout << "You died, your score is  " << countDigit(simonNumber); 
        }
    }

    //Go to next number
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

    //Start program for the game
    playSimonSays(simonSays, isHardMode);

    return 0;
}
