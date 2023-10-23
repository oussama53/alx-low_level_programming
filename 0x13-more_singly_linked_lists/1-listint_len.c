#include "lists.h"
/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 * 
 * Return: size of lists
 */
 size_t listint_len(const listint_t *h)
 {
     size_t i = 0;
     while (h)
     {
         h = h->next;
         i++;
     }
     return (i);
 }
