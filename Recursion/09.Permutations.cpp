#include <bits/stdc++.h>
using namespace std;


void permute(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited){
    if (temp.size() == 3){
        ans.push_back(temp);
        return;
    }

    for (int i = 0; i < 3; i++){
        if (visited[i] == 0){
            visited[i] = 1;
            temp.push_back(arr[i]);
            permute(arr, ans, temp, visited);
            temp.pop_back();
            visited[i] = 0;
        }
    }
}


int main (){
    int arr[] = {1, 2, 3};
    vector <vector<int>> ans;
    vector <int> temp;
    vector <bool> visited(3, 0);
    permute(arr, ans, temp, visited);

    for (int i = 0; i < ans.size(); i++){
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}


//  Without using visited array and temp array

void permute(int arr[], vector<vector<int>> &ans, int index){
    if (index == 3){
        vector<int> temp;
        for (int i = 0; i < 3; i++){
            temp.push_back(arr[i]);
        }
        ans.push_back(temp);
        return;
    }

    for (int i = index; i < 3; i++){
        swap(arr[i], arr[index]);
        permute(arr, ans, index + 1);
        swap(arr[i], arr[index]);
    }
}


// Permutations with duplicates

void permute(int arr[], vector<vector<int>> &ans, int index){

    if(arr.size() == index){
        ans.push_back(arr);
        return;
    }

    vector <bool> use (21, 0);
    for (int i =index ; i<arr.size(); i++){
        if (use[arr[i] + 10] == 0){
            use[arr[i] + 10] = 1;
            swap(arr[i], arr[index]);
            permute(arr, ans, index + 1);
            swap(arr[i], arr[index]);
        }
    }
}

