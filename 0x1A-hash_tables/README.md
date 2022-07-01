# 0x1A-hash_tables
A HashTable Data Structure.

## Task 0
Function: ```hash_table_t *hash_table_create(unsigned long int size);``` - creates a hash table.
* File-name: ```0-hash_table_create.c```.

## Task 1
Function: ```unsigned long int hash_djb2(const unsigned char *str);``` - implementing the djb2 algorithm.
* File-name: ```1-djb2.c```.

## Task 2
Function: ```unsigned long int key_index(const unsigned char *key, unsigned long int size);``` - gives you the index of a key.
* File-name: ```2-key_index.c```.

## Task 3
Function: ```int hash_table_set(hash_table_t *ht, const char *key, const char *value);``` - adds an element to the hash table.
* File-name: ```3-hash_table_set.c```.

## Task 4
Function: ```char *hash_table_get(const hash_table_t *ht, const char *key);``` - retrieves a value associated with a key.
* File-name: ````4-hash_table_get.c```.

## Task 5
Function: ```void hash_table_print(const hash_table_t *ht);``` - prints a hash table.
* File-name: ```5-hash_table_print.c```.
