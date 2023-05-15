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
                cout << "Welcome to the forest";
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
                cout << "4";
                break;
            case 5:
                cout << "5";
                break;
            case 6:
                cout << "6";
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