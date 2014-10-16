/*#include <iostream>
#include <vector>
//#include "poorman_priority_queue.h"
//#include "sorted_priority_queue.h"
#include "heap_priority_queue.h"

using namespace std;

// Comparison functor for integer pointers
struct intptr_comp {
  bool operator() (const int *a, const int  *b) const    {
      return *a < *b;
  }
};

int main()    {
  heap_priority_queue<int *, intptr_comp> pmheap;
  vector<int> owner = {6,0,71,6,46,33,47};

  for(auto &i : owner) // reference needed for next line
    pmheap.push(&i);   // so that this is the address of the value in owner

  // Process each number in priority order
  while(!pmheap.empty()){

    // Pop one int pointer off the Poor Man's Heap
    // the integer itself is still “alive” in the vector owner

    cout << *pmheap.top() << ' ';
    pmheap.pop();
  }

  cout << endl;

  // pmheap is empty, but owner still has all 4 integers.
  // program should print 20 10 7 5

  return 0;
}*/