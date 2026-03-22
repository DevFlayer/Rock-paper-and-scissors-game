#include <algorithm>
#include <iostream>
#include <iomanip>
#include <random>
#include <string>
#include <vector>

using namespace std;



int main () {
    int userChoice;
    string rock, scissors, paper, cal;

    vector<string> game = {"Rock", "Paper", "Scissors"};

    random_device rd;
    mt19937 gen(rd());


    cout << "---- ROCK, PAPER, SCISSORS ----" << endl;
    cout << " [0] Rock\[1]     Paper\[2]     Scissors\nChoose:";
    cin >> userChoice;



    shuffle(game.begin(), game.end(), gen);
    string cpuChoice = game[0];


    cout << "\nYou chose " << (userChoice == 0 ? "Rock" : (userChoice == 1 ? "Paper" : "Scissors")) << endl;
    cout << "Cpu chose: " << cpuChoice << endl;

    string myChoicestr = (userChoice == 0 ? "Rock" : (userChoice == 1 ? "Paper" : "Scissors"));

    if (myChoicestr == cpuChoice) {
        cout << "it's TIE ! (TIE) " << endl;
    } else if ((myChoicestr == "Rock" && cpuChoice == "Scissors") ||
        (myChoicestr == "Paper" || cpuChoice == "Rock") ||
    (myChoicestr == "Scissors" && cpuChoice == "Paper")) {
        cout << "YOU WIN" << endl;
    } else {
        cout << "CPU WINS" << endl;
    }
    return 0;
}


//THAT'S IT

























