[//]: # (![Logo]&#40;./img/kitten-woof.svg&#41;)
<p align="center">
  <img alt="Logo" src="./img/kitten-woof.svg"/>
</p>


# chashtable
C Hash Table is a simple implementation of a hash table for C.<br>
Here's the list of functions:<br>


| Name           | Description                    |
|----------------|--------------------------------|
| `ht_create()`  | Creates empty hash table       |
| `ht_delete()`  | Deletes existing table         |
| `ht_get()`     | Gets value of a given key      |
| `ht_set()`     | Sets/creates key-value pair    |
| `ht_length()`  | Returns length of a hash table |
| `f1nva_hash()` | F1NVa hashing algorithm        |
| `gxhash()`     | GxHash hashing algorithm       |


## Contents
- [Installation and Usage](#installation-and-usage)
- [Testing](#testing)
- [Hash tables](#hash-tables)
- [Hash functions](#hash-functions)
  - [FNV1a hash](#fnv1a-hash)
  - [GxHash](#gxhash)
- [TODO](#todos) 

### Installation and Usage
```shell
git clone https://github.com/georghegel/chashtable.git
cd chashtable
make hashtable.a
# Next steps depends on your project.
# For project with main.c:
gcc main.c hashtable.a -o myprogram
```
### Testing
*needs to be implemented*

### Hash tables


### Hash functions
There is a lot of hash functions: cyclic redundancy checks, checksums, universal hash function families, non-cryptographic hash functions, keyed/unkeyed cryptographic hash functions.<br>

#### FNV1a hash
[[Wikipedia Article]](https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function)<br>
Key concepts:<br>
`FNV Prime: 1099511628211` (for 64-bit, unsigned integer)<br>
`FNV offset basis: 14695981039346656037` (for 64-bit, unsigned integer)<br>
`XOR` and `MUL` operations
As simple as this code:
```c
uint64_t fnv1a_hash(const char* key) {
  uint64_t hash = FNV_offset_basis;
  for (const char* p = key; *p; p++) {
    hash ^= (uint64_t)(unsigned char)(*p);
    hash *= FNV_prime;
  }
  return hash;
}
```

#### GxHash
*needs to be implemented*

### TODOs
1. Tests
2. Performance tests
3. GxHash hashing algorithm

