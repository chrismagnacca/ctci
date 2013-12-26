//
//  LinkedListTemplate.h
//  CrackingTheCodingInterview
//
//  Created by Chris Magnacca on 12/23/13.
//  Copyright (c) 2013 Chris Magnacca. All rights reserved.
//

#ifndef __CrackingTheCodingInterview__LinkedListTemplate__
#define __CrackingTheCodingInterview__LinkedListTemplate__

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<iostream>
#include"NodeTemplate.h"

namespace DataStructures {
    
	template<typename T>
	class LinkedList {
    public:
        LinkedList();
        ~LinkedList();
        bool InsertNode(T);
        bool RemoveNode(T);
        int Size();
        void Print();
        bool IsEmpty();
        
    private:
        Node<T> *head;
	};
    
	template<typename T>
	LinkedList<T>::LinkedList() {
        head = new Node<T>(-1);
	}
	
	template<typename T>
	LinkedList<T>::~LinkedList() {
		if(!IsEmpty()) {
			Node<T> *temp;
			Node<T> *ptr = head;
			while(ptr != 0) {
				temp = ptr;
				ptr = ptr -> next;
				delete temp;
			}
		}
	}
	
	template<typename T>
	bool LinkedList<T>::InsertNode(T val) {
		Node<T> *node = new Node<T>(val);
		
		if(!node) { return false; } // unable to allocate memory
		
		if(head -> next == 0) {
			head -> next = node;
			node -> next = 0;
			node -> prev = head;
		} else {
			Node<T> *ptr = head;
            
			node -> next = ptr -> next;
			(ptr -> next) -> prev = node;
			node -> prev = ptr;
			ptr -> next = node;
		}
		return true;
	}
	
	template<typename T>
	bool LinkedList<T>::RemoveNode(T val) {
		Node<T> *ptr = head;
		
		while(ptr -> next != 0) {
			if((ptr -> next) -> data == val) {
				Node<T> *node = ptr -> next;
                
				if(node->prev == 0) { // node is the first node
					ptr = node -> next;
				} else {
					node -> prev -> next = node -> next;
				}
				
				if(node->next == 0) { // node is the last node
					node -> next = node -> prev;
				} else {
					node -> next -> prev = node -> prev;
				}
                
				delete node;
				
				return true;
			} else {
				ptr = ptr -> next;
			}
		}
		
		return false;
	}
	
	template<typename T>
	int LinkedList<T>::Size() {
		
		int size = 0;
		Node<T> *ptr = head;
		
		if(ptr -> next != 0) {
			ptr = head -> next;
		} else {
			return size;
		}
        
		while(ptr != NULL) {
			size++;
			ptr = ptr -> next;
		}
		return size;
	}
    
	template<typename T>
	void LinkedList<T>::Print() {
		Node<T> *ptr = head;
		
		if(ptr -> next != 0) { ptr = head -> next; }
		
		while(ptr != NULL) {
			std::cout << ptr -> data;
			std::cout << '\n';
			
			ptr = ptr -> next;
		}
	}
	
	template<typename T>
	bool LinkedList<T>::IsEmpty() {
		return (head->next == 0);
	}
};


#endif /* defined(__CrackingTheCodingInterview__LinkedListTemplate__) */
