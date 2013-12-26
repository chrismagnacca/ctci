//
//  NodeTemplate.h
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/23/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//
#ifndef __CrackingTheCodingInterview__NodeTemplate__
#define __CrackingTheCodingInterview__NodeTemplate__

namespace DataStructures {
	template <typename T>
	class LinkedList;
    
	template<typename T>
	class Node {
		friend class LinkedList<T>;
		
    public:
        Node(T);
        T data;
        Node* next;
        Node* prev;
	};
    
	template<typename T>
	Node<T>::Node(T value) {
		next = 0;
		prev = 0;
		data = value;
	}
};

#endif  /* defined(__CrackingTheCodingInterview__NodeTemplate__) */
