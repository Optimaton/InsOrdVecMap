# InsOrdVecMap
A simple insertion order map like container without hashing or self balancing. Although it is a container on its own, you can think of it as vector of pair with subscript operator overloaded for accessing the mapped type based on the key.

***caveat:*** The traversal could be painfully slow. `O(n) worst case`.
 The intention here is to use it for small list of elements as subscripting the key will traverse the entire container
