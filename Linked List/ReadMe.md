# Practice Programs

This section conatins the following programs:

- Append k nodes
- Make, detect and remove Cyclic Linked List
- Deleting a node 
- Doubly Linked List
- Intersection point of 2 nodes
- Insert a node at head and tail
- Count pairs with sum X
- Reverse doubly linked list
- Reverse K nodes
- Reverse the linked list
- Rotate doubly linked list 
- Sort a linked list of 0s, 1s and 2s
- Merge in between linked lists
- Odd even linked list


### Append k nodes
This program ([here](AppendKNodes.cpp)) appends last k nodes to the beginning, e.g.

```
./Append-k-nodes

Input: 3
Output: 1->2->3->4->5->6->NULL
        4->5->6->1->2->3->NULL

```

### Cyclic Linked List

This program ([here](CyclicLinkedList.cpp)) makes a cyclic linked list, detects and removes the same, e.g.

```
./Cyclic-Linked-List

Output: 1->2->3->4->5->6->NULL
        0
        1
        1->2->3->4->5->6->NULL
        0

```

### Deleting a node

This program ([here](Deletion.cpp)) deletes a particular node in linked list, e.g.

```
./Deleting-a-node

Output: 1->2->3->4->NULL
        2->3->4->NULL

```

### Doubly Linked List

This program ([here](DoublyLinkedList.cpp)) shows insertion and deletion operation in doubly linked list, e.g.

```
./Doubly-Linked-List

Output: 1->2->3->4->5->6->NULL
        2->3->4->5->6->NULL

```

### Intersection point of 2 nodes

This program ([here](IntersectionPointOf2Nodes.cpp)) finds the intersection point of 2 nodes, e.g.

```
./Intersection-Point-Of-2-Nodes

Output: 1->2->3->4->5->6->NULL
        9->10->NULL
        3

```

### Insert a node 

This program ([here](LinkedList.cpp)) inserts a node at head or tail respectively, e.g.

```
./Insert-a-node

Output: 1->2->3->NULL
        1->2->3->4->NULL
        0
        
```

### Count pairs with sum X 

This program ([here](PairsumX.cpp)) counts all the pairs from both linked lists whose sum is equal to the given value X, e.g.

```
./Pairsum-X

Input:  6 3 15
        1 2 3 4 5 6
        11 12 13
Output: 1->2->3->4->5->6->NULL
        11->12->13->NULL
        3
        
```

### Reverse Doubly Linked List
 
 This program ([here](ReverseDLL.cpp)) reverses a doubly linked list, e.g.
 
 ```
 ./Reverse-doubly-linked-list
 
 Input:  6 
         1 2 3 4 5 6
 Output: 1->2->3->4->5->6->NULL
         6->5->4->3->2->1->NULL
        
 ```

 ### Reverse K Nodes
 
 This program ([here](ReverseKNodes.cpp)) reverses k nodes in linked list, e.g.
 
 ```
 ./Reverse-K-Nodes
 
 Output: 1->2->3->4->5->6->NULL
         2->1->4->3->6->5->NULL
        
 ```
 
 ### Reverse Linked List
 
 This program, ([here](Reverse_ll.cpp)) reverses the entire linked list, e.g.
 
 ```
 ./Reverse
 
  Output: 1->2->3->4->NULL
          4->3->2->1->NULL
          
 ```
 
 ### Rotate Doubly Linked List
 
 This program, ([here](RotateDLL.cpp)) rotates the doubly linked list clockwise by P nodes. Here P is a given positive integer and is smaller than the count of nodes(N) in a   linked list., e.g.
 
 ```
 ./Rotate-DLL
 
  Input:  6 2
          1 2 3 4 5 6
  Output: 1->2->3->4->5->6->NULL
          3->4->5->6->1->2->NULL
          
 ```

### Sort a linked list of 0s, 1s and 2s
 
 This program, ([here](SortLL_0s-1s-2s.cpp)) sorts a linked list containing values 0,1 and 2 only, e.g.
 
 ```
 ./Sort-a-linked-list-of-0s-1s-2s
 
  Input:  1
          17
          2 1 1 1 0 1 2 0 1 0 1 0 1 2 0 0 1
  Output: 0->0->0->0->0->0->1->1->1->1->1->1->1->1->2->2->2->NULL
          
 ```

### Merge in between linked lists
 
 This program, ([here](MergeInBetweenLL.cpp)) removes list1's nodes from the xth node to the yth node, and put list2 in their place, e.g.
 
 ```
 ./Merge-in-between-linked-lists
 
  Input:  5 4
          4 2 2 10 5
          1 2 3 4
          1 3
  Output: 4->2->2->10->5->NULL
          1->2->3->4->NULL
          4->1->2->3->4->5->NULL
          
 ```

### Odd even linked list
 
 This program, ([here](OddEvenLinkedList.cpp)) groups all the nodes with odd indices together followed by the nodes with even indices, and returns the reordered list, e.g.
 
 ```
 ./Odd-even-linked-list
 
  Input:  5
          1 2 3 4 5
  Output: 1->2->3->4->5->NULL
          1->3->5->2->4->NULL
          
 ```
