// 基础数据结构实现，C++实操请使用 include<stack>
#include <climits>
#include <cstdlib>

// 实现一个int链栈
class Stack_Link {
public:
    Stack_Link() : top(nullptr) {

    }

    Stack_Link(int capacity) {
        this->capacity = capacity;
    }

    int peek() {
        if (!top) {
            return INT_MIN;
        }
        return top->value;
    }

    int pop() {
        if (!top) {
            return INT_MIN;
        }
        int ret = top->value;
        LinkNode *recycle = top;
        delete recycle;
        top = top->next;
        occupied--;
        return ret;
    }

    bool push(int value) {
        if (occupied + 1 > capacity) {
            return false;
        }
        LinkNode *now = new LinkNode;
        now->value = value;
        now->next = top;
        top = now;
        occupied++;
        return true;
    }

    bool empty() {
        return occupied == 0;
    }

    int size() {
        return occupied;
    }

private:
    typedef struct LinkNode {
        int value;
        LinkNode *next;
    };// 采用头插法的节点
    int occupied = 0;
    int capacity = -1;
    LinkNode *top;
};