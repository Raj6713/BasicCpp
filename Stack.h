/*Write a program which will implement stack template and will show the 
actions applied on it*/
#ifndef STACK_H
#define STACK_H

template<typename T>
class Stack
{
private:
	int size;
	int top;
	T *stackPtr;

public:
	explicit Stack(int=26);

	~Stack()
	{
		delete []stackPtr;
	}

	bool push(const T &);
	bool pop(T &);

	bool isEmpty() const
	{
		return top==-1;
	}

	bool isFull()
	{
		return top==size-1;
	}
};

template<typename T>
Stack<T>::Stack(int s)
      :size(s>0?s:10),top(-1),stackPtr(new T[size]){}

template<typename T>
      bool Stack<T>::pop(T &popValue)
      {
      	if(!isEmpty())
      	{
      		popValue=stackPtr[top--];
      		return true;
      	}
      	return false;
      }

template<typename T>
      bool Stack<T>::push(const T &pushValue)
      {
      	if(!isFull())
      	{
      		stackPtr[++top]=pushValue;
      		return true;
      	}
      	return false;
      }

#endif