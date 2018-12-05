
#include "linkedlist.h"

int main()
{
	Complex c1, c2, c3;
	c1.real = 4;
	c1.imag = 5;
	c2.real = 3;
	c2.imag = -3;
	c3.real = 4;
	c3.imag = 3;
	int position = 4;
	linkedlist l;

	Complex sum = c1 + c2;
	l.insertatstart(sum);
	l.traverse();
	Complex Difference = c1 - c3;
	l.insertatend(Difference);
	l.traverse();
	Complex Product = c2 * c3;
	l.insertatend(Product);
	l.traverse();
	Complex Divide = c1 / c3;
	l.insertatend(Divide);
	l.traverse();
	l.deleteatanyposition(position);
	l.traverse();
	l.deleteatend();
	l.traverse();
	system("pause");
	return 0;
}