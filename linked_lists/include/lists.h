/*
** EPITECH PROJECT, 2023
** myteams
** File description:
** lists
*/

#pragma once

#include <stddef.h>

typedef struct list_s {
    void *next;
} list_t;

// Element access
void *list_at(void *head, size_t elem);
extern void *list_front(void *head);
void *list_back(void *head);

// Capacity
extern int list_empty(const void *head);

size_t list_size(const void *head);

// Modifiers
#define LIST_NEW(type, ...) \
    slist_push_back(NULL, (type []){{NULL, __VA_ARGS__}}, sizeof (type))

void list_clear(void *head);

#define LIST_INSERT(h, p, ...) \
    slist_insert((h), (p), (typeof(*(h)) []){{NULL, __VA_ARGS__}}, sizeof *(h))
void *slist_insert(void *head, size_t pos, const void *elem, size_t s);

void *list_erase(void *head, size_t pos);

#define LIST_PUSH_BACK(h, ...) \
    slist_push_back((h), (typeof(*(h)) []){{NULL, __VA_ARGS__}}, sizeof *(h))
void *slist_push_back(void *head, const void *elem, size_t s);

#define LIST_PUSH_FRONT(h, ...) \
    slist_push_front((h), (typeof(*(h)) []){{NULL, __VA_ARGS__}}, sizeof *(h))
void *slist_push_FRONT(void *head, const void *elem, size_t s);

void *list_pop_back(void *head);
void *list_pop_front(void *head);

#define LIST_MERGE(h, h2) slist_merge((h), (h2), sizeof *(h2))
void *slist_merge(void *head, const void *head2, size_t s);

#define LIST_FOREACH(iter, arr)  for (            \
    typeof (arr) (iter) = list_foreach((arr)); \
    (iter); (iter) = list_foreach(0))
void *list_foreach(const void *head);
void *list_foreach_r(const void *head, const list_t **saveptr);
