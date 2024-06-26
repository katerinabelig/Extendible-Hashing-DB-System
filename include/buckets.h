#ifndef BUCKETS_H
#define BUCKETS_H

#include <stdio.h>
#include <stdlib.h>

#include "blocks.h"

typedef struct BucketNode BucketNode;

// Representation of Buckets
struct BucketNode
{
    int bucket_index; // (00, 01, 10, 11) but represented as 0,1,2,3..etc depending on depth
    Block* block;     // pointer to block of records
    BucketNode* next;
};

// inserts an item at the end of the list
void InsertLastInBucketList(BucketNode **list, Block* block, int bucket_index);

// prints the entire list
void PrintBucketList(BucketNode* list);

// deletes one item from the list
void deleteNodeInBucket(BucketNode **head_ref, int key);

// deletes the entire list
void DeleteBucketList(BucketNode **list);

#endif // BUCKETS_H