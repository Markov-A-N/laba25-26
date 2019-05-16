#include <stdbool.h>

#define N 100
typedef struct Deque
{
	int last;
	int data[N];
} deque;

void menu();
void Create(deque* d);
bool Empty(deque* d);
int size(deque* d);
bool Push_front(deque* d, int t);
bool Push_back(deque* d, int t);
bool Pop_front(deque* d);
bool Pop_back(deque* d);
int Top(deque* d);
int Last(deque* d);
void Sort(deque* f);
void print(deque* d);