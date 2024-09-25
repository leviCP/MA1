#pragma once

#include "testQueue.hpp"

int test_size(queue& tst)
{
	
	return tst.size();


}

bool test_empty(queue& tst)
{
	if (tst.isEmpty() == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool test_full(queue& tst)
{
	if (tst.isFull() == true)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

bool test_enqueue(queue& tst)
{
	tst.enqueue(5);
	if (tst.isEmpty() == false)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool test_enqueue_2(queue& tst)
{
	tst.enqueue(5);
	tst.enqueue(5);
	if (tst.size() >= 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool test_dequeue(queue& tst)
{
	tst.enqueue(5);
	tst.dequeue();

	if (tst.isEmpty() == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool test_dequeue_2(queue& tst)
{
	tst.enqueue(5);
	tst.enqueue(5);
	tst.dequeue();

	if (tst.isEmpty() == false)
	{
		return true;
	}
	else
	{
		return false;
	}
}
