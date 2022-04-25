# 0x13-more\_singly\_linked\_lists.
How to use an manipulate linked lists using c programming language.

# Monday April 25 2022 Tasks.
## MANDATORY TASKS.

### Task 0. Print list.
This is a function that prints all the elements of a `listint_t` list.
* Prototype: `size_t print_listint(const listint_t *h);`.
* Return: the number of nodes in a linked list `listint_t`.
* File-name: `0-print_listint.c`.

### Task 1. List Length.
This is a function that returns the number of elements in a linked `listint_t` list.
* Prototype: `size_t listint_len(const listint_t *h);`.
* File-name: `1-listint_len.c`.

### Task 2. Add node.
This is a function that adds a new node at the beginning of a `listint_t` list.
* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`.
* Return: the address of the new element, or `NULL` if it failed.
* File-name: `2-add_nodeint.c`.

### Task 3. Add node at the end.
This is a function that adds a new node at the end of a `listint_t` list.
* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`.
* Return: The address of the new element, or `NULL` if it failed.
* File-name: `3-add_nodeint_end.c`.

### Task 4. Free list.
This is a function that frees a `listint_t` list.
* Prototype: `void free_listint(listint_t *head);`.
* File-name: `4-free_listint.c`.

### Task 5. Free.
This is a function that frees a `listint_t` list.
* Prototype: `void free_listint2(listint_t **head);`.
* The function sets the `head` to `NULL`.
* File-name: `5-free_listint2.c`.

### Task 6. Pop
This is a function that deletes the head of a `listint_t` linked list, and returns the head node's data (n).
* Prototype: `int pop_listint(listint_t **head);`.
* if the linked list is empty return `0`.
* File-name: `6-pop_listint.c`.

### Task 7. Get node at index.
This is a function that returns the nth node of a `listint_t` linked list.
* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`.
* Where `index` is the index of the node, starting at `0`.
* if the node does not exist, return `NULL`.
* File-name: `7-get_nodeint.c`.

### Task 8. Sum list.
This is a function that returns the sum of all the data (n) of a `listint_t` linked list.
* Prototype: `int sum_listint(listint_t *head);`.
* if the list is empty, return `0`.
* File-name: `8-sum_listint.c`.

### Task 9. Insert
This is a function that inserts a new node at a given position.
* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n);`.
* Where `index` is the index of the list where the node should be added.
* Index starts at `0`.
* Returns: The address of the new\_node, or `NULL` if it failed.
* if it is not possible to add the new node at index `index`, do not add the new node and return `NULL`.
* File-name: `9-insert_nodeint.c`.

### Task 10. Delete at index.
This is a function that deletes the node at index `index` of a `listint_t` linked list.
* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`.
* Where `index` is the index of the node that should be deleted. 
* Index starts at `0`.
* Returns: `1` if it succeeded, `-1` if it failed.
* File-name: `10-delete_nodeint.c`.

# ADVANCED TASKS.
