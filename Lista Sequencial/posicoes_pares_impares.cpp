#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode {
    public:

    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

ListNode* oddEvenList(ListNode* head) {
    if(head == nullptr) return nullptr;
    
    ListNode *impar = head, *aux = head->next;
    ListNode *par = aux;
    
    while(1){
        if(!impar || !aux || !(aux->next)){
            impar->next = par;
            break;
        }
        impar->next = aux->next;
        impar = aux->next;
        
        if(impar->next == nullptr){
            aux->next = nullptr;
            impar->next = par;
            break;
        }
        
        aux->next = impar->next;
        aux = impar->next;
    }
    return head;
}


int main(){
    int n;
    ListNode * head= nullptr;
    cin >> n;
    for(int i = 0; i < n; i++){
        ListNode * ptr;
        int x;
        cin >> x;
        if( i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }

    head = oddEvenList(head);

    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
    
    return 0;    
}