#include "linkedlist.h"

	void linkedlist :: insertatstart(Complex num)
	{
		Complex *node = new Complex;
		node->ptr = head;
		head = node;
		node->real = num.real;
		node->imag = num.imag;
	}
	void linkedlist :: insertatend(Complex num)
	{
		Complex *node = new Complex;
		Complex *temp = new Complex;
		temp = head;
		while (temp->ptr != NULL)
		{
			temp = temp->ptr;
		}
		node->real = num.real;
		node->imag = num.imag;
		node->ptr = NULL;
		temp->ptr = node;
	}
	void  linkedlist::deleteatanyposition(int position)
	{
		Complex*temp = new Complex;
		Complex*temp2 = new Complex;
		temp = head;
		temp2 = head;
		for (int i = 0; i < position - 1; i++)
		{
			temp2 = temp;
			temp = temp->ptr;
		}
		temp = temp->ptr;
		delete temp2->ptr;
		temp2->ptr = temp;
	}
	void linkedlist::insertafterposition(Complex num, int position)
	{
		Complex*node = new Complex;
		Complex*temp = new Complex;
		temp = head;
		for (int i = 0; i < position - 1; i++)
		{
			temp = temp->ptr;
		}
		node->ptr = temp->ptr;
		temp->ptr = node;
		node->real = num.real;
		node->imag = num.imag;
		temp = NULL;
	}
	void linkedlist::deleteatend()
	{
		Complex*node = new Complex;
		Complex*temp = new Complex;
		Complex*temp2 = new Complex;
		temp = head;
		temp2 = head;
		while (temp->ptr != NULL)
		{
			temp2 = temp;
			temp = temp->ptr;
		}
		delete temp;
		temp2->ptr = NULL;
	}
	void  linkedlist::traverse()
	{
		Complex*temp = new Complex;
		temp = head;
		while (temp != NULL)
		{
			if (temp->imag < 0)
				cout << temp->real << temp->imag << "i"<<"    ,    ";
			else
				cout << temp->real << "+" << temp->imag << "i"<<"    ,    ";
			temp = temp->ptr;
		}
		cout << endl;
		
	}

