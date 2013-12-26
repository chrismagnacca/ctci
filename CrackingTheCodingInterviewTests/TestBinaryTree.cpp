//
//  TestBinaryTree.cpp
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/26/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//
#include <gtest/gtest.h>
#include "BinaryTreeTemplate.h"

using namespace std;

class BinaryTreeTest : public ::testing::Test {
    protected:
    
    virtual void SetUp(){
        b0_.InsertTreeNode(0, b0_.root);
        b0_.InsertTreeNode(1, b0_.root);
        b0_.InsertTreeNode(2, b0_.root);
    }
    
    virtual void TearDown(){
    }
    
    DataStructures::BinaryTree<int> b0_;
    DataStructures::BinaryTree<int> b1_;
    
};

TEST_F(BinaryTreeTest, IsInitiallyEmpty) {
    EXPECT_EQ(1, b1_.IsEmpty());
}

TEST_F(BinaryTreeTest, IsEmptyReturnsFalseForTreeWithNodes) {
    EXPECT_EQ(0, b0_.IsEmpty());
}

TEST_F(BinaryTreeTest, CountNodesReturnsNumberOfNode) {
    EXPECT_EQ(3, DataStructures::BinaryTree<int>::CountNodes(b0_.root));
}
