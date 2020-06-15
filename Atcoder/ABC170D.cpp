// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find special numbers 
void divisibilityCheck(int arr[], int n) 
{ 
  
    // Storing all array elements in a hash 
    // and finding maximum element in the array 
    unordered_set<int> s; 
    int max_ele = INT_MIN; 
    for (int i = 0; i < n; i++) { 
        s.insert(arr[i]); 
  
        // Update the maximum element of the array 
        max_ele = max(max_ele, arr[i]); 
    } 
  
    // Traversing the array elements and storing the array 
    // multiples that are present in s in res 
    unordered_set<int> res; 
    for (int i = 0; i < n; i++) { 
  
        // Check for non-zero values only 
        if (arr[i] != 0) { 
  
            // Checking the factors of current element 
            for (int j = arr[i] * 2; j <= max_ele; j += arr[i]) { 
  
                // If current factor is already part 
                // of the array then store it 
                if (s.find(j) != s.end()) 
                    res.insert(j); 
            } 
        } 
    } 
  
    // For non-distinct elmments 
    // To store the frequency of elements 
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr[i]]++; 
  
    unordered_map<int, int>::iterator it; 
    vector<int> ans; 
    for (it = mp.begin(); it != mp.end(); it++) { 
  
        // If frequency is at least 2 
        if (it->second >= 2) { 
            if (res.find(it->first) == res.end()) { 
  
                // If frequency is greater than 1 and 
                // the number is not divisible by 
                // any other number 
                int val = it->second; 
  
                // Then we push the element number of 
                // times it is present in the vector 
                while (val--) 
                    ans.push_back(it->first); 
            } 
        } 
  
        // If frequency is greater than 1 and the number 
        // is divisible by any other number 
        if (res.find(it->first) != res.end()) { 
            int val = it->second; 
  
            // Then we push the element number of 
            // times it is present in the vector 
            while (val--) 
                ans.push_back(it->first); 
        } 
    } 
    cout<<n-ans.size();

} 
  
// Driver code 
int main() 
{ int n=0;
    cin>>n;
    int arr[n]={0};
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    //int arr[] = { 2, 3, 8, 6, 9, 10 }; 
    //int n = sizeof(arr) / sizeof(arr[0]); 
  
    divisibilityCheck(arr, n); 
  
    return 0; 
} 
