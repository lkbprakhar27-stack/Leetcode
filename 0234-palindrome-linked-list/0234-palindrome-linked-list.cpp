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
    bool isPalindrome(ListNode* head) {
        vector<int> v1;
        ListNode* temp1=head;
        while(temp1!=nullptr){
          v1.push_back(temp1->val);
          temp1=temp1->next;
        }
        int st=0;
        int end=v1.size()-1;
        while(st<=end){
        if(v1[st]!=v1[end]){
            return false;
        }
        st++;
        end--;
        }
    return true;
    }
};