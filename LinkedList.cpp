/**
 * @file LinkedList.cpp
 * @author Halit Cetin (halitcetin@live.com)
 * @brief Linked list library file
 * @version 0.1
 * @date 2022-01-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "LinkedList.h"

void PrintList(LinkedListNode* linkedListHead)
{
	LinkedListNode* currentNode;
	currentNode = linkedListHead;

	int nodeNumber = 0;
	while (currentNode != NULL)
	{
		printf("Node Number: %d \n", nodeNumber);
		PrintCurrentElement(currentNode);
		nodeNumber++;
		currentNode = currentNode->nextNode;
	}
}

void PrintCurrentElement(LinkedListNode* currentNode)
{
	switch (currentNode->dataType)
	{
	case INT8:
		printf("Node Value: %d \n", *(int8_t*)(currentNode->data));
		break;

	case INT16:
		printf("Node Value: %d \n", *(int16_t*)(currentNode->data));
		break;

	case INT32:
		printf("Node Value: %I32d \n", *(int32_t*)(currentNode->data));
		break;

	case INT64:
		printf("Node Value: %I64d \n", *(int64_t*)(currentNode->data));
		break;

	case FLOAT32:
		printf("Node Value: %f \n", *(float*)(currentNode->data));
		break;

	case FLOAT64:
		printf("Node Value: %lf \n", *(double*)(currentNode->data));
		break;

	default:
		printf("ERROR: Not implemented data type. \n");
		break;
	}
}

void PushFront(DataType dataType, void* data, LinkedListNode** linkedListHead)
{
	LinkedListNode* newNode = (LinkedListNode*)malloc(sizeof(LinkedListNode));
	newNode->dataType = dataType;

	switch (dataType)
	{
	case INT8:
		newNode->data = malloc(sizeof(int8_t));
		memcpy(newNode->data, data, sizeof(int8_t));
		break;

	case INT16:
		newNode->data = malloc(sizeof(int16_t));
		memcpy(newNode->data, data, sizeof(int16_t));
		break;

	case INT32:
		newNode->data = malloc(sizeof(int32_t));
		memcpy(newNode->data, data, sizeof(int32_t));
		break;

	case INT64:
		newNode->data = malloc(sizeof(int64_t));
		memcpy(newNode->data, data, sizeof(int64_t));
		break;

	case FLOAT32:
		newNode->data = malloc(sizeof(float));
		memcpy(newNode->data, data, sizeof(float));
		break;

	case FLOAT64:
		newNode->data = malloc(sizeof(double));
		memcpy(newNode->data, data, sizeof(double));
		break;

	default:
		printf("ERROR: Not implemented data type. \n");
		break;
	}

	newNode->nextNode = *linkedListHead;
	*linkedListHead = newNode;
}
