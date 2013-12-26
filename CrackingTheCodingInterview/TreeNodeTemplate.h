//
//  TreeNodeTemplate.h
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/23/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//
#ifndef __CrackingTheCodingInterview__TreeNodeTemplate__
#define __CrackingTheCodingInterview__TreeNodeTemplate__

namespace DataStructures {
	template <typename T>
	class BinaryTree;
    
	template <typename T>
	class TreeNode {
		friend class BinaryTree<T>;
		
    public:
        TreeNode(T);
        T data;
        TreeNode* left;
        TreeNode* right;
	};
	
	template<typename T>
	TreeNode<T>::TreeNode(T value) {
		left = NULL;
		right = NULL;
		data = value;
	}
};


#endif  /* defined(__CrackingTheCodingInterview__TreeNodeTemplate__) */
