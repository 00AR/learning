#include <bits/stdc++.h>
using namespace std;

// Assumption Arrays are sorted
// Time Complexity: O(m+n)
// Space complexity: O(1)

vector<int> findIntersection(int arr1[], int arr2[], int n, int m){
    int i=0, j=0;
    vector<int> Intersection;

    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            if (Intersection.size() == 0 || Intersection.back() != arr1[i])
             Intersection.push_back(arr1[i]);
            i++;
            j++;
        }
        else {
            if(arr1[i]>arr2[j])
                j++;
            else
                i++;
        }
    }

    return Intersection;
}

int main(){
    int n=10, m=7;
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {2,3,4,4,5,11,12};
    vector<int> Intersection = findIntersection(arr1, arr2, n,m);
    cout<< "Intersection of arr1 and arr2 is"<<endl;
    for (auto &val: Intersection){
        cout<< val << " ";
    }

    return 0;
}