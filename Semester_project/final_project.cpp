#include <iostream>
#include <string>

using namespace std;

class Character {
	string name, race, classType, realmOfOrigin;
    int postition;
	public:
	Character(string newName="",string newRace="",string newClassType="", string newRealmOfOrigin="", int newPosition = 0) {
		name=newName;
		race=newRace;
		classType=newClassType;
		realmOfOrigin=newRealmOfOrigin;
        postition = newPosition;
	}
	bool operator <(const Character &other) const {
		/*if (last==other.last) 
		  return first<other.first;
		else
		  return last<other.last;*/
		return postition<other.postition;
	}
	friend ostream & operator <<(ostream &out,const Character &c) {
		return out << "Name: " << c.name << " Race: " << c.race <<endl
		  << "Class Type: " << c.classType << " Realm of Origin: " << c.realmOfOrigin  << "position: " << c.postition << endl;
	}
	//friend istream & operator >>(istream &in,Person &p) {
	//}
	bool operator >(const Character &other) const {
		return other<(*this);
	}
	bool operator !=(const Character &other) const {
		return other<(*this) || (*this)<other;
	}
	bool operator ==(const Character &other) const {
		return !((*this)!=other);
	}
	bool operator <=(const Character &other) const {
		return (*this)<other || (*this)==other;
	}
	bool operator >=(const Character &other) const {
		return (*this)>other || (*this)==other;
	}
};

class BinaryNode{
    Character c;
    BinaryNode *left, *right;
    public:
    BinaryNode(const Character &newC, BinaryNode *newLeft = NULL, BinaryNode *newRight = NULL){
        c = newC;
        left = newLeft;
        right = newRight;
    }
    BinaryNode(const BinaryNode &other){
    }
    void add(BinaryNode *lowerTree){
        if(lowerTree->c<c){
            if(left == NULL) left = lowerTree;
            else left -> add(lowerTree);

        } else {  // go to the right
			if (right==NULL) right = lowerTree;
			else right->add(lowerTree);
		}
    }
    
    void add(const Character &newC){
            BinaryNode *temp=new BinaryNode(newC);
            add(temp);
        }
    Character find(int position) {
		Character target("","","","",position);
		if (c==target) return c;
		if (target<c) {
			if (left!=NULL) return left->find(position);
			else return target;
		} else {
			if(right!=NULL) return right->find(position);
			else return target;
		}
	}

    friend ostream & operator <<(ostream &out,const BinaryNode *value) {
		out << value->c << 
		  "left" << hex << (long)value->left << 
		  "right " << hex << (long)value->right << dec << endl;
		  if (value->left!=NULL) out << value->left;
		  if (value->right!=NULL) out << value->right;
		return out;
	} 
};



int main(){

    BinaryNode root(Character("Garrett", "human", "mage", "earth", 0));
    BinaryNode add(Character("Zorthar", "Troll", "Brezerker", "Detroit", 5));
    cout << &root;

    Character c=root.find(5);
  cout << c;



    return 0;
}




























/*

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
        //addCharacter(initCharacter(name, race, classType, realmOfOrigin));
    }

    Character c;

    //printCharacters();



    return 0;
}
*/