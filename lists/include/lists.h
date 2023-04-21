/*
** EPITECH PROJECT, 2023
** liblists
** File description:
** lists
*/

#pragma once

#include <stddef.h>

typedef struct list_s {
    void *next;
} list_t;

/**
 * Returns the element at specified location, with bounds checking.
 * @param  h   the head of the list
 * @param  pos position of the element to access
 * @see    https://en.cppreference.com/w/cpp/container/vector/operator_at
 * @return the element at specified location or NULL.
 */
void *list_at(const void *h, size_t pos);

/**
 * Returns the first element in the list.
 * @param  h the head of the list
 * @see    https://en.cppreference.com/w/cpp/container/list/front
 * @return the first element in the list
 */
extern void *list_front(const void *h);

/**
 * Returns the last element in the list.
 * @param  h the head of the list
 * @see    https://en.cppreference.com/w/cpp/container/list/back
 * @return the last element of the list
 */
void *list_back(const void *h);

/**
 * Checks if the list has no elements.
 * @param  h the head of the list
 * @see    https://en.cppreference.com/w/cpp/container/list/empty
 * @retval true  if the list is empty
 * @retval false if there is at least 1 element in the list
 */
extern int list_empty(const void *h);

/**
 * Returns the number of elements in the list.
 * @param  h the head of the list
 * @see    https://en.cppreference.com/w/cpp/container/list/size
 * @return the number of elements in the list
 */
size_t list_size(const void *h);

/**
 * Copy the list.
 * @param  h the head of the list
 * @see    https://en.cppreference.com/w/cpp/container/list/operator=
 * @return a copy of the list
 */
#define LIST_COPY(h) slist_copy((h), sizeof *(h))

/**
 * @see LIST_COPY
 */
void *slist_copy(const void *h, size_t s);

/**
 * Constructs a new list.
 * @param  t   the type of the new list
 * @param  ... the list of variables in the head, supports designated inits
 * @see    https://en.cppreference.com/w/cpp/container/list/list
 * @see    https://gcc.gnu.org/onlinedocs/gcc/Designated-Inits.html
 * @return a new list
 */
#define LIST_NEW(t, ...) \
    slist_push_back(NULL, (type []){{NULL, __VA_ARGS__}}, sizeof (t))

/**
 * Destructs the list.
 * @param  h   the head of the list
 * @param  del (opt) function to dealloc the content of an element
 * @see    https://en.cppreference.com/w/cpp/container/list/~list
 */
void list_clear(void *h, void (*del)(void *h));

/**
 * Inserts elements at the specified positon in the list.
 * @param  h   the head of the list
 * @param  pos position before which the new node will be inserted
 * @see    https://en.cppreference.com/w/cpp/container/list/insert
 * @return the head of the list
 */
#define LIST_INSERT(h, pos, ...) \
    slist_insert((h), (p), (typeof(*(h)) []){{NULL, __VA_ARGS__}}, sizeof *(h))

/**
 * @see LIST_INSERT
 */
void *slist_insert(void *h, size_t pos, const void *el, size_t s);

/**
 * Erases the element at the specified position in the list.
 * @param  h the head of the list
 * @param  pos position of the element to delete
 * @see    https://en.cppreference.com/w/cpp/container/list/erase
 * @return the head of the list
 */
void *list_erase(void *h, size_t pos, void (*del)(void *h));

/**
 * Removes all elements for which cmp returns true.
 * @param  h   the head of the list
 * @param  cmp function which returns true if the element should be removed
 * @see    https://en.cppreference.com/w/cpp/container/list/remove
 * @return the head of the list or NULL if the list is empty
 */
void *list_erase_if(void *h, int (*cmp)(void *el),
    void (*del)(void *h));

/**
 * Appends the given element value to the end of the list.
 * @param  h   the head of the list
 * @param  ... the list of variables of the new node, supports designated inits
 * @see    https://en.cppreference.com/w/cpp/container/list/push_back
 * @see    https://gcc.gnu.org/onlinedocs/gcc/Designated-Inits.html
 * @return the head of the list
 */
#define LIST_PUSH_BACK(h, ...) \
    slist_push_back((h), (typeof(*(h)) []){{NULL, __VA_ARGS__}}, sizeof *(h))

/**
 * @see LIST_PUSH_BACK
 */
void *slist_push_back(void *h, const void *el, size_t s);

/**
 * Prepends the given element value to the beginning of the list.
 * @param  h   the head of the list
 * @param  ... the list of variables of the new node, supports designated inits
 * @see    https://en.cppreference.com/w/cpp/container/list/push_front
 * @see    https://gcc.gnu.org/onlinedocs/gcc/Designated-Inits.html
 * @return the new head of the list
 */
#define LIST_PUSH_FRONT(h, ...) \
    slist_push_front((h), (typeof(*(h)) []){{NULL, __VA_ARGS__}}, sizeof *(h))

/**
 * @see LIST_PUSH_FRONT
 */
void *slist_push_FRONT(void *h, const void *el, size_t s);

/**
 * Removes the last element of the list.
 * @param  h   the head of the list
 * @param  del (opt) function to dealloc the content of an element
 * @see    https://en.cppreference.com/w/cpp/container/list/pop_back
 * @return the head of the list
 */
void *list_pop_back(void *h, void (*del)(void *h));

/**
 * Removes the first element of the list.
 * @param  h   the head of the list
 * @param  del (opt) function to dealloc the content of an element
 * @see    https://en.cppreference.com/w/cpp/container/list/pop_front
 * @return the new head of the list
 */
void *list_pop_front(void *h, void (*del)(void *h));

/**
 * Appends the content of the second list to the first.
 * @param  h  the head of the first list
 * @param  h2 the head of the second list
 * @see    https://en.cppreference.com/w/cpp/container/list/push_back
 * @return the head of the first list
 */
#define LIST_MERGE(h, h2, del) slist_merge((h), (h2), sizeof *(h2))

/**
 * @see LIST_MERGE
 */
void *slist_merge(void *h, const void *h2, size_t s);

/**
 * ex: FOREACH(word, words) {printf("%s\n", word);}
 */
#define LIST_FOREACH(it, h)  for (    \
    typeof (h) (it) = list_foreach((h)); (it); (it) = list_foreach(0))

/**
 * Returns an iterator to the next element of the list.
 * @param  h    the name of the iterator
 * @see    LIST_FOREACH
 * @see    https://en.cppreference.com/w/cpp/container/list/begin
 * @see    strtok
 * @retval the first element of the list if h exists
 * @retval the next element of the list if h is NULL
 */
void *list_foreach(const void *h);

/**
 * Returns an iterator to the next element of the list.
 * @param  h    the name of the iterator
 * @param  sptr the pointer to which save the state of the list (not to be modified)
 * @see    LIST_FOREACH
 * @see    https://en.cppreference.com/w/cpp/container/list/begin
 * @see    strtok_r
 * @retval the first element of the list if h exists
 * @retval the next element of the list if h is NULL
 */
void *list_foreach_r(const void *h, const list_t **sptr);
