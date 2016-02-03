//
//  BinarySearchTree.hpp
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 2/2/16.
//  Copyright © 2016 Chris Magnacca. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include <cstdio>
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
};

Node* Insert(Node *root, int value);

void PrintInOrder(Node *root);
void PrintPreOrder(Node *root);
void PrintPostOrder(Node *root);
void PrintTopView(Node *root);
void PrintLeft(Node *node);
void PrintRight(Node *node);
void PrintLevelOrder(Node *root);
void PrintLevel(Node * root, int level);

int Height(Node *root);

#endif /* BinarySearchTree_hpp */
