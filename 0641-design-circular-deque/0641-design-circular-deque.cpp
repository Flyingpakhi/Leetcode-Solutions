class MyCircularDeque {
    int *data;
  int front;
  int rear;
  int size;
public:
    MyCircularDeque(int k) {
    data = new int[k];
    front= -1;
    rear = 0;
    size = k;
    }
    bool insertFront(int value) {
        if(isFull()){
          return false;
      }
      if(front==-1){
          front=0;
          rear=0;
      }
      else if(front==0){
          front=size-1;
      }
      else{
          front=front-1;
      }
      data[front]=value;
        return true;
    }
    bool insertLast(int value) {
    if (isFull()) {
      return false;
    }
    if (front == -1) {
      front = 0;
      rear = 0;
    } 
    else if(rear==size-1){
      rear=0;
    }
    else {
      rear=rear+1;
    }
    data[rear] = value;
    return true;
    }
    
    bool deleteFront() {
        if (front==-1) {
      return false;
    }
    if(front==rear){
      front=-1;
      rear=-1;
    }
    else if(front==size-1) {
      front=0;
    }
    else {
      front++;
    }
        return true;
    }
    
    bool deleteLast() {
        if (front == -1) {
      return false;
    }
    if (front == rear) {
      front = -1;
      rear = -1;
    }
    else if(rear==0){
      rear=size-1;
    }
    else{
      rear--;
    }
        return true;
    }
    
    int getFront() {
    if(front==-1){
      return -1;
    }
    return data[front];
  }
    
    int getRear() {
        if (front == -1) {
      return -1;
    }
    return data[rear];
    }
    
    bool isEmpty() {
      return front==-1;  
    }
    
    bool isFull() {
        return ((front == 0 && rear == size-1) || front == rear + 1);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */