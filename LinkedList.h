/**
 * @file LinkedList.h
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Linked list library header
 * @version 0.1
 * @date 2022-01-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

enum DataType
{
	INT8,
	INT16,
	INT32,
	INT64,
	FLOAT32,
	FLOAT64
};

struct LinkedListNode
{
	DataType dataType;
	void* data;
	LinkedListNode* nextNode;
};

void PushFront(DataType dataType, void* data, LinkedListNode** linkedListHead);

void PrintList(LinkedListNode* linkedListHead);

void PrintCurrentElement(LinkedListNode* currentNode);

#endif