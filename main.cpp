#include <iostream>
#include <string>
#include <vector>
using namespace std;

string chest = "*******************************************************************************\n|                   |                  |                     |\n_________|________________.=''_;=.______________|_____________________|_______\n|                   |  ,-'_,=''     `'=.|                  |\n|___________________|__'=._o`'-._        `'=.______________|___________________\n|                         `'=._o`'=._        _`'=._                     |\n_________|_____________________:=._o '=._.'_.-='''=.__________________|_______\n|                   |    __.--' , ; `'=._o.' ,-'''-._ '.   |\n|___________________|_._'  ,. .` ` `` ,  `'-._'-._   '. '__|___________________\n|                    |o`'=._` , '` `; .'. ,  '-._'-._; ;              |\n_________|___________| ;`-.o`'=._; .' ` '`.'\\` . '-._ /_______________|_______\n|                   | |o;    `'-.o`'=._``  '` ' ,__.--o;   |\n|___________________|_| ;     (#) `-.o `'=.`_.--'_o.-; ;___|___________________\n ____/______/______/___|o;._    '      `'.o|o_.--'    ;o;____/______/______/____\n/______/______/______/_'=._o--._        ; | ;        ; ;/______/______/______/_\n____/______/______/______/__'=._o--._   ;o|o;     _._;o;____/______/______/____\n/______/______/______/______/____'=._o._; | ;_.--'o.--'_/______/______/______/_\n____/______/______/______/______/_____'=.o|o_.--''___/______/______/______/____\n/______/______/______/______/______/______/______/______/______/______/[TomekK]\n*******************************************************************************";
vector<string> steps = {"You see three doors: Blue, Red and Green. Which one are you entering?: ", "You see two ways: left and right. Where do you go?: ", "You see several levers with animals: cat, frog, elephant and snake. Which one do you activate?: "};
vector<string> fails = {"you open the door and see a crocodile, waiting for you.\n\nGAME OVER","You go to the end of a cliff with amazing view. There is no cloud in the sky...\nexcept for you)\n\nGAME OVER", "You see the room wobbling and turning into SOMETHING ALIVE!\nThe room was a Mimic)\n\nGAME OVER!"};

void step(const vector<string>& vec, const int& iteration){
    cout << vec[iteration];
    string answer;
    cin >> answer;
    if (iteration == 2){
        cout << chest << endl;
        cout << "!!!The secret door opens and you see a chest with treasure!!!";
    }

    else if (answer.size() == 4){
        int num;
        num = iteration + 1;
        step(vec, num);
    }
    else{
        int num;
        num = iteration + 1;
        cout << fails[num];
    }


}

int main(){
    cout << "Treasure Island Game by Osiris" << endl << endl << endl;
    step(steps, 0); // Note the semicolon added here

    return 0; // Added for completeness
}




