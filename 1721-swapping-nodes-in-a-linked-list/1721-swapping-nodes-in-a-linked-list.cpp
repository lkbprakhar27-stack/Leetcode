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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp1=head;
        int pos=0;
        vector<int> v1;
        while(temp1){
            pos++;
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }
        int st=0;
        int end=v1.size()-1;;
         for(int i=0;i<k-1;i++){
            st++;
         }
         for(int i=0;i<k-1;i++){
            end--;
         }
         swap(v1[st],v1[end]);

         ListNode* dummy=new ListNode(0);
         ListNode* tail=dummy;
         for(int i:v1){
            tail->next=new ListNode(i);
            tail=tail->next;
         }
         return dummy->next;
    }
};