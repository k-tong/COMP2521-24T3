#include <stdbool.h>
struct hashTable{};
typedef struct hashTable HashTable;

HashTable HashTableNew(void);
void HashTableFree(HashTable ht);
void HashTableInsert(HashTable ht, int key, int value);
bool HashTableContains(HashTable ht, int key);
int  HashTableGet(HashTable ht, int key);
void HashTableDelete(HashTable ht, int key);
int  HashTableSize(HashTable ht);


// Design an  for a memoiser that supports memoisation 
// of an expensive single-argument function.
int expensive_function(HashTable cache, int n) {

    if (HashTableContains(cache, n)) {
        return HashTableGet(cache, n);
    } 

    int result = n;
    // do O(n^50) calculation which transforms n into another number
    // inserting key and calculated value into cache
    HashTableInsert(cache, n, result);

    return result;
}

/*
b)
One potential problem with memoisation is that the cache's 
memory usage can grow quite large when the function is called for lots of inputs. 
This is often solved by limiting the size of the cache and having a policy which can 
be used to pick entries to remove from the cache to make more room. 
What are some possible policies you could use?

We have a fixed size cache which fits N elements
what if we have to store a N + 1'th element

Different Strategies/ policies:

1. LFU Eviction (Least Frequently Used)
- we track how often the function is called with each key
- we get rid of the keys which are used the least

2. FIFO (First in First Out)
- the cache is a queue, first cached results get evicted

3. LRU (Least recently used)
- evict key which was used the least recently

c)
Can you think of how you would actually implement some of these policies?

1. Least Frequently
- need a data structure to keep track of how often each key is being used
- remove key based on which keys have been used the least

2. FIFO
- add a queue which keeps track of inserted keys
- remove keys from cache based on keys which come out of queue first


*/