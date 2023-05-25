#include <iostream>
using namespace std;

#pragma region 이해하기
//스택
/*
* 1) 후입선출 -  LIFO
* 2) TOP
*/
#pragma endregion
#pragma region 스택, 큐

class Stack {
public:
    int topIndex;
    char name;
    char arr[10];
    Stack(char ch = ' ') {
    //    cout << arr[-1];
        topIndex = -1;
        name = ch;
        cout << arr[-1] << endl;
    };

    void Push(char ch = ' ') {
        if (isFull())
            cout << name << " 다참요" << endl;
        else
            arr[++topIndex] = ch;
    }
    char Pop() {
        if (isEmpty())
            cout << name << " 없음요" << endl;
        else
            return arr[--topIndex];
    }
    bool isEmpty() {
        return (topIndex == -1);
    }
    bool isFull() {
        return (topIndex == 9);
    }
};


#pragma endregion


#pragma region 연결리스트로 스택, 큐
//스택
//class NODE {
//    int data;
//    NODE* next;
//};
//NODE* top;


#pragma endregion



int main() {
    Stack s1{ 'C' }, s2{ 'D' };
    s1.Push('d');
    s1.Push('a');
    s1.Push('t');
    s1.Push('a');

    s2.Push('s');
    s2.Push('t');
    s2.Push('a');
    s2.Push('c');
    s2.Push('k');

    for (int i = 0; i < 5; i++) {
        cout << "Pop s1 : " << s1.Pop() << "\n";
    }
    cout << "\n";
    for (int i = 0; i < 5; i++) {
        cout << "Pop s2 : " << s2.Pop() << "\n";
    }
    int arr[10] = { 0 };
    cout << arr[-1];
}