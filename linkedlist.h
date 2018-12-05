#include "Complex.h"

class linkedlist
{
public:
	Complex*head = NULL;
	Complex*ptr=NULL;
	void insertatstart(Complex num);
	void insertatend(Complex num);
	void deleteatanyposition(int position);
	void valueatposition(int position);
	void insertafterposition(Complex num, int position);
	void deleteatend();
	void traverse();
};