//
//  TestLinkedList.cpp
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/23/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//
#include "LinkedListTemplate.h"
#include <gtest/gtest.h>

using namespace std;

class LinkedListTest : public ::testing::Test {
    protected:
    
    virtual void SetUp(){
        l1_.InsertNode(1);
        l1_.InsertNode(2);
        l1_.InsertNode(3);
    }
    
    virtual void TearDown(){
    }
    
    DataStructures::LinkedList<int> l0_;
    DataStructures::LinkedList<int> l1_;
};

TEST_F(LinkedListTest, IsInitiallyEmpty) {
    EXPECT_EQ(0, l0_.Size());
}

TEST_F(LinkedListTest, IsEmptyReturnsTrueForEmptyList) {
    EXPECT_EQ(1, l0_.IsEmpty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
