// making first array
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>

using namespace std;
// // int main (){
//     int mark[5]={90,89,98,23,32};
//     mark[2]=1001;
//     cout<<mark[0]<<mark[1]<<mark[2];
//     return 0;
// }

// LOOP ON ARRAY

// #include <iostream>
// using namespace std;
// int main (){
//     int mark[5]={90,89,98,23,32};
//     for (int i=0;i<sizeof(mark)/sizeof(int);i++){
//         cout<<mark[i]<<endl;
//     }
//     return 0;
// }

// smallest number in an array
// #include <iostream>
// using namespace std;
// int main (){
//     int mark[5]={90,89,98,23,32};
//     int smallest=INT_MAX;
//     for (int i=0;i<sizeof(mark)/sizeof(int);i++){
//         if(mark[i]<smallest){
//             smallest=mark[i];
//         }
//     }cout <<smallest;
//     return 0;
// }

// smallest number in an array using min function
// #include <iostream>
// using namespace std;
// int main (){
//     int smallest=INT_MAX;
//     int mark[5]={90,89,98,23,32};
//     for(int i=0;i<sizeof(mark)/sizeof(int);i++){
//         smallest=min(mark[i],smallest);
//     }
//     cout <<smallest;
//     return 0;
// }

// largest number in an array using max function

// #include <iostream>
// using namespace std;
// int main (){
//     int mark[5]={90,89,98,23,32};
//     int large=INT_MIN;
//     for(int i=0;i<sizeof(mark)/sizeof(int);i++){
//         large=max(large , mark[i]);
//     }cout <<large;
//     return 0;
// }

// index of a largest number in an array

// #include <iostream>
// using namespace std;
// int main (){
//     int mark[5]={90,89,98,23,32};
//     int large=INT_MIN;
//     int ans=-1;
//     for(int i=0;i<sizeof(mark)/sizeof(int);i++){
//         large=max(large , mark[i]);
//     }
//     for (int i=0;i<sizeof(mark)/sizeof(int);i++){
//         if(large==mark[i]){
//             large=i;
//         }
//     }
//     cout<<large;
//     return 0;
// }

// linear seach
// #include <iostream>
// using namespace std;
// int lin(int arr[],int size ,int ter ){
//     for (int i=0;i<size;i++){
//         if (arr[i]==ter){
// //             return i;
// //         }
// //     }return -1;
// // }
// // int main(){
// //     int arr[]={1,2,3,4,5};
// //     int size=7;
// //     int ter;
// //     cin>> ter;
// //     cout<<lin(arr,size,ter);
// // }

//                         // two pointer approch
//                         //reverce an array

// void reverce(int arr[],int size){
//     int start=0;
//     int end =size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     reverce(arr,size);
//     for (int i=0;i<size;i++){
//         cout <<arr[i];
//     }
// }
                // SWAP LARGEAT AND SMALLEST ELEMEN

// int main (){
//     int arr[]={1,2,3,4,5};
//     int mx=arr[0],mn=arr[0];
//     int mxidx=0,mnidx=0;
//     for(int i=0;i<5;i++){
//         if(mx<arr[i]){
//             mx=arr[i];
//             mxidx=i;
//         }
//     }
//     for(int i=0;i<5;i++){
//         if(mn>arr[i]){
//             mn=arr[i];
//             mnidx=i;
//         }
//     }swap(arr[mnidx],arr[mxidx]);
//     for(int i=0;i<5;i++){
//         cout << arr[i] << " ";
//     }return 0;
// }
                // if a array sorted or not

// bool sort(int arr[], int sz){
//     for (int i=0 ;i<sz;i++){
//         if (arr[i]>arr[i-1]){
//             return true ;
//         }else {
//             return false;
//         }
//     }
//     return sort(arr,sz);
// }

// int main(){
//     int arr[]={1,2,3,5};
//     int sz=5;
//     if (sort(arr,sz)){
//         cout <<"sorted";
//     }else{
//         cout << "unsorted";
//     }
//     return 0;
// }
                    // remove a element form a array
// int main(){
//     int nums[]={0,1,2,2,3,0,4,2};
//     int val=2;
//     int j=0;
//     for (int i:nums){
//         if (i!=val){
//             cout<< i;
//         }
//     }return 0;
// }

                    // print one unique element on a array

// int main(){
//     int ans =0;
//     vector<int> vec={1,2,3,1,2};
//     for(int i:vec){
//         ans^=i;
//     }
//     cout<<ans;
// }

                // print subarray

// int main (){
//     vector <int> arr={1,2,3,4,5};
//     for(int start=0;start<sizeof(arr)/sizeof(int);start++){     //starting point of the array
//         for(int end=start;end<sizeof(arr)/sizeof(int);end++){   //ending point of a array
//             for (int i=start;i<end;i++){    //return the subarray
//                 cout<<arr[i]<<",";
//             }cout<<" ";
//         }cout <<endl;
//     }
// }

                // print maximum subarray sum

// using brute force approch

// int main (){
// vector <int> vec={1,2,-22,4,5};
//     int mx=INT_MIN;
//     for(int st=0;st<5;st++){
//         int currentsum=0;
//         for(int end=st;end<5;end++){
//             currentsum+=vec[end];
//             mx=max(currentsum,mx);
//         }
//     }cout<<"max subarray sum is->"<<mx;
// }

                    // KADHAN ALGORITHAM

// int main(){
//     vector<int>arr={-4,1,2,3,4,-7,6,10};
//     int n = arr.size(),cs = 0,ms = 0;
//     for(int i = 0;i<n;i++){
//         cs += arr[i];
//         ms = max(cs,ms);
//         if(arr[i] < 0){
//             cs = 0;
//         }
//     }
//     cout<<ms;

// }

                    // pair sum

                // brute force approch

//) vector<int>pairsum(vector<int> arr,int ter{
//     vector <int>ans;
//     for (int st=0;st<arr.size();st++){
//         for(int end=st+1;end<arr.size();end++){
//             if (arr[st]+arr[end]==ter){
//                 ans.push_back(st);
//                 ans.push_back(end);
//                 return ans;
//             }
//         }
//     }return ans;
// }
// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int ter=4;
//     vector <int>ans=pairsum(arr,ter);
//     cout<<ans[0]<<ans[1];
// }

// better approch(two pointer)

// int main(){
//     vector <int> vec={1,2,3,4,5};
//     int i=0;
//     int ter=3;
//     int j=vec.size()-1;
//     vector <int> ans;
//     while(i<j){
//         if (vec[i]+vec[j]>ter){
//             j--;
//         }
//         else if(vec[i]+vec[j]<ter){
//             i++;

//         }else{
//             ans.push_back(i);
//             ans.push_back(j);
//             for (int k = 0; k < ans.size(); k++)
//             {
//                 cout<<ans[k]<<" ";
//             }
//             break;
//         }
//     }
// }


                // best using map

// int main(){
//     vector<int> arr = {2,4,5,1,5};
//     int sum = 10,n= arr.size(),ans1=0,ans2=0;
//     map<int,int>mp;

//     for(int i=0;i<n ;i++){
//         mp.insert({arr[i],i});
//         if(mp.find(sum-arr[i])!=mp.end()){
//             ans1 = i;
//             ans2 = mp[sum-arr[i]]; 
//         }
//     }
//     cout<<ans1<< ans2;
// }


// int main(){
//     vector<int> arr = {1,2,3,-3};
//     int ter = 0,n=arr.size();
//     vector<int>ans;
//     map<int,int>mp;
//     for(int i=0;i<n;i++){
//         mp.insert({arr[i],i});
//         if(mp.find(-arr[i]) != mp.end()){
//             ans.push_back(mp[-arr[i]]);
//             ans.push_back(mp[arr[i]]);

//         }
        
//     }
//     for(int i=0;i<2;i++){
//         cout<<ans[i];
//     }
// }

// mojority element

// int main(){
//     vector <int> vec={1,2,1,1,2};
//     for(int val: vec){
//         int fraq=0;
//         for(int j=0;j<5;j++){
//             if(val==vec[j]){
//                 fraq++;
//             }
//         }if (fraq>2){
//             cout<<val;
//         }
//     }
// }
                    // using sorting function

// int main(){
//     int n=5;
//     vector<int> vec={1,1,2,2,1};
//     sort(vec.begin(),vec.end());
//     int fraq=1;
//     int ans=vec[0];
//     for(int i=1;i<vec.size();i++){
//         if(vec[i]==vec[i-1]){
//             fraq++;
//         }
//         else{
//             fraq=1;
//             ans=vec[i];
//         }
//         if (fraq>n/2){
//             cout <<ans;
//         }
//     }
// }
                // using moore's vorting argorithm

// int main(){
//     vector<int> arr = {1,1,2,3,1,1,1};
//     int n = arr.size();
//     int frq = 0, ans = 0;
//     for(int i = 0; i<n;i++){
//         if(frq == 0) ans = arr[i];
//         if(ans == arr[i]) frq++;
//         else frq --;
//     }
//     cout<< ans;
// }

// rotate array form kth tearm
// int main(){
//     vector <int>vec={1,2,3,4,5};
//     int d;
//     cin>>d;
//     int start=d,end=4;
//     while(start<end){
//         swap(vec[start],vec[end]);
//         start++;
//         end--;
//     }
//     for (int i=0;i<vec.size();i++){
//         cout<<vec[i];
//     }

// }

// BYE STOCK AND SELL

// int main(){
//     vector <int>vec={1,2,3,4,5};
//     int best=vec[0];
//     int mp=0;
//     for(int i=1;i<vec.size();i++){
//         if(vec[i] > best){
//             mp=max(mp,vec[i]-best);
//         }
//         best=min(best,vec[i]);
//     }cout<< mp;
// }

// contner with most water

// brout force

// int main(){
//     vector <int> con={2,3,6,8,5};
//     int n=con.size();
//     int mwater=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int wid=j-i;
//             int hi=min(con[i],con[j]);
//             int water=wid*hi;
//             mwater=max(water,mwater);
//         }
//     }
//     cout<<mwater;
// }

// using two pointer approch

// int main(){
//     vector <int>vec={2,4,3,23,5};
//     int n=vec.size();
//     int st=0;
//     int end=n-1;
//     int mw=0;
//     while(st<end){
//         int wid=end-st;
//         int hei=min(vec[st],vec[end]);
//         int cw=(hei*wid);
//         mw=max(cw,mw);
//         if(vec[st]<vec[end])
//         st++;
//         else{
//             end--;
//         }

//     }
//     cout<<mw;
// }

// product of a array except it self

// brout force

// int main(){
//     vector <int> vec={1,2,3,4};
//     int n=vec.size();
//     vector <int> ans;
//     for (int i=0;i<n;i++){
//         int cm=1;
//         for(int j=i+1;j<n;j++){
//             cm*=vec[j];
//         }
//         ans.push_back(cm);
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }
//                     // optimize approch

// int main(){
//     vector <int> vec={1,2,3,4};
//     int n=vec.size();
//     vector <int> ans;
//     for (int i=0;i<n;i++){
//         int multi*=vec[i];
//         int a=multi/vec[i];

//     }
// }

// rotate a array left by one
// input [1,2,3,4,5] output [2,3,4,5,1]

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     int n = arr.size();
//     int temp = 0;
//     for(int i = 1;i<n;i++){
//         swap(arr[temp],arr[i]);
//         temp++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// second leargest
// best way to do

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     int lar = arr[0];
//     int sec = -1;
//     for(int i = 1; i<arr.size();i++){
//         if(arr[i]>lar){
//             sec = lar;
//             lar = arr[i];
//         }
//     }
//     cout<<sec;
// }

// remove all same ele form a array

// int main(){
//     vector<int> arr = {1,1,2,2,4,4,4,5,5,5};
//     int ele = arr[0];
//     int temp = 1;
//     for(int i = 1;i<arr.size();i++){
//         if(arr[i]!=ele){
//             ele = arr[i];
//             swap(arr[temp],arr[i]);
//             temp++;
//         }
//     }
//     for(int i = 0;i<temp;i++){
//         cout<<arr[i];
//     }
// }

// left rotate a array by d places

// brout

// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int d=2;
//     int n=arr.size();
//     for(int i=0;i<d;i++){
//         int temp = 0;
//         for(int i=1;i<n;i++){
//             swap(arr[temp],arr[i]);
//             temp++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// better

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     int d = 2;
//     vector<int> temp = arr;
//     int j=0,n=arr.size();
//     for(int i=d;i<n;i++){
//         swap(arr[j],arr[i]);
//         j++;
//     }
//     int k = 0;
//     for(int i = n-d;i<n;i++){
//         arr[i]=temp[k];
//         k++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }

// }

// best

// int main(){
//     vector<int> arr={1,2,3,4,5};
//     int d = 2;
//     int n = arr.size();
//     reverse(arr.begin(),arr.begin()+d);
//     reverse(arr.begin()+d,arr.begin()+n);
//     reverse(arr.begin(),arr.end());
//     for(int i=0;i<n ;i++){
//         cout<<arr[i];
//     }
// }

// move all zero to the end of the array

// int main(){
//     vector<int> arr = {0,1,0,0,0,5,3,0,5,0};
//     int z=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[z]);
//             z++;
//         }
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i];
//     }
// }

// union of two sorted rarray in sorted order-> the ans array should be carry only unque element

// int main(){
//     vector<int> a = {1, 2, 3, 4, 5, 1, 1};
//     vector<int> b = {1, 2, 3, 4, 5, 6, 1};
//     set<int> st;
//     for (int i = 0; i < a.size(); i++){
//         st.insert(a[i]);
//     }
//     for (int i = 0; i < b.size(); i++){
//         st.insert(b[i]);
//     }
//     vector<int> arr;
//     for (int ele : st){
//         arr.push_back(ele);
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i];
//     }
// }

// intersection of two array

// int main(){
//     vector<int> arr={1,2,2,3,3,4,5,6},brr={2,3,3,5,6,7} ;
//     vector<int> ans;
//     int i=0,j=0;
//     while(i!=arr.size() && j<brr.size()){
//         if(arr[i]<brr[j]) i++;
//         else if(brr[j]<arr[i]) j++;
//         else {
//             ans.push_back(arr[i]);
//             i++;
//             j++;
//         }
//     }

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i];
//     }

// }

                    // minimum distance

// int main(){
//     vector<int>a = {7, 1, 3, 4, 1, 7};
//     map<int, int> lastIndex;
//     int minDist = INT_MAX;

//     for (int i = 0; i < a.size(); i++) {
//         if (lastIndex.find(a[i]) != lastIndex.end()) {
//             int dist = i - lastIndex[a[i]];
//             minDist = min(minDist, dist);
//         }
//         lastIndex[a[i]] = i;
//     }

//     if(minDist == INT_MAX) cout<< -1;
//     else cout<< minDist;
// }

                // missing number btw 1 to n

                // brout 
// int main(){
//     int n=5;
//     vector<int> arr = {0,1,2,3,5};
//     vector<int> arr1(n + 1, 0);
//     for(int i=0;i<arr.size();i++){
//         arr1[arr[i]]=1;
//     }
//     for(int i=0;i<arr1.size();i++){
//         if(arr1[i]!=1){
//             cout<<i;
//         }
//     }
// }

            // best 

// int main(){
//     int n=5;
//     vector<int> arr = {0,1,2,3,5};
//     int s1 = n*(n+1)/2;
//     int s2 = 0;
//     for(int i=0;i<arr.size();i++){
//         s2+=arr[i];
//     }
//     int ans = s1-s2;
//     cout<< ans;
// }


// int main(){
//     int n=5;
//     vector<int> arr = {1,2,3,5};
//     int ans1 = 0;

//     for(int i=1;i<n;i++){
//         ans1^=i;
//     }
//     for(int i=0;i<arr.size();i++){
//         ans1^=arr[i];
//     }
//     cout<<ans1;
// }


                // longest subarray sum K 

// int main(){
//     vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
//     int k = 3, n = arr.size(),sum=0,len=0;
//     map<int ,int>mp;
//     for(int i = 0;i<n ;i++){
//         sum += arr[i];
//         mp.insert({sum,i});
//         if(mp.find(sum-k)!=mp.end()){
//             int l = i-mp[sum-k];
//             len = max(len,l);
//         }


//     }
//     cout<<len;
// }

                // sort 1's and 0's


// int main(){
//     vector<int> arr = {1,0,1,1,0,1,0,0,1,0,1,1};
//     int z = 0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]==0){
//             swap(arr[i],arr[z]);
//             z++;
//         }
//     }for(int i=0;i<arr.size();i++){
//         cout<<arr[i];
//     }
// }


// int main(){
//     int mx=INT_MIN;
//     vector<int> arr = {3,7,4,2,5};
//     for(int i=arr.size()-1; i>0;i--){
//         if(arr[i]>mx){
//             cout<<arr[i];
//             mx=arr[i];
//         }
//     }
// }

                    // longest consecutive sequence
                    //better

// int main(){
//     vector<int> arr = {1,1,2,2,2,110,3,4,111,112};
//     sort(arr.begin(),arr.end());
//     int mx = 1,ct=1,ls=arr[0];
//     for(int i=0;i<arr.size();i++){
//         if(ls+1==arr[i]){
//             ct++;
//             ls = ls+1;
//             mx= max(ct,mx);
//         }
//         else if(arr[i]==ls){
//             continue;
//         }
//         else{
//             ct=1;
//             ls=arr[i];
//         }
//     }
//     cout<<mx;
// }

                    // best 

// int main(){
//     vector<int> arr = {1,1,2,2,2,110,3,4,111,112};
//     set<int>s;
//     int ct=0,mx=0,ls = INT_MIN;
//     for(int i = 0;i<arr.size();i++){
//         s.insert(arr[i]);
//     }
//     for(int ele:s){
//         if(ele==ls+1){
//             ct++;
//             ls = ele;
//             mx = max(ct,mx);
//         }
//         else if(ls+1!=ele){
//             ls=ele;
//             ct=1;
//         }
//     }
//     cout<<mx;
// }

           

