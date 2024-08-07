More singly linked lists

0.size_t print_listint(const listint_t *h);Function that prints all the elements of a listint_t list.
1.size_t listint_len(const listint_t *h);Function that returns the number of elements in a linked listint_t list.
2.listint_t *add_nodeint(listint_t **head, const int n);Function that adds a new node at the beginning of a listint_t list.
3.listint_t *add_nodeint_end(listint_t **head, const int n);Function that adds a new node at the end of a listint_t list.
4.void free_listint(listint_t *head);Function that frees a listint_t list.
5.void free_listint2(listint_t **head);Function that frees a listint_t list.
6.int pop_listint(listint_t **head);Function that deletes the head node of a listint_t linked list, and returns the head node’s
7.listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);Function that returns the nth node of a listint_t linked list.
8.int sum_listint(listint_t *head);Function that returns the sum of all the data (n) of a listint_t linked list.
9.listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);Function that inserts a new node at a given position.
10.int delete_nodeint_at_index(listint_t **head, unsigned int index);Function that deletes the node at index index of a listint_t linked list.
11.listint_t *reverse_listint(listint_t **head); Function that reverses a listint_t linked list.
12.size_t print_listint_safe(const listint_t *head);Function that prints a listint_t linked list.
13.size_t free_listint_safe(listint_t **h); Function that frees a listint_t list.
14.listint_t *find_listint_loop(listint_t *head); Function that finds the loop in a linked list.
