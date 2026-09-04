/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp1=head;
        vector<int> v1;
        while(temp1!=nullptr){
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }
        int start=0;
        int end=v1.size()-1;
        while(start<=end){
          swap(v1[start],v1[end]);
          start++;
          end--;
        }

        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        for(int i=0;i<v1.size();i++){
            tail->next=new ListNode(v1[i]);
            tail=tail->next;
        }
        return dummy->next;
    }
};