#include "MyCircularQueue.h"

MyCircularQueue::MyCircularQueue(int k) : buffer{ new int[k] {-1} }, bufferSize_{ k }
{

}

MyCircularQueue:: ~MyCircularQueue()
{
	delete[] buffer;
}

bool MyCircularQueue::enQueue(int value)
{
	if (!isFull())
	{
		buffer[tail_] = value;
		++itemCount;
		tail_ = (tail_ + 1) % bufferSize_;
		return true;
	}
	else
	{
		return false;
	}
}

bool MyCircularQueue::deQueue()
{
	if (!isEmpty())
	{
		head_ = (head_ + 1) % bufferSize_;
		--itemCount;
		return true;
	}
	else
	{
		return false;
	}
}

int MyCircularQueue::Front() const
{
	return isEmpty() ? -1 : buffer[head_];
}

int MyCircularQueue::Rear() const
{
	if (isEmpty())
	{
		return -1;
	}
	else if (isFull() && tail_ == 0 || tail_ == 0)
	{
		return buffer[bufferSize_ - 1];
	}
	else
	{
		return buffer[tail_ - 1];
	}

}

bool MyCircularQueue::isEmpty() const
{
	return itemCount == 0;
}

bool MyCircularQueue::isFull() const
{
	return (itemCount == bufferSize_);
}

