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
        bool check( vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) return true;
            else if (arr[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int> v1;
        sort(nums.begin(),nums.end());
        
        ListNode* dummy=new ListNode(0);
        ListNode* temp=head;
        while(temp!=nullptr){
            if(!check(nums,temp->val)){
                v1.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode* tail=dummy;
        for(int x:v1){
            tail->next=new ListNode(x);
            tail=tail->next;
        }
        return dummy->next;
    }
};