# Heap Insertion in C++

This project demonstrates how to implement **Max Heap** and **Min Heap insertion manually in C++** using arrays.

## Topics Covered

- Max Heap
- Min Heap
- Heap insertion


## Heap Representation

This implementation uses **1-based indexing**.

For a node at index i:

- Parent = i / 2
- Left Child = 2 * i
- Right Child = 2 * i + 1

## Max Heap

In a Max Heap:

> The parent must always be greater than or equal to its children.

### Insertion Algorithm

1. Increase the heap size.
2. Insert the new element at the end of the heap.
3. Find its parent using i / 2.
4. Compare the new element with its parent.
5. If the child is greater than the parent, swap them.
6. Continue moving upward until the heap property is satisfied.

### Max Heap Example

Input:

6
12 23 34 45 56 66

Output:

Max Heap: 66 23 12 45 56 34

## Min Heap

In a Min Heap:

> The parent must always be smaller than or equal to its children.

### Insertion Algorithm

1. Increase the heap size.
2. Insert the new element at the end of the heap.
3. Find its parent using i / 2.
4. Compare the new element with its parent.
5. If the child is smaller than the parent, swap them.
6. Continue moving upward until the heap property is satisfied.

### Min Heap Example

Input:

6
12 23 34 45 56 66
50 30 40 10 20 60

Output:

Min Heap: 45 56 34 12 23 66

## Difference Between Max Heap and Min Heap

| Max Heap | Min Heap |
|----------|----------|
| Parent ≥ Child | Parent ≤ Child |
| Largest element at root | Smallest element at root |
