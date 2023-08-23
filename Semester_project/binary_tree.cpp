#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;


void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a node into the binary tree
Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to print the binary tree level by level
void printTree(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();

            cout << curr->data << " ";

            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
        }
        cout << endl;
    }
}

void traverse(Node* root) {
    Node* curr = root;
    string userInput;
    bool isValid = true;
    char choice;
    while (curr != NULL) {
        switch(curr->data) {
            case -15:
            clearScreen();
                cout << "you pick up the pail of water and drench the person lying on the floor." << endl\
                <<  "This causes them to start to melt and dissolve into the floor. The villager begins to scream at you telling you that you were never welcome and you will never escape." << endl\
                << "The walls begin to fall around you and the floor opens up under your feet dropping you into an endless pit where you are doomed to fall forever.";
                curr = NULL;
                break;
            case -14:
            clearScreen();
                cout << "-The villager thanks you for your service and guides you into the town." << endl\
                << "And brings you into their home, where their significant other is lying on the floor not moving." << endl\
                << "The villager says they just need to be woken up but nothing they ave done has worked." << endl\
                << "They appear the shimmer and shift on the floor. The villager says there may be some tools in their cellar outside that might help." << endl\
                << "There is also a pail of water to the left of the unconscious person. Do you throw the water on the person (l) or do you go find the cellar outside to the right (r)" << endl;
                cin >> choice;
                if (choice == 'l' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'r' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case -13:
            clearScreen();
                cout << "You approach the cellar door and open in decening into the darkness." << endl \
                << "You wake up lying in a field along the original patha nd you begin to walk again" << endl;
                curr = root;
                break;
            case -12:
            clearScreen();
                cout << "Your feet suddenly feel very light as you realize you have answered correctly." << endl \
                << "The wizard states:Well done, my clever friend," << endl \
                << "You've answered correctly, to the end." << endl \
                << "Follow the path of yellow light," << endl\
                << "And you'll be on your way, just right." << endl\
                << "May luck and magic be on your side," << endl\
                << "As you continue on your journey with pride." << endl\
                << "Take heed of all the wonders you'll find," << endl\
                << "And remember, you've passed the test of the mind." << endl\
                << "Continuing down the path you approach a town and a member approaches you from within the walls." << endl\
                << "Please we desperately need you help you are the first person we’ve seen in weeks. Do you go left and help them or do you move on to the right?" << endl;
                cin >> choice;
                if (choice == 'l' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'r' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case -11:
            clearScreen();
                cout << "A mysterious feeling overcomes you and the ghost of the villager appears infront of you telling you that they died because you didnt help them and you are doomed to walk until you die";
                curr = NULL;
                break;
            case -10:
            clearScreen();
                cout << "As you are walking out of the town along the road you spot a cave up on the mountain to your right." << endl \
                << "Do you check ou the cave to the right or stay on the path to the left?";
                cin >> choice;
                if (choice == 'l' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'r' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case -9:
            clearScreen();
                cout << "You climb up the steep mountain side to the cave entrance and as soon as you enter a white light shines around you and you and you wake up lying in a field along the original path and you begin to walk again";
                curr = root;
                break;
            case -8:
            clearScreen();
                cout << "deciding to stroll along the trees you begin to hum to yourself joyously. From within the trees a voice begins to hum the same tune as you." << endl\
                << "A man in a rugged brown hat with a gnarled wooden walking stick emerges out of the darkness and approaches you. He stops humming and blocks your path." << endl \
                << "You attempt to go around him but you cannot move. The old man opens his mouth and speaks;" << endl << \
                     "I am a wizard, with powers of old," << endl \
                     << "My magic can't be bought or sold." << endl\
                     << "But to continue on your quest," << endl\
                     << "You must answer my riddle with your best." << endl\
                    << "I am a word, that sounds like a place," << endl\
                    << "A direction you must go to win this race." << endl\
                    << "I'm also a color, bright and bold," << endl\
                    << "A hue that shines like precious gold." << endl\
                    << "Tell me, traveler, what am I?" << endl\
                    << "Which way will you go, will you fly?" << endl\
                    <<"If you guess right, you'll be on your way," << endl\
                    << "But answer wrong, and you'll have to stay." << endl\
                    << "So think hard, and choose with care," << endl\
                    << "The right direction that will take you there." << endl\
                    << "What am I, oh traveler dear?" << endl\
                    << "What's the word that will lead you clear?" << endl\
                    << "You must pick a color between red orange yellow green blue and purple to try and continue." << endl;
                cout << "Your choice: ";
                cin >> userInput;
                if (userInput == "yellow" || userInput == "Yellow"){
                    curr = curr->left;
                }else{
                    curr = curr->right;
                }
                break;
            case -7:
            clearScreen();
                cout << "As you decend into the darkness a warm feeling overtakes, you and you wake up lying in a field along the original path and you begin to walk again";
                curr = root;
                break;
            case -6:
            clearScreen();
                cout << "You enter the cave on the left and are medially swarmed by darkness, pitch to the point you can’t see 6 inches infant of your nose." << endl\
                << "A cold wind blows from the depths as you venture deeper into the depths. You stumble across what feels like a stick and you pick it up." << endl\
                << "The sticks end explodes with flame and you realize you are holding a torch. You look forward and see there are two holes in front of you." << endl\
                << "You cannot see the bottom of either. Do you jump in the left or the right hole?";
                cin >> choice;
                if (choice == 'l' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'r' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case -5:
            clearScreen();
                cout << "You have been falling for days and you begin to feel thirsty to the point of dehydration. You decide to attempt to sleep and never wake up.";
                break;
            case -4:
            clearScreen();
                cout << "suddenly a sword and armor appears on your body and the old man says to you" << endl\
                << "Oh, traveler, your answer was not right," << endl\
                << "Now face the dragon, in this daunting fight." << endl\
                << "You'll learn a lesson, to think before you speak," << endl\
                << "For actions have consequences, even for the meek." << endl\
                << "The dragon awaits, fierce and strong," << endl\
                << "Prepare yourself, for this battle will be long." << endl\
                << "Draw your sword, stand tall and brave," << endl\
                << "For only through courage can you hope to save." << endl\
                << "You are transported to the front of two large caves on the edge of a cliff. Do you go left (l) or right (r)";
                cin >> choice;
                if (choice == 'l' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'r' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case -3:
            clearScreen();
                cout << "As you start to run the dragon lifts open its immense wings, picks you up and flies you high into the sky." << endl \
                << "The thinning air makes it more and more difficult to breath until you wake up lying in a field along the original path and you begin to walk again";
                curr = root;
                break;
            case -2:
            clearScreen();
                cout << "In front of you stands a large dragon angry that you tried to enter its home." << endl \
                << "Do you try and fight the dragon (f) or do you attempt to run (r)?" << endl;
                cin >> choice;
                if (choice == 'r' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'f' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case -1:
            clearScreen();
                cout << "Drawing you sword preparing to fight the mighty beast the dragon breathes fire straight at you causing you to stumble backwards and fall of the cliff to your death";
                curr = NULL;
                break;
            case 0:
            clearScreen();
                cout << "You’re walking along a path and you approach the edge of a forest. There are two paths ahead of you, one leads into the forest and the other goes to the right along the edge of the trees." << endl \
                << "Would you like to go right (r) into the forest or left (l) along the trees?";
                cin >> choice;
                if (choice == 'l' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'r' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 1:
            clearScreen();
                cout << "You stroll to the base of the watterfall feeling the pounding water on your body and tasting the fresh cool water." << endl \
                << "Suddenly you hear a loud noise above you and as you turn to look up a large boulder plummets down and crushes you";
                curr = NULL;
                break;
            case 2:
            clearScreen();
                cout << "As you are walking the pain in your head returns and you spot a large waterfall with a beautiful cave behind it." << endl \
                << "Do you enter the cave (c) or drink from the waterfall (d)?" << endl;
                cin >> choice;
                if (choice == 'd' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'c' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 3:
            clearScreen();
                cout << "You stroll into the cave looking at the intricate cave paintings." << endl \
                << "As soon as you touch one of he drawings a white light shines around you and you and you wake up lying in a field along the original path and you begin to walk again";
                curr = root;
                break;
            case 4:
            clearScreen();
                cout << "Stooping down to pick up the mushroom. You get a sharp pungent smell of burnt orange peals." << endl \
                << "Your head snaps back as a wave of euphoria washes over you. A few seconds later a deep pounding pain in your head starts." << endl \
                << "Placing the mushroom down you drink some water and the pain fades." << endl \
                << "Feeling like yourself you contemplate if eating the mushroom would produce more euphoric effects." << endl \
                << "A strong urge to eat the mushroom washes over you. Do you give into your urges (y) or do you continue along your path (n)." << endl;
                cin >> choice;
                if (choice == 'y' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'n' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 5:
            clearScreen();
                cout << "Dunking your head into the river you take a big gulp. Pulling back from the river, the pain in your head fades." << endl \
                << "You breath a sigh of relief, but a deep thirst hits you, You drink from the river but your thirst only gets worse." << endl \
                << "The overwhelming urge to drink swarms you and you drink and drink. Eventually you have drank so much your body shuts down and you fall face first into the river never to wake up….";
                curr = NULL;
                break;
            case 6:
            clearScreen();
                cout << "You pick the mushroom up and take a large bite. As expected the feeling of euphoria crushes you knocking you to the ground." << endl \
                 << "Sudden strong hallucinations of a large spider standing over you speaking to you in rhymes fill your vision." << endl \
                 << "Frightened you scream and crawl off the path deep into the forest. You are so unaware of where you are going that you don’t notice the steep hill ahead of you." << endl \
                 << "You fall down the hill rolling and tumbling until your head hits a tree and your vision goes dark." << endl \
                 << "You snap awake, body halfway in a river, head pounding. Do you drink the water on your left unknowing its sanitation or do you attempt to find your water canteen up the hill to your right?" << endl;
                 cin >> choice;
                 if (choice == 'l' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'r' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 7:
            clearScreen();
                cout << "In searching for your canteen you stumble into a mysterious cave."<< endl \
                << "As you enter the cave a white light shines around you and you and you wake up lying in a field along the original path and you begin to walk again";
                curr = root;
                break;
            case 8:
            clearScreen();
                cout << "You walk into the forest and as you’re walking you stumble across a large purple and green mushroom growing on the edge of the path." << endl \
                << "Do you pick the mushroom on your right or do you continue down your path to the left?" << endl;
                cin >> choice;
                if (choice == 'l' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'r' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 9:
            clearScreen();
                cout << "The spider spins you around faster and faster until a white light begins to fill your vision and you wake up lying in a field along the original path and you begin to walk again";
                curr = root;
                break;
            case 10:
            clearScreen();
                cout << "You beg the beast to not harm you, you are just a weary traveler. The beast responds I am a spider, dark and looming," << endl \
                << "My web is strong, and always booming." << endl \
                << "But now I'm trapped, and need your aid," << endl \
                << "To solve this riddle, and be unchained." << endl \
                << "I am a thing, but I have no name," << endl \
                << "I am a sound, but I have no claim." << endl \
                << "I am a place, but I have no space," << endl \
                << "I am a time, but I have no trace."<< endl \
                << "Can you guess what I am, my friend?" << endl \
                << "If you get it right, my freedom will extend."<< endl \
                << "But beware, there are two answers to find," << endl \
                << "So think hard, and let your wit unwind." << endl \
                << "What am I, oh captive one?"<< endl \
                << "What's the word that has no tongue?"<< endl \
                << "The answer lies within your mind," << endl \
                << "So tell me now, before I'm confined. You think long and hard about the riddle. Two answers come to your brain. “Nowhere” and “Nothing” which do you choose?" << endl;
                cin >> userInput;
                if (userInput == "Nothing") {
                    curr = curr->left;
                }
                else if (userInput == "Nowhere") {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 11:
            clearScreen();
                cout << "The spider tells you that you have answered his riddle incorectly and you will now stay in his den for all eternity";
                curr = NULL;
                break;
            case 12:
            clearScreen();
                cout << "Strolling through the forest the sun starts to descend and the forest begins to make strange sounds." << endl \
                << "You hear a loud pop behind you. Whipping around to see what produced the noise you see nothing." << endl \
                << "Turning back around to continue walking you take one step and trip. You attempt to stand back up but you foot is caught in a thin clear strand." << endl \
                << "From the dark trees 8 dark legs creep out and and 8 eyes meet your gaze. Do you fight the beast (f) or do you attempt to communicate (c)?";
                cin >> choice;
                if (choice == 'c' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'f' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 13:
            clearScreen();
                cout << "You get you feet under you and run for your life to get to the cave." << endl \
                << "As soon as you enter a white light shines areoung you and you and you wake up lying in a field along the original path and you begin to walk again";
                curr = root;
                break;
            case 14:
            clearScreen();
                cout << "You pick up a stick lying next to you. You swing at the beasts legs but the stick breaks in half." << endl \
                << "Frantically you look around. You spot a small cave opening nearby with a faint glow emanating from the depths." << endl \
                << "Do you continue to fight with the broken stick and your hands (f) or do you attempt to enter the cave. (c)";
                cin >> choice;
                if (choice == 'c' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'f' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 15:
            clearScreen();
                cout << "You do your best to fight the beast but every move you make you get more and more ensnared in the bests webbing." << endl \
                << "The beast wraps you faster and faster until your whole body is covered. You a fighting and squirming to escape." << endl \
                << "Breathing hard you vision begins to tunnel until your vision goes dark and you fall asleep forever…";
                curr = NULL;
                break;
        }
    
    }
}


// Main function to create and use the binary tree
int main() {
    Node* root = NULL;

    // Insert nodes into the binary tree
    root = insert(root, 0);

    root = insert(root, -8);
    root = insert(root, 8);

    root = insert(root, -12);
    root = insert(root, -4);
    root = insert(root, 4);
    root = insert(root, 12);

    root = insert(root, -10);
    root = insert(root, -14);
    root = insert(root, -6);
    root = insert(root, -2);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 6);
    root = insert(root, 2);

    root = insert(root, -11);
    root = insert(root, -9);

    root = insert(root, -15);
    root = insert(root, -13);

    root = insert(root, -7);
    root = insert(root, -5);

    root = insert(root, -3);
    root = insert(root, -1);

    root = insert(root, 11);
    root = insert(root, 9);

    root = insert(root, 15);
    root = insert(root, 13);

    root = insert(root, 7);
    root = insert(root, 5);

    root = insert(root, 3);
    root = insert(root, 1);
    // Print the binary tree
    //printTree(root);
    traverse(root);

    return 0;
}