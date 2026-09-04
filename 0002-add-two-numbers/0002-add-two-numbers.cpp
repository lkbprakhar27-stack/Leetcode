class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1, v2, v3;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while(temp1 != nullptr) {
            v1.push_back(temp1->val);
            temp1 = temp1->next;
        }
        while(temp2 != nullptr) {
            v2.push_back(temp2->val);
            temp2 = temp2->next;
        }

        int count = abs((int)v1.size() - (int)v2.size());
        if(v1.size() > v2.size()) {
            while(count--) v2.push_back(0);
        } else {
            while(count--) v1.push_back(0);
        }

        int carry = 0;
        for(int i = 0; i < v1.size(); i++) {
            int sum = v1[i] + v2[i] + carry;
            v3.push_back(sum % 10);   
            carry = sum / 10;          
        }
        if(carry) v3.push_back(carry); 

        ListNode* l3 = new ListNode(0);
        ListNode* tail = l3;
        for(int i = 0; i < v3.size(); i++) {
            tail->next = new ListNode(v3[i]);
            tail = tail->next;
        }
        return l3->next;
    }
};