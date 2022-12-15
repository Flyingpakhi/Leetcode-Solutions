class MyCircularQueue {
    int* data;
    int nI;
    int fI;
    int size;
    int capacity;
public:
    MyCircularQueue(int k) {
        data=new int[k];
        nI=0;
        fI=-1;
        size=0;
        capacity=k;
    }
    
    bool enQueue(int value) {
        if(size==capacity){
            return false;
            }
        data[nI]=value;
        nI=(nI+1)%capacity;
        if(fI==-1){
            fI=0;
        }
        size++;
        return true;
    }    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        fI=(fI+1)%capacity;
        size--;
        if(size==0){
            fI=-1;
            nI=0;
        }
        return true;
    }
    
    int Front() {
       if(isEmpty()){
            return -1;
        }
        return data[fI]; 
    }
    
    int Rear() {
      if(isEmpty()){
          return -1;
      } 
    if(nI==0){
        return data[capacity-1];
    }
    return data[nI-1];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};