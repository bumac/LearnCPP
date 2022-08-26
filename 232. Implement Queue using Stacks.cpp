class MyQueue {
private:
    std::vector<int> arr;
    std::vector<int> vec;
    
    int size;
    int count;
    int first;
public:
    MyQueue() : arr(32), vec(32), size(32), count(0), first(0) {
        
    }
    
    void push(int x) {
        arr[count] = x;
        
        ++count;
        
        if (count == size){
            arr.reserve(size);
            vec = arr;
            for(int i = 0; i < vec.size() - first; ++i){
                arr[i] = vec[vec.size() - first + i];
            }
        }
    }
    
    int pop() {
        return arr[first++];
    }
    
    int peek() {
        return arr[first];
    }
    
    bool empty() {
        return first == count;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */