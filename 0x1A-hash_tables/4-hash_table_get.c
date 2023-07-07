#include "hash_tables.h"

/**
 * hash_table_get - function that return the value associated with a key
 * @ht: the pointer to the hash table
 * @key: the key to be hashed
 * Return: the pointer to the value associated with the key or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;

if (ht == NULL || key == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
