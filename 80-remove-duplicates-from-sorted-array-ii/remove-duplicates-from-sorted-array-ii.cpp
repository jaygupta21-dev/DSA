class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
    int n = arr.size();
    int idx = 0;
    int i = 0;

    while (i < n) {
        int a = arr[i];
        int count = 0;

        while (i < n && arr[i] == a) {
            count++;
            i++;
        }

        if (count >= 1) {
            arr[idx++] = a;
        }

        if (count >= 2) {
            arr[idx++] = a;
        }
    }

    return idx;
}

};