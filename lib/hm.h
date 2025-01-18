/* hm.h */

#ifndef HM_H
#define HM_H

#include "../ast.h"

#define INIT_CAPACITY 64
#define LOAD_FACTOR 0.75

size_t fnv1a_hash(const void *key, size_t len);
bool key_equal(const void *a, const void *b, size_t len);
HashMap *hm_new();
void hm_resize(HashMap *hm);
void dump(HashMap *hm);
void *hm_get(HashMap *hm, const void *key, size_t key_size);
void hm_put(HashMap *hm, void *key, size_t key_size, void *value, size_t value_size);
void hm_free(HashMap *hm);

#endif
