#include "LinkedList.h"

LinkedListNode* testListHead;

int main()
{
	testListHead = NULL;

	int8_t denemeint8 = 8;
	int16_t denemeint16 = 16;
	int32_t denemeint32 = 32;
	int64_t denemeint64 = 64;
	float denemeFloat = 30.2;
	double denemeDouble = 31.2;

	PushFront(INT8, &denemeint8, &testListHead);
	PushFront(INT16, &denemeint16, &testListHead);
	PushFront(INT32, &denemeint32, &testListHead);
	PushFront(INT64, &denemeint64, &testListHead);
	PushFront(FLOAT32, &denemeFloat, &testListHead);
	PushFront(FLOAT64, &denemeDouble, &testListHead);

	PrintList(testListHead);

	getchar();
	return 0;
}


