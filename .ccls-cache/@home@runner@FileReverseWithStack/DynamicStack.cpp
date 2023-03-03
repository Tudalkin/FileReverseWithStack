template <typename T>

class DynamicStack {
private:
  struct Node {
    T data;
    Node *next;
  };

  Node *top;

public:
  DynamicStack() { top = nullptr; }

  ~DynamicStack() {
    Node *curr = top;
    while (curr) {
      pop();
    }
  }

  void push(T data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = top;
    top = newNode;
  }

  T pop() {
    if (!isEmpty()) {
      Node *temp = top;
      T data = temp->data;
      top = top->next;
      delete temp;
      return data;
    }
  }

  bool isEmpty() { return top == nullptr; }
};