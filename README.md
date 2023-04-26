# `C`- Sorting algorithms & Big O

> data structures, algorithms <br/>
> covers: implementation of **sorting algorithms**, **asymptotic analysis**, and **BIG - O notation**

## Sorting Algorithms
**Sorting algorithms** are a type of algorithm that takes an array of elements and sorts them based on some defined order e.g. ascending or descending, or some form of a lexicographical operation.

> sample algorithms, for context: <br/>`bubble sort`, `selection sort`, `insertion sort`, `quick sort`, `merge sort`, `radix sort`<br/>
> focuses on the first 4


## Asymptotic Analysis
`Asymptotic analysis` is a way of gauging the performance of algorithms as the size of the `input` increases and not paying attention to the `machine specific implementation`. **Asymptotic analysis** is used to compare the performance of different algorithms and to choose the best algorithm for a given problem.

The most common way to express the asymptotic running time of an algorithm is using `Big-O` notation. **Big-O notation** is a way of classifying the asymptotic running time of an algorithm based on its growth rate.

Examples of **Big-O notations**:

- `O(1)`: this means that the algorithm's running time is constant, regardless of the size of the input.
- `O(n)`: (time complexity of linear growth), and it increases with the size of the input.
- `O(n^2)`: this means that the algorithm's running time is quadratic, and it increases quadratically with the size of the input.
- `O(2^n)`: the time complexity of exponential growth, and it increases exponentially with the size of the input
- `O(n!)`: the time complexity of factorial growth
- `O(log(n))`:  is the time complexity of logarithmic growth
- `O(nlog(n))`: the time complexity of `nlog(n)` growth, which is possible if we are using a balanced `binary search tree` and working with some array that is sorted.

---
![meme :)](./img/willy-wonka.png)
