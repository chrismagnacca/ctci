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
        void InsertTreeNode(T);
        void InOrderPrint();
        void PostOrderPrint();
        TreeNode<T>* Search(T);
        bool IsEmpty();
        
    private:
        TreeNode<T> *root;
	};
};

#endif /* defined(__CrackingTheCodingInterview__BinaryTreeTemplate__) */

