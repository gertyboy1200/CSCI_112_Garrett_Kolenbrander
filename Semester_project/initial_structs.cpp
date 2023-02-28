#include <iostream>
#include <string>

using namespace std;

struct Character{
  string name, race, classType, realmOfOrigin;
};

const int MAXCHARACTERS = 6;
int numContacts = 0;
Character characters[MAXCHARACTERS];

Character initCharacter(string name = "",string race = "",string classType = "",
                 string realmOfOrigin = "") {
                   Character c;
                   c.name = name;
                   c.race = race;
                   c.classType = classType;
                   c.realmOfOrigin = realmOfOrigin;
                   return c;
                 }
                 
void printCharacter(Character c) {
	cout << "NAME:  " << c.name << endl << "RACE:  " << c.race << endl << "CLASS:  " << c.classType << endl <<
	  "REALM OF ORIGIN:  " << c.realmOfOrigin << endl;
}

void addCharacter(Character c) {
	characters[numContacts]=c;
	numContacts++;
}

void printCharacters() {
	for (int i=0;i<numContacts;i++){ 
	    cout << "CHARACTER " << i + 1 << ":" << endl;
        printCharacter(characters[i]);
    }
}


int main() {
    system("clear");
    int numOfCharacters;
    string name, race, classType, realmOfOrigin;
    cout << "Welcome to the storyline creator. I am here to create a story for you. But first i will need some information from you." << endl;
    cout << endl << endl << "Enter the number of characters you have (1-6):";
    cin >> numOfCharacters;
    
    for (int i = 0; i < numOfCharacters; i++){
        cout << "Enter the name of character number " << i + 1 << ":";
        cin >> name;
        cout << "Enter the race of character number " << i + 1 << ":";
        cin >> race;
        cout << "Enter the class of character number " << i + 1 << ":";
        cin >> classType;
        cout << "Enter the realm of origin of character number " << i + 1 << ":";
        cin >> realmOfOrigin;
        addCharacter(initCharacter(name, race, classType, realmOfOrigin));
    }

    printCharacters();



    return 0;
}