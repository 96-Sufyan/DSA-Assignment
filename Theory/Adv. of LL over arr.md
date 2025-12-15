Advantages of Linked List over Array

1.Dynamic Size:

A linked list does not have a fixed size and can grow or shrink during program execution.
For example, in a music playlist application, new songs can be added or removed without worrying about predefined storage limits.
Another example is a student record system where the number of students is not known in advance.

2.Efficient Insertion and Deletion:

Insertion and deletion in a linked list are efficient because only pointers are updated, and elements do not need to be shifted.
For example, inserting a new node at the beginning of a linked list takes constant time.
In contrast, inserting an element in the middle of an array requires shifting many elements.

3.Better Memory Utilization:

Linked lists allocate memory only when needed, which avoids memory wastage.
For example, in a dynamic task management system, memory is allocated only for active tasks.
Arrays may waste memory if extra space is reserved but not fully used.

4.No Need for Contiguous Memory:

Linked list elements are stored in non-contiguous memory locations and are connected using pointers.
For example, when working with large data sets, contiguous memory may not be available for an array.
Linked lists can still function efficiently by using scattered memory locations.

5.Ease of Reordering:

Reordering elements in a linked list is easier because it only involves changing pointer links.
For example, sorting a linked list can be done by adjusting pointers instead of moving data.
In arrays, reordering elements requires copying or shifting data, which is more time-consuming.
