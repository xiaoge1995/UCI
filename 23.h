class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy = new ListNode(0);
        ListNode* ret = dummy;
        multimap<int,int> priorityQ;
        for(int i=0; i<lists.size();i++){
            ListNode* start = lists[i];
            if(start){
                priorityQ.insert(pair<int,int>(start->val,i) );
                lists[i] = lists[i]->next;
            }
        }
        while(!priorityQ.empty()){
            auto smallest = priorityQ.begin();
            int value = smallest->first;
            int index = smallest->second;
            dummy->next = new ListNode(value);
            dummy = dummy->next;
            if(lists[index]){
                priorityQ.insert(pair<int,int>(lists[index]->val,index) );
                lists[index] = lists[index]->next;
            }
            priorityQ.erase(priorityQ.begin());
        }
        return ret->next;
    }
};