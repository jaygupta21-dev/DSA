class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int currgas=0;
     int start=0;
     int total_gas=0;
     int total_cost=0;
     for(int i=0;i<gas.size();i++){
        total_gas+=gas[i];
        total_cost+=cost[i];
        currgas=currgas+(gas[i]-cost[i]);
        if(currgas<0){
            start=i+1;
            currgas=0;
        }
     }
     if(total_gas<total_cost){
        return -1;
     }
     else{
        return start;
     }
     
    }
};