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
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        vector<int> v1;
        while(temp!=nullptr){
            v1.push_back(temp->val);
            temp=temp->next;
        }
        int result=0;
        for(int i=0;i<v1.size();i++){
         result=result+v1[i]*pow(2,(v1.size()-i-1));
        }    
        return result; 
    }
};