#include <iostream>
#include <string>
#include <assert.h>

using namespace std;

#define N 100

int *p;
int *f;

int Mem[N];// = new int(N);

void
init()
{
    p = Mem;
    f = NULL;
    
}

int* alloc()
{
    if (p < Mem + N ) 
        return p++;
    
    if (f) 
    {
            int* ret=f;
            f = (int*)*f;
            return ret;
        
    }
    
    return NULL;
    
}

void relese(int* i)
{
    *i = (long)f;
    f = i;
}

int
main ()
{
    
    init();
    int* last;
  //cout<<"Hello World";
    for( int i = 0 ; i <  N; i++)
        cout << i <<": "<< ( last = alloc() )<< endl;
    
    assert( alloc() == 0);
    
    relese(last);
    
    cout << "after free: "<< (last = alloc()) << endl;
    
    assert( alloc() == 0);
 
  return 0;
}