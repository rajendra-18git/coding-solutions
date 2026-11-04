 #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> reverseArray(vector<int> a) {
    int start = 0;
    int end = a.size() - 1;
    
    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }
    
    return a;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> res = reverseArray(arr);
    
    for (size_t i = 0; i < res.size(); i++) {
        cout << res[i] << (i == res.size() - 1 ? "" : " ");
    }
    cout << endl;
    
    return 0;
}