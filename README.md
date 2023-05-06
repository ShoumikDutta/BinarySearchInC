# Binary Search Algorithm

This code contains an implementation of the Binary Search algorithm in C language. Binary search is an efficient algorithm for finding an item from a sorted list of items. It works by repeatedly dividing the list in half and searching in the half where the target item could be located.

## How to Use

To use this program, follow these steps:

1. Open a C compiler and create a new project.
2. Copy and paste the code into your new project.
3. Save the file as `binary_search.c`.
4. Compile and run the program.

The `search` function takes five parameters:
- `start`: The starting index of the search range.
- `end`: The ending index of the search range.
- `size`: The total size of the array.
- `key`: The value being searched for.
- `arr`: The array of integers to search. This array needs to be sorted in ascending order.

The `search` function returns a boolean value indicating whether or not the key was found in the array.

In the main function, an example array is created and the `search` function is called to find the index of the value `5` in the array. The result of the search is printed to the console.
