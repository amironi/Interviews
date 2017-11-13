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
  }

  void unlock_read()
  {
     r.lock();

     if(--c == 0) w.unlock();

     r.unlock();
  }

  void lock_write()
  {
     w.lock();
  }

  void unlock_write()
  {
     w.unlock();
  }

  mutex r;
  mutex w;

  int c;
};