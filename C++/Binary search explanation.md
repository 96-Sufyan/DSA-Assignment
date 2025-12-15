Binary Search Explanation: 

Binary search is an efficient searching algorithm that works on a sorted list of elements. Instead of checking each element one by one, it repeatedly divides the list into two halves and reduces the search space. This significantly improves performance compared to linear search.
The algorithm begins by setting two pointers. The first pointer, called left, points to the beginning of the list, and the second pointer, called right, points to the end of the list. These pointers define the current range in which the target element may exist.
In each iteration, the middle index of the current range is calculated using the formula mid = left + (right - left) / 2. The element at this middle position is then compared with the target element.
If the middle element is equal to the target, the search is successful and the index of the middle element is returned. This means the target element has been found.
If the middle element is smaller than the target, it means the target cannot be in the left half of the list. Therefore, the algorithm discards the left half by moving the left pointer to mid + 1.
If the middle element is greater than the target, it means the target cannot be in the right half of the list. In this case, the algorithm discards the right half by moving the right pointer to mid - 1.
This process of dividing the list and discarding half of it continues in a loop. With each iteration, the search range becomes smaller, making the algorithm very efficient.
If at any point the left pointer becomes greater than the right pointer, it means all possible positions have been checked and the target element does not exist in the list. In such a case, the function returns -1 to indicate that the element was not found.
Binary search has a time complexity of O(log n), which makes it much faster than linear search for large datasets. However, it is important to note that binary search can only be applied to a list that is already sorted.
