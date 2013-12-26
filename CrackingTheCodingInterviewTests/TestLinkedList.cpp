//
//  TestLinkedList.cpp
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/23/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//

#include <gtest/gtest.h>
#include "LinkedListTemplate.h"

using namespace std;

class LinkedListTest : public ::testing::Test {
    protected:
    
    virtual void SetUp(){
        l1_.InsertNode(1);
        l1_.InsertNode(2);
        l1_.InsertNode(3);
    }
    
    //virtual void TearDown(){}
    
    DataStructures::LinkedList<int> l0_;
    DataStructures::LinkedList<int> l1_;
    DataStructures::LinkedList<int> l2_;
};

TEST_F(LinkedListTest, IsInitiallyEmpty) {
    EXPECT_EQ(0, l0_.Size());
}

TEST_F(LinkedListTest, IsEmptyReturnsTrueForEmptyList) {
    EXPECT_EQ(1, l0_.IsEmpty());
}

TEST_F(LinkedListTest, IsEmptyReturnsFalseForListWithNodes) {
    EXPECT_EQ(0, l1_.IsEmpty());
}

TEST_F(LinkedListTest, SizeReturnsNumberOfNodesInList) {
    EXPECT_EQ(3, l1_.Size());
}

TEST_F(LinkedListTest, InsertNodeInsertsListNode) {
    EXPECT_EQ(0, l2_.Size());
    l2_.InsertNode(0);
    EXPECT_EQ(1, l2_.Size());
}

TEST_F(LinkedListTest, InsertNodeReturnsTrueOnSuccess) {
    EXPECT_EQ(1, l2_.InsertNode(1));
}

TEST_F(LinkedListTest, RemoveNodeRemovesListNode) {
    l2_.InsertNode(1);
    EXPECT_EQ(1, l2_.Size());
    l2_.RemoveNode(1);
    EXPECT_EQ(0, l2_.Size());
}

TEST_F(LinkedListTest, RemoveNodeReturnsFalseIfNodeNotFound){
    EXPECT_EQ(0, l0_.RemoveNode(-1));
}

