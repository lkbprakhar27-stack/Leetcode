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
    vector<int> store(vector<int> &v1,ListNode* temp1){
        while(temp1!=nullptr){
        v1.push_back(temp1->val);
        temp1=temp1->next;
        }
    return v1;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        vector<int> v1;
        for(int i=0;i<n;i++){
            ListNode* temp1=lists[i];
            store(v1,temp1);
        }
        
        sort(v1.begin(),v1.end());
        ListNode* l3 = new ListNode(0);
        ListNode* tail = l3;
        for(int i = 0; i < v1.size(); i++) {
            tail->next = new ListNode(v1[i]);
            tail = tail->next;
        }
        return l3->next;
    }
};