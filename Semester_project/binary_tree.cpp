#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Node class for the binary tree
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
    char choice;
    while (curr != NULL) {
        switch(curr->data) {
            case -15:
                cout << "-15";
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
            case -14:
                cout << "-14";
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
            case -13:
                cout << "-13";
                
                curr = root;
                break;
            case -12:
                cout << "-12";
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
            case -11:
                cout << "-11";
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
            case -10:
                cout << "-10";
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
            case -9:
                cout << "-9";
                curr = root;
                break;
            case -8:
                cout << "-deciding to stroll along the trees you begin to hum to yourself joyously. From within the trees a voice begins to hum the same tune as you. A man in a rugged brown hat with a gnarled wooden walking stick emerges out of the darkness and approaches you. He stops humming and blocks your path. You attempt to go around him but you cannot move. The old man opens his mouth and speaks; “I am a wizard, with powers of old,\
                    My magic can't be bought or sold.\
                    But to continue on your quest,\
                    You must answer my riddle with your best.\
                    I am a word, that sounds like a place,\
                    A direction you must go to win this race.\
                    I'm also a color, bright and bold,\
                    A hue that shines like precious gold.\
                    Tell me, traveler, what am I?\
                    Which way will you go, will you fly?\
                    If you guess right, you'll be on your way,\
                    But answer wrong, and you'll have to stay.\
                    So think hard, and choose with care,\
                    The right direction that will take you there.\
                    What am I, oh traveler dear?\
                    What's the word that will lead you clear?”\
                    You must pick a color between red orange yellow green blue and purple to try and continue." << endl;
                cin >> userInput;
                if (userInput == "yellow" || userInput == "Yellow"){
                    curr = curr->left;
                }else{
                    curr = curr->right;
                }
                break;
            case -7:
                cout << "-7";
                curr = root;
                break;
            case -6:
                cout << "-6";
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
            case -5:
                cout << "-5";
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
            case -4:
                cout << "-4";
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
            case -3:
                cout << "-3";
                curr = root;
                break;
            case -2:
                cout << "-2";
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
            case -1:
                cout << "-1";
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
            case 0:
                cout << "You’re walking along a path and you approach the edge of a forest. There are two paths ahead of you, one leads into the forest and the other goes to the right along the edge of the trees.";
                break;
            case 1:
                cout << "1";
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
            case 2:
                cout << "2";
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
            case 3:
                cout << "3";
                curr = root;
                break;
            case 4:
                cout << "Stooping down to pick up the mushroom. You get a sharp pungent smell of burnt orange peals. \
                Your head snaps back as a wave of euphoria washes over you. A few seconds later a deep pounding pain \
                in your head starts. Placing the mushroom down you drink some water and the pain fades. \
                Feeling like yourself you contemplate if eating the mushroom would produce more euphoric effects. \
                A strong urge to eat the mushroom washes over you. Do you give into your urges (y) or do you continue along your path. (n)).";
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
                cout << "5";if (choice == 'y' && curr->left != NULL) {
                    curr = curr->left;
                }
                else if (choice == 'n' && curr->right != NULL) {
                    curr = curr->right;
                }
                else {
                    cout << "Invalid choice, try again." << endl;
                }
                break;
            case 6:
                cout << "You pick the mushroom up and take a large bite. As expected the feeling of euphoria crushes you knocking you to the ground.\
                 Sudden strong hallucinations of a large spider standing over you speaking to you in rhymes fill your vision. \
                 Frightened you scream and crawl off the path deep into the forest. You are so unaware of where you are going \
                 that you don’t notice the steep hill ahead of you. You fall down the hill rolling and tumbling until your head hits \
                 a tree and your vision goes dark. You snap awake, body halfway in a river, head pounding. Do you drink the water \
                 unknowing its sanitation (5) or do you attempt to find your water canteen  (7)?";
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
            case 7:
                cout << "7";
                curr = root;
                break;
            case 8:
                cout << "8";
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
            case 9:
                cout << "9";
                curr = root;
                break;
            case 10:
                cout << "10";
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
            case 11:
                cout << "11";
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
            case 12:
                cout << "12";
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
            case 13:
                cout << "13";
                curr = root;
                break;
            case 14:
                cout << "14";
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
            case 15:
                cout << "15";
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
        }
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
    printTree(root);
    traverse(root);

    return 0;
}