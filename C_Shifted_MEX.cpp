#include <bits/stdc++.h>
using namespace std;

int getMex(vector<long long> nums) {
    set<long long> st;
    for (int i = 0; i < nums.size(); i++) {
        st.insert(nums[i]);
    }

    int mexValue = 0;
    while (st.find(mexValue) != st.end()) {
        mexValue++;
    }
    return mexValue;
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        int size;
        cin >> size;

        vector<long long> nums(size);
        for (int i = 0; i < size; i++) {
            cin >> nums[i];
        }

        int bestMex = 0;

        for (int i = 0; i < size; i++) {
            vector<long long> temp = nums;
            long long add = -nums[i];

            for (int j = 0; j < size; j++) {
                temp[j] = temp[j] + add;
            }

            int mexNow = getMex(temp);
            if (mexNow > bestMex) {
                bestMex = mexNow;
            }
        }

        cout << bestMex << endl;
    }

    return 0;
}
