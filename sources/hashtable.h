#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_CAPACITY    16
#define FNV_offset_basis    14695981039346656037UL
#define FNV_prime           1099511628211UL

typedef struct ht ht;

uint64_t fnv1a_hash(const char* key);

ht*           ht_create(void);
void          ht_delete(ht* table);

void*         ht_get(ht* table, const char* key);
const char*   ht_set(ht* table, const char* key, void* value);

size_t        ht_length(ht* table);

typedef struct {
  const char*   key;
  void          *value;

  ht*           _table;
  size_t        _index;
} hti;

typedef struct {
    const char*   key;
    void*         value;
} ht_entry;

struct ht {
    ht_entry*     entries;
    size_t        capacity;
    size_t        length;
};

hti ht_iterator(ht* table);
bool ht_next(hti* it);

