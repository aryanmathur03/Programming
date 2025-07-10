// #include <iostream>
// using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

// ListNode* MeraAddVala(ListNode* head1, ListNode* head2) {
//     ListNode* dummy = new ListNode(0);
//     ListNode* current = dummy;
//     ListNode* p1 = head1
;
//     ListNode* p2 = head2;

//     while (p1 != nullptr || p2 != nullptr) {
//         int v1 = (p1 != nullptr) ? p1->val : 0;
//         int v2 = (p2 != nullptr) ? p2->val : 0;
//         current->next = new ListNode(v1 + v2);
//         current = current->next;
//         if (p1) p1 = p1->next;
//         if (p2) p2 = p2->next;
//     }
//     return dummy->next;
// }

// int main() {
//     ListNode* head1 = new ListNode();
//     head1->next = new ListNode(2);
//     head1->next->next = new ListNode(3);
//     head1->next->next->next = new ListNode(4);
//     head1->next->next->next->next = new ListNode(5);

//     ListNode* head2 = new ListNode(6);
//     head2->next = new ListNode(7);
//     head2->next->next = new ListNode(8);
//     head2->next->next->next = new ListNode(9);
//     head2->next->next->next->next = new ListNode(10);

//     ListNode* sum = MeraAddVala(head1, head2);
//     cout << "Sum of two linked lists: ";
//     while (sum != nullptr) {
//         cout << sum->val << " ";
//         sum = sum->next;
//     }
//     cout << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* createList(int n) {
    if (n <= 0) return nullptr;
    int x;
    cout << "Enter value 1: ";
    cin >> x;
    ListNode* head = new ListNode(x);
    ListNode* curr = head;
    for (int i = 2; i <= n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> x;
        curr->next = new ListNode(x);
        curr = curr->next;
    }
    return head;
}

ListNode* MeraAddVala(ListNode* head1, ListNode* head2) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    ListNode* p1 = head1;
    ListNode* p2 = head2;

    while (p1 != nullptr || p2 != nullptr) {
        int v1 = (p1 != nullptr) ? p1->val : 0;
        int v2 = (p2 != nullptr) ? p2->val : 0;
        current->next = new ListNode(v1 + v2);
        current = current->next;
        if (p1) p1 = p1->next;
        if (p2) p2 = p2->next;
    }
    return dummy->next;
}

int main() {
    int n1, n2;
    cout << "Enter number of nodes for first list: ";
    cin >> n1;
    ListNode* head1 = createList(n1);

    cout << "Enter number of nodes for second list: ";
    cin >> n2;
    ListNode* head2 = createList(n2);

    ListNode* sum = MeraAddVala(head1, head2);
    cout << "Sum of two linked lists: ";
    while (sum != nullptr) {
        cout << sum->val << " ";
        sum = sum->next;
    }
    cout << endl;
    return 0;
}