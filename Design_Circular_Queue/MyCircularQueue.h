#pragma once

class MyCircularQueue 
{
public:
	MyCircularQueue(int);

	~MyCircularQueue();

	bool enQueue(int value);

	bool deQueue();

	int Front() const;

	int Rear() const;

	bool isEmpty() const;

	bool isFull() const;


	int* buffer;
	int bufferSize_;
	int tail_{ 0 };
	int head_{ 0 };
	int itemCount{ 0 };
};

