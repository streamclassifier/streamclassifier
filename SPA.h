#ifndef _SPA_H
#define _SPA_H
using namespace std;

class SPA
{
public:
	virtual void Insert(unsigned int key, int f, int seq) = 0;
};

#endif // _SPA_H