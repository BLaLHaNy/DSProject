#pragma once
#include <iostream>

using namespace std;

#ifndef LINKED_QUEUE_
#define LINKED_QUEUE_


template < typename T>

class Node
{
private:
	T item; // A data item
	Node<T>* next; // Pointer to next node
public:
	
	Node();
	Node(const T& r_Item);
	Node(const T& r_Item, Node<T>* nextNodePtr);
	void setItem(const T& r_Item);
	void setNext(Node<T>* nextNodePtr);
	T getItem() const;
	Node<T>* getNext() const;
}; // end Node

template <typename T>
class LinkedQueue
{
private:

	Node<T>* backPtr;
	Node<T>* frontPtr;
public:
	LinkedQueue();
	bool isEmpty() const;
	bool enqueue(const T& newEntry);
	bool dequeue(T& frntEntry);
	bool peek(T& frntEntry)  const;
	~LinkedQueue();

	//copy constructor
	LinkedQueue(const LinkedQueue<T>& LQ);
};

template <typename T>
class QueueCancel : public LinkedQueue<T>
{

public:
	void Cancel();

	

};

template <typename T>
class PriQueueCancel : public priQueue<T>
{

public:
	void Cancel();



};

template <typename T>
class PriQueueReturn : public PriQueueCancel<T>
{
public : 
	void returnCar();
};

#endif