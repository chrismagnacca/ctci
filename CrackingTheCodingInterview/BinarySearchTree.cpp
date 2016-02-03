//
//  BinarySearchTree.cpp
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 2/2/16.
//  Copyright © 2016 Chris Magnacca. All rights reserved.
//

#include "BinarySearchTree.hpp"

Node* Insert(Node *root, int value) {
    
    if(root == NULL) {
        Node *n = new Node();
        n->data = value;
        return n;
    }
    
    if(root->data < value) {
        root->left = Insert(root->left, value);
    } else {
        root->right = Insert(root->right, value);
    }
    
    return root;
}

int Height(Node *root) {
    if(root == NULL) {
        return 0;
    } else {
        int leftHeight = Height(root->left);
        int rightHeight = Height(root->right);
        
        if(leftHeight > rightHeight) {
            return leftHeight+1;
        } else {
            return rightHeight+1;
        }
    }
}

void PrintInOrder(Node *root) {
    if(root != NULL) {
        PrintInOrder(root->left);
        cout << root->data << " ";
        PrintInOrder(root->right);
    }
}

void PrintPreOrder(Node *root) {
    if(root != NULL) {
        cout << root-> data << " ";
        PrintInOrder(root->left);
        PrintInOrder(root->right);
    }
}

void PrintPostOrder(Node *root) {
    if(root != NULL) {
        PrintPostOrder(root->left);
        PrintPostOrder(root->right);
        cout << root->data << " ";
    }
}

void PrintTopView(Node *root) {
    if(root == NULL)
        return;
    
    PrintLeft(root->left);
    cout << root->data <<  " ";
    PrintRight(root->right);
}

void PrintLeft(Node *node) {
    if(node == NULL)
        return;
    
    PrintLeft(node->left);
    cout << node->data << " ";
}

void PrintRight(Node *node) {
    if(node == NULL)
        return;
    
    cout << node->data << " ";
    PrintRight(node->right);
}

void PrintLevelOrder(Node *root) {
    int height = Height(root);
    for(int i = 0; i <= height; i ++) {
        PrintLevel(root, i);
    }
}

void PrintLevel(Node *root, int level) {
    if(root == NULL)
        return;
    
    if(level == 1)
        cout << root -> data << " ";
    else if (level > 1) {
        PrintLevel(root->left, level - 1);
        PrintLevel(root->right, level - 1);
    }
}
