#ifndef HEAP_PRIORITY_QUEUE_H
#define HEAP_PRIORITY_QUEUE_H

#include "eecs281_priority_queue.h"

//A specialized version of the 'priority_queue' ADT implemented as a binary priority_queue.
template<typename TYPE, typename COMP_FUNCTOR = std::less<TYPE>>
class heap_priority_queue : public eecs281_priority_queue<TYPE, COMP_FUNCTOR> {
public:
    typedef unsigned size_type;
    
    //Description: Construct a priority_queue out of an iterator range with an optional
    //             comparison functor.
    //Runtime: O(n) where n is number of elements in range.
    template<typename InputIterator>
    heap_priority_queue(InputIterator start, InputIterator end, COMP_FUNCTOR comp = COMP_FUNCTOR());
    
    //Description: Construct an empty priority_queue with an optional comparison functor.
    //Runtime: O(1)
    heap_priority_queue(COMP_FUNCTOR comp = COMP_FUNCTOR());
    
    //Description: Assumes that all elements inside the priority_queue are out of order and
    //             'rebuilds' the priority_queue by fixing the priority_queue invariant.
    //Runtime: O(n)
    virtual void fix();
    
    //Description: Add a new element to the priority_queue.
    //Runtime: O(log(n))
    virtual void push(const TYPE& val);
    
    //Description: Remove the most extreme (defined by 'compare') element from
    //             the priority_queue.
    //Note: We will not run tests on your code that would require it to pop an
    //element when the priority_queue is empty. Though you are welcome to if you are
    //familiar with them, you do not need to use exceptions in this project.
    //Runtime: O(log(n))
    virtual void pop();
    
    //Description: Return the most extreme (defined by 'compare') element of
    //             the priority_queue.
    //Runtime: O(1)
    virtual const TYPE& top() const;
    
    //Description: Get the number of elements in the priority_queue.
    //Runtime: O(1)
    virtual size_type size() const
    {
        size_type p = data.size();
        return p; }
    
    //Description: Return true if the priority_queue is empty.
    //Runtime: O(1)
    virtual bool empty() const
    { return data.empty(); }
private:
    //Note: This vector *must* be used your priority_queue implementation.
    std::vector<TYPE> data;
private:
    void fixup(int i);
    //***Add any additional member functions or data you require here.
};

template<typename TYPE, typename COMP_FUNCTOR>
template<typename InputIterator>
heap_priority_queue<TYPE, COMP_FUNCTOR>::heap_priority_queue(
                                                             InputIterator start,
                                                             InputIterator end,
                                                             COMP_FUNCTOR comp
                                                             ) {
    data=heap_priority_queue(comp);
    for (auto i = start; i != end; i++) {
        data.push_back(i);
    }
    
}

template<typename TYPE, typename COMP_FUNCTOR>
heap_priority_queue<TYPE, COMP_FUNCTOR>::heap_priority_queue(COMP_FUNCTOR comp) {
    //optional
    this->compare = comp;
    data = std::vector<TYPE>();
}
template<typename TYPE, typename COMP_FUNCTOR>
void heap_priority_queue<TYPE, COMP_FUNCTOR>::fix() {
    //Code from lecture
    for(int k = data.size()-1; k>=0; k--){
        while (2 * k <= data.size()) {
            int j = 2 * k; // start with left child
            if (j < data.size() && data[j] < data[j + 1]) j++;
            if (data[k] >= data[j]) break; // heap restored
            std::swap(data[k], data[j]);
            k = j; // move down
        }
    }
}

template<typename TYPE, typename COMP_FUNCTOR>
void heap_priority_queue<TYPE, COMP_FUNCTOR>::push(const TYPE& val) {
    data.push_back(val);
    fix();
}

template<typename TYPE, typename COMP_FUNCTOR>
void heap_priority_queue<TYPE, COMP_FUNCTOR>::pop() {
    TYPE& temp = data[0];
    data[0]=data[data.size()-1];
    data[data.size()-1] = temp;
    data.pop_back();
    fixup(data.size());
}

template<typename TYPE, typename COMP_FUNCTOR>
const TYPE& heap_priority_queue<TYPE, COMP_FUNCTOR>::top() const {
    //Your code.
  
    return data[0]; //This line present only so that this provided file compiles.
}
template<typename TYPE, typename COMP_FUNCTOR>
void heap_priority_queue<TYPE, COMP_FUNCTOR>::fixup(int i) {
    while (i > 1 && data[i / 2] < data[i]) {
        std::swap(data[i], data[i / 2]);
        i /= 2; // move up
    }
}

#endif //HEAP_PRIORITY_QUEUE_H

