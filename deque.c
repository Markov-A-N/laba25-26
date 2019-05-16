#include <stdio.h>
#include <stdbool.h>
#include "func.h"

void Create(deque* d)
{
	d->last = 0;
}

bool Empty(deque* d)
{
	if (d->last == 0) return true;
	else return false;
}

int size(deque* d)
{
	return d->last;
}

bool Push_front(deque* d, int t)
{
	if (d->last == N) 
	{
		return false;
	}
	for (int i = d->last; i > 0; i--)
	{
		d->data[i] = d->data[i-1];
	}
	d->data[0] = t;
	d->last++;
	return true;
}

bool Push_back(deque* d, int t)
{
	if (d->last == N)
	{
		return false;
	}
	d->data[d->last] = t;
	d->last++;
	return true;
}

bool Pop_front(deque* d)
{
	if (d->last == 0)
	{
		return false;
	}
	for (int i=0; i < d->last; i++)
	{
		d->data[i] = d->data[i+1];
	}
	d->last--;
	return true;
}

bool Pop_back(deque* d)
{
	if (d->last == 0)
	{
		return false;
	}
	d->last--;
	return true;
}

int Top(deque* d) 
{
	return d->data[0];
}

int Last(deque* d)
{
	return d->data[d->last-1];
}

void Sort(deque* f)
{
	int x, k;
	for (int i = 0; i < (f->last-1); i++)
	{
		x = f->data[i];
		k = i;
		for (int j = i + 1; j < f->last; j++)
		{
			if (f->data[j] < x)
			{
				k = j;
				x = f->data[j];
				f->data[k] = f->data[i];
				f->data[i] = x;
			}
		}
	}
}

void print(deque* d)
{
	for (int i = 0; i < d->last; i++)
	{
		printf("%d ", d->data[i]);
	}
}
