//
//  BinaryTreeTemplate.h
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/23/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//
#ifndef __CrackingTheCodingInterview__BinaryTreeTemplate__
#define __CrackingTheCodingInterview__BinaryTreeTemplate__

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include"TreeNodeTemplate.h"

namespace DataStructures {
    
    template<typename T>
	class BinaryTree {
    public:
        BinaryTree();
        ~BinaryTree();
        bool InsertTreeNode(T, TreeNode<T> *&parent);
        static void InOrderPrint(TreeNode<T> *parent);
        static void PostOrderPrint(TreeNode<T> *parent);
        TreeNode<T>* Search(T);
        bool IsEmpty();
        static int CountNodes(TreeNode<T> *parent);
        
        TreeNode<T> *root;
	};
    
    
	template<typename T>
	BinaryTree<T>::BinaryTree() {
        root = NULL;
	}
	
	template<typename T>
	BinaryTree<T>::~BinaryTree() {
	}
    
    template<typename T>
    void BinaryTree<T>::InOrderPrint(TreeNode<T> *parent) {
        if(parent != NULL) {
            InOrderPrint(parent->left); // print treenodes left subtree
            std::cout <<  parent -> data; //print root treenode
            InOrderPrint(parent->right); // print treenodes right subtree
        }
    }
    
    template<typename T>
    void BinaryTree<T>::PostOrderPrint(TreeNode<T> *parent) {
        if(parent != NULL) {
            PostOrderPrint(parent->left); // print treenodes left subtree
            PostOrderPrint(parent->right); // print treenodes right subtree
            std::cout << parent -> data << " "; // print root treenode
        }
    }
    
    template<typename T>
    bool BinaryTree<T>::InsertTreeNode(T val, TreeNode<T> *&parent) {
        if(parent == NULL) {
            parent = new TreeNode<T>(val);
            parent -> data = val;
            return true;
        } else if (val < root -> data) {
            InsertTreeNode(val, parent -> left);
        } else {
            InsertTreeNode(val, parent -> right);
        }
        return false;
    }
	
    
	template<typename T>
    int BinaryTree<T>::CountNodes(TreeNode<T> *parent) {
        if(parent == NULL) {
            return 0;
        } else {
            int count = 1;
            
            count += CountNodes(parent -> left); // add nodes in left subtree
            count += CountNodes(parent -> right); // add nodes in right subtree
            
            return count;
        }
	}
    
    
	template<typename T>
	bool BinaryTree<T>::IsEmpty() {
        return root == NULL;
	}
    
};

#endif /* defined(__CrackingTheCodingInterview__BinaryTreeTemplate__) */

