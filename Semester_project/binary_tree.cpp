#include <iostream>
#include <queue>

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
    while (curr != NULL) {
        switch(curr->data) {
            case -15:
                cout << "-15";
                break;
            case -14:
                cout << "-14";
                break;
            case -13:
                cout << "-13";
                break;
            case -12:
                cout << "-12";
                break;
            case -11:
                cout << "-11";
                break;
            case -10:
                cout << "-10";
                break;
            case -9:
                cout << "-9";
                break;
            case -8:
                cout << "-8";
                break;
            case -7:
                cout << "-7";
                break;
            case -6:
                cout << "-6";
                break;
            case -5:
                cout << "-5";
                break;
            case -4:
                cout << "-4";
                break;
            case -3:
                cout << "-3";
                break;
            case -2:
                cout << "-2";
                break;
            case -1:
                cout << "-1";
                break;
            case 0:
                cout << "You’re walking along a path and you approach the edge of a forest. There are two paths ahead of you, one leads into the forest and the other goes to the right along the edge of the trees.";
                break;
            case 1:
                cout << "1";
                break;
            case 2:
                cout << "2";
                break;
            case 3:
                cout << "3";
                break;
            case 4:
                cout << "Stooping down to pick up the mushroom. You get a sharp pungent smell of burnt orange peals. Your head snaps back as a wave of euphoria washes over you. A few seconds later a deep pounding pain in your head starts. Placing the mushroom down you drink some water and the pain fades. Feeling like yourself you contemplate if eating the mushroom would produce more euphoric effects. A strong urge to eat the mushroom washes over you. Do you give into your urges  (6) or do you continue along your path. (2).";
                break;
            case 5:
                cout << "5";
                break;
            case 6:
                cout << "You pick the mushroom up and take a large bite. As expected the feeling of euphoria crushes you knocking you to the ground. Sudden strong hallucinations of a large spider standing over you speaking to you in rhymes fill your vision. Frightened you scream and crawl off the path deep into the forest. You are so unaware of where you are going that you don’t notice the steep hill ahead of you. You fall down the hill rolling and tumbling until your head hits a tree and your vision goes dark. You snap awake, body halfway in a river, head pounding. Do you drink the water unknowing its sanitation (5) or do you attempt to find your water canteen  (7)?";
                break;
            case 7:
                cout << "7";
                break;
            case 8:
                cout << "8";
                break;
            case 9:
                cout << "9";
                break;
            case 10:
                cout << "10";
                break;
            case 11:
                cout << "11";
                break;
            case 12:
                cout << "12";
                break;
            case 13:
                cout << "13";
                break;
            case 14:
                cout << "14";
                break;
            case 15:
                cout << "15";
                break;
        }
        cout << "Would you like to go left or right? (l/r): ";
        char choice;
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