//
//  TreeNodeTemplate.h
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/23/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//

#ifndef CrackingTheCodingInterview_TreeNodeTemplate_h
#define CrackingTheCodingInterview_TreeNodeTemplate_h

namespace DataStructures {
	template <typename T>
	class BinaryTree;
    
	template <typename T>
	class TreeNode {
		friend class BinaryTree<T>;
		
    public:
        TreeNode(T);
        T data
        TreeNode* left;
        TreeNode* right;
	};
	
	template<typename T>
	TreeNode<T>::TreeNode(T value) {
		left = 0;
		right = 0;
		data = value;
	}
};


#endif
