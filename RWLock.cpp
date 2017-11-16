/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <chrono>


using namespace std;

class ReadWriteLock
{

public:


  void lock_read()
  {
     r.lock();

     if(++c == 1) w.lock();

     r.unlock();
 
     // do read
     
     r.lock();

     if(--c == 0) w.unlock();

     r.unlock();
  }

  void lock_write()
  {
     r.lock();
     w.lock();

     //do write

     w.unlock();
     r.unlock();
  }






  mutex r;
  mutex w;

  int c;
};





//Apple
  read(){

    if( ++r == 1 ) {
      while(w); 
      w = 1;
    }

    // do read

    if( --r == 0 ) {
      w = 0;
    }
  }

  write()
  {
      while(w); 
      w = 1;

      // do write

      w  = 0;
  }


  //Apple2
  read(){

    while(w);

    ++r;

    // do read

    --r;
  }

  write()
  {
      while(r || w); 
      w = 1;
 
      // do write

      w  = 0;
  }


std::atomic<int> r;
std::mutex g;

// Multiple reads, no write
void read_fun()
{
    // We wait if it is being written.
    g.lock();
    r++;
    g.unlock();

    // do read
    r--;
}

// One write, no reads.
void write_fun()
{
    g.lock();// We lock the resource
    while(r );// We wait till everyone finishes read.
    // DO WRITE
    g.unlock();// Release
}



