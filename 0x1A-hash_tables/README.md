0. a function that creates a hash table.

   Prototype: hash_table_t \*hash_table_create(unsigned long int size);
   where size is the size of the array
   Returns a pointer to the newly created hash table
   If something went wrong, your function should return NULL

1. a hash function implementing the djb2 algorithm.

   Prototype: unsigned long int hash_djb2(const unsigned char \*str);
   You are allowed to copy and paste the function from this page
