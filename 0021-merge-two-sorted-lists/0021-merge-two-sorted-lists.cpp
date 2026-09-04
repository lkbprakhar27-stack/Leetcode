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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        vector<int> v1;
        while(temp1!=nullptr){
           v1.push_back(temp1->val);
           temp1=temp1->next;
        }
        while(temp2!=nullptr){
           v1.push_back(temp2->val);
           temp2=temp2->next;
        }
        sort(v1.begin(),v1.end());
        ListNode* dummy =new ListNode(0);
        ListNode* tail=dummy;
        for(int i=0;i<v1.size();i++){
            tail->next=new ListNode(v1[i]);
            tail=tail->next;
        }
        return dummy->next;
    }
};