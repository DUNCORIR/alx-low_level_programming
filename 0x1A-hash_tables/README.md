0x1A. C - Hash tables
Algorithm
Data structure

0. HashTable Data Structure - Introduction to Hash Tables
Key concepts:
A hash table is a data structure that stores key-value pairs.
It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

1. Hash function
A hash function takes input (or "key") and returns an integer, called a hash code. This hash code maps to a specific bucket in the hash table.
Key concepts:
Hash functions must be deterministic, meaning the same input always yields the same output.
Uniform distribution: It should distribute keys evenly across the hash table to minimize collisions.
A good hash function minimizes collisions (when two different inputs produce the same hash code).
Stable with small changes: Similar but distinct inputs should produce very different hash values to ensure proper distribution across the table.

2. Hash table
A hash table is a data structure that implements an associative array, mapping keys to values.
Key concepts:
Collisions: Situations where two keys generate the same hash code.
Collision resolution techniques:
Chaining: Each bucket points to a linked list of entries that map to the same index.
Open addressing: Instead of a linked list, when a collision occurs, the algorithm searches for the next open slot in the array.
Database indexing: Hash tables are commonly used to index large datasets for fast data retrieval.
Dictionaries and Maps: In many programming languages, hash tables are the underlying data structure for dictionaries or maps, where keys are mapped to values.
Caching: They are used in caching mechanisms to store and retrieve data quickly.
Symbol tables: Used in compilers or interpreters to store variable names and their associated values or memory addresses.
Sets: Hash tables can also be used to implement sets, where the main operation is to check if an element is present.

3. All about hash tables
Key concepts:
Efficiency: Hash tables offer an average time complexity of O(1) for insert, delete, and search operations, making them very efficient.
Load factor: A measure of how full the hash table is. When the load factor becomes too high, rehashing is needed.

4. Hash tables and not arrays?
Arrays are simple and work well for sequential or small datasets. However, arrays are inefficient for search, insert, and delete operations in large datasets (O(n) time complexity for unsorted arrays).
Key advantages of hash tables over arrays:
Hash tables provide faster lookups with O(1) average time complexity.
Arrays require sequential access, while hash tables use direct access via a hash function.

5. Collision and what are the main ways of dealing with collisions in the context of a hash table?
A collision happens when two distinct keys generate the same hash value and are mapped to the same index in the hash table.
Main ways of handling collisions:
Chaining: Each index in the hash table contains a linked list (or another data structure) of all elements with the same hash value. When a collision occurs, the new element is added to the list.
Open addressing: Instead of using a linked list, open addressing searches for the next available slot in the table when a collision occurs. Some techniques include:
Linear probing: Move sequentially in the table until an empty slot is found.
Quadratic probing: Move through the table by a quadratic interval.
Double hashing: Use a second hash function to determine the steps to move when a collision occurs.
