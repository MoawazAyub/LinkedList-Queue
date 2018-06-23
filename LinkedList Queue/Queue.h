# include < iostream >
# include "List.h"

using namespace std;

template <class T>

class Queue
{
	List<T> L;

public:
	bool isempty()
	{
		if(L.getsize() == 0)
		{
			return true;
		
		}

		else
		{
			return false;
		
		}
	
	}

	void enque(const T & obj)
	{
		L.addatend(obj);
	
	}

	void denque()
	{
		L.removeatstart();
	
	}

	const T & front()
	{
		return (L.gethead())->data;
	
	}

	const T & tail()
	{
		return (L.gettail())->data;
	
	}

	int getsize()
	{
		L.getsize();
	
	}

	void printqueue()
	{
		L.printlist();
	
	}

};

