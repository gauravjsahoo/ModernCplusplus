#include<iostream>

using namespace std;
template <class T>
class smartPtr {
	T* ptr;
public:
	explicit smartPtr(T* _ptr = NULL) : ptr(_ptr) {}

	~smartPtr()
	{
		delete ptr;
	}

	T& operator*() {
		return *ptr;
	}

	T& operator->()
	{
		return ptr;
	}
};

int main()
{
	smartPtr<int> p(new int);
	*p = 10;

	return 0;

}
