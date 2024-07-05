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



// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         vector<int>arr;
//         ListNode* temp=head;
//         while(temp!=nullptr)
//         {
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }
//         int n=arr.size();
//         vector<int>s;
//         for(int i=1;i<n-1;i++)
//         {
//             if(arr[i]<arr[i+1] && arr[i]<arr[i-1])
//             {
//                 s.push_back(i+1);
//             }
//             else if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
//             {
//                 s.push_back(i+1);
//             }
//         }
//         if(s.size()<2)
//         {
//             return {-1,-1};
//         }
//         arr.clear();

//    int minDistance = INT_MAX;
//         int maxDistance = s.back() - s.front();
        
//         for (size_t i = 1; i < s.size(); ++i) {
//             minDistance = min(minDistance, s[i] - s[i - 1]);
//         }
//         arr.push_back(minDistance);
//         arr.push_back(maxDistance);
//         return arr;
    
//     }
// };



class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head==NULL || head->next==NULL ||head->next->next==NULL){
            return {-1,-1};
        }
        ListNode* temp=head->next;
        ListNode* temp2=head->next->next;
        vector<int>v;
        int i=2;
        while(temp2){
            if((head->val<temp->val)&&(temp2->val<temp->val)){
                v.push_back(i);
            }
            else if((head->val>temp->val)&&(temp2->val>temp->val)){
                v.push_back(i);
            }
            i++;
            head=temp;
            temp=temp2;
            temp2=temp2->next;
        }
        if(v.size()<2){
            return {-1,-1};
        }
        int mini=INT_MAX;
        for(int i=1;i<v.size();i++){
            mini=min(mini,(v[i]-v[i-1]));
        }
        return {mini,(v[v.size()-1]-v[0])};
    }
};