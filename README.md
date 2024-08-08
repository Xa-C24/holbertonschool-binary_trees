Arbres Binaires (Binary Trees)

	This README.md contains the files needed for the Binary Tree project. 
	This is our second group project, and we will be working in pairs. 
	Our team consists of Jean-Paul Dijon and Xavier Piedallu.

	To begin with, we decided to devide the work:

	_Jean-Paul : 	. Creat binary_trees.h file 
			. Code the even tasks

	_Xavier	:	. Creat README.md
			. Code the odd tasks


_Table of Contents:

	1_Introduction
	2_Structure of a Binary Tree
	3_Types of Binary Trees
	4_Basic Operations
	5_Tree Traversal
	6_Different type of binary tree
	7_Advantages and Disadvantages
	8_Implementation
	9_Example for use
	10_Concluion

1_Introduction

		A binary tree is a hierarchical data structure in which each node has at most two "children", 
	typically referred to as the left child and the right child.
	Binary trees are widely used in computer science to organize and store data efficiently.

2_Structure of a Binary Tree

		A binary tree consists of:

			Nodes: Elements that contain data
			Root: The top node of the tree
			Children: Each node can have a left and/or right child
			Leaves: Nodes without children
			Height: The length of the longest path from the root to a leaf

3_Types of Binary Trees

	1. Complete Binary Tree: All levels are fully filled, except possibly the last.
	2. Perfect Binary Tree: All levels are completely filled.
	3. Binary Search Tree (BST): For each node, all values in the left subtree are less, and all values in the right subtree are greater.
	4. Balanced Binary Tree: The height difference between the left and right subtrees of any node does not exceed 1.

4_Basic Operations

	_Insertion of a node
	_Deletion of a node
	_Searching for a node
	_Traversing the tree

5_Tree Traversal

	_Depth-First Traversal

		_Preorder (root, left, right)
		_Inorder (left, root, right)
		_Postorder (left, right, root)

	_Breadth-First Traversal

		_Level by level

6_Different type of binary tree

		_1. Basic Binary Tree  
		 
				 1
   				/ \
  			       2   3
				/ \
			       4   5          		A binary tree where each node has at most two children (left and right).

		
		_2 Arbre Binaire Complet

			     1
 			    / \
 			   2   3
			  / \  /
			 4   5 6			All levels are filled, except perhaps the last one which is filled from left to right.

		
		3_Perfect Binary Tree

			     1
   			    / \
 			   2   3
 			  / \ / \
			 4  5 6  7			All levels are completely filled.

		
		4_Binary Search Tree

		 	4
   		       / \
  	   	      2   6			For each node, all values ​​in the left subtree are less than the node's value, 
	  	     / \ / \			and all values ​​in the right subtree are greater. 
	            1  3 5  7				

		
		5_Balanced Binary Tree

		 	    3
   			   / \	
   			  2   5				The height difference between the left and right subtrees
			 /   / \			of each node does not exceed 1.
			1   4   6


		6_ Degenerate Binary Tree

			1
 			 \
  			  2
  		           \				Each parent node has only one child, resembling a linked list.
    		    3
      		     \
      		      4


		7_Binary Heap

		    10
   		   /  \
  		  9    8				A complete binary tree where each node is superior (or inferior) to its children.
 		 / \  / \
	        7  6 5  4

	
		8_Expression Tree
			
		     +
  		    / \
  		   *   3				Used to represent mathematical or logical expressions.
      	    / \
		   2   1

		9_Huffman tree

			 *				Used in data compression.
     	        / \
    	       *   c				Represents a Huffman tree for the characters `a`, `b`, and `c` 
   		        / \				 with respective frequencies.
   		      a    b					
   		       					
 		 

		10_Binary Decision Tree
 
 		       Est-ce un mammifère?
     		  /         \	
   			Oui           Non			Used in machine learning for classification and decision-making.
		        /               \
		Est-ce un chat?  Est-ce un oiseau?
 		  /     \           /      \
		Oui    Non       Oui      Non


				These examples show different structures and applications of binary trees. 
				The choice of tree type depends on the specific needs of the application or problem to be solved.


![Binary Tree v1  drawio drawio](https://media.discordapp.net/attachments/385020139839422464/1271074727116537877/Binary_[…]451c0ccd4253b62f0b2385c&=&format=webp&width=973&height=825)



7_Advantages and Disadvantages

	Advantages:
	
		_Natural hierarchical structure
		_Efficient searching, insertion, and deletion (for balanced BSTs)
		_Flexibility in data representation

	Disadvantages:

		_Can become unbalanced, reducing performance
		_Can become unbalanced, reducing performance

8_Implementation

	Exemple structure for a binary tree node in C:

			struct Node 
		{
    		int data;
    		struct Node* left;
   			struct Node* right;
		};
9_Example for use

	_Expression trees in compilers
	_Decision trees in artificial intelligence
	_Compression algorithms
	_Databases
	_Games

10_Conclusion

	Binary trees are a fundamental data structure in computer science, offering a balance between 
	simplicity and power for many applications.


Author

Jean-Paul Dijon  Xavier Piedallu
