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
 
 Input: 6 
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
  Output: 1->2->3->4->NULL
          4->3->2->1->NULL
          
 ```
