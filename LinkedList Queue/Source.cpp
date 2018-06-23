# include < iostream >
# include "Queue.h"

using namespace std;

void main()
{
	
	Queue<int> l1;

	
	//cout << l1.isempty();

	l1.enque(34);
	l1.enque(44);
	l1.enque(84);

	cout<<l1.tail();

	//l1.printqueue();
	

}