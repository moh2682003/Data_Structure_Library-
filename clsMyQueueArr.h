#pragma once 
#include "clsMyDynamicArray.h"

template <class T>
class clsMyQueueArr
{
	clsMyDynamicArray <T> _Dynamic;

public:

	void push(T value)
	{
		_Dynamic.InsertAtEnd(value);
	}

	void Print()
	{
		_Dynamic.Print();
	}

	void pop()
	{
		_Dynamic.DeleteFirstItem();
	}

	int Size()
	{
		return _Dynamic.Size();
	}

	T front()
	{
		return _Dynamic.GetItem(0);
	}

	T back()
	{
		return _Dynamic.GetItem(Size() - 1);
	}

	void Reverse ()
	{
		_Dynamic.Reverse();
	}

	void insertAt(int index, T value)
	{
		_Dynamic.insertAt(index, value);
	}

	void insertAfter(int index, T value)
	{
		_Dynamic.InsertAfter(index, value);
	}

	void InsertAtEnd(T value)
	{
		_Dynamic.InsertAtEnd(value);
	}

	void Clear()
	{
		_Dynamic.Clear();
	}

};