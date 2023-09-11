//
//  types.h
//  Farm Defense
//
//  Created by Devaansh Gupta on 21/08/23.
//

#ifndef types_h
#define types_h

#include <stdbool.h>
typedef struct Node {
    void* data;             // A pointer to the data stored in this node. a void* is used so that this node could store any data type
    struct Node* next;      // Pointer to the next node in the list. Allows for traversal through the list
} Node_t;

typedef struct LinkedList {
    Node_t* head;           // Pointer to the first Node_t in the linked list (head)
    size_t data_size;       // Size, in bytes, of the data type this linked list will store. E.g. a list of ints will have data_size of 4 bytes
} LinkedList_t;

#endif /* types_h */
