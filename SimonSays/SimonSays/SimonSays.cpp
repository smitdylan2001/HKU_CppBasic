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

void playSimonSays(long long simonNumber) {
    int answer;

    simonNumber = simonNumber * 10 + rand() % 9 + 1;

    system("CLS");
    cout << "Simon says: " << simonNumber << endl;
    this_thread::sleep_for(chrono::milliseconds(2000));
    system("CLS");
    cout << "What did simon say?" << endl;
    cin >> answer;

    if (answer != simonNumber) {
        if (simonNumber < 100) cout << "YOU SUCK!";
        else cout << "You died, your score is  " << countDigit(simonNumber);
    }
    else playSimonSays(simonNumber);
}

int main()
{
    long long simonSays = 0;
    char question;


    cout << "Start game? (Y/N)" << endl;
    cin >> question;

    if (!question) {
        cout << "Smell ya later";
        this_thread::sleep_for(chrono::milliseconds(2000));
        system("CLS");
        cout << "NERD";
        return 0;
    }

    playSimonSays(simonSays);

    return 0;
}
