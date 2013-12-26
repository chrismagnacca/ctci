//
//  TreeNodeTemplate.h
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/23/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//

<<<<<<< HEAD
<<<<<<< HEAD
#ifndef __CrackingTheCodingInterview__TreeNodeTemplate__
#define __CrackingTheCodingInterview__TreeNodeTemplate__
=======
#ifndef CrackingTheCodingInterview_TreeNodeTemplate_h
#define CrackingTheCodingInterview_TreeNodeTemplate_h
>>>>>>> a8d99597c2666495672a9d2a9df79279ded50fc2
=======
#ifndef CrackingTheCodingInterview_TreeNodeTemplate_h
#define CrackingTheCodingInterview_TreeNodeTemplate_h
>>>>>>> a8d99597c2666495672a9d2a9df79279ded50fc2

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


<<<<<<< HEAD
<<<<<<< HEAD
#endif  /* defined(__CrackingTheCodingInterview__TreeNodeTemplate__) */

=======
#endif
>>>>>>> a8d99597c2666495672a9d2a9df79279ded50fc2
=======
#endif
>>>>>>> a8d99597c2666495672a9d2a9df79279ded50fc2
