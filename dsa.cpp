// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={345,675,2342,876,2325};
//     int mx=arr[0];
//     for(int i=0;i<5;i++){
//         mx=max(arr[i],mx);

//     }
//     cout<<mx;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={345,675,2342,876,2325};
//     int mx=arr[0];
//     for(int i=0;i<5;i++){
//         mx=min(arr[i],mx);

//     }
//     cout<<mx;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={345,675,2342,876,2325};
//     int sum=0;
//     for(int i=0;i<5;i++){
//         sum+=arr[i];

//     }
//     cout<<sum;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={345,675,2342,876,2325};
//     int count=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]%2==0){
//             count++;
//         }

//     }
//     cout<<count;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={345,675,2342,876,2325};
//     int i=0;
//     int j=4;
//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// PREFIX SUM

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={2,4,8,12,4};
//     int pre[5];
//     pre[0] = arr[0];
//     for (int i = 1; i < 5; i++)
//     {
//         pre[i]=pre[i-1]+arr[i];

//     }
//     //  for (int i = 0; i < 5; i++)
//     // {
//     //     cout<<pre[i]<<endl;

//     // }

//     int L=2,R=5;   //may vary
//     int sum=pre[R]-pre[L-1];   //formula
//     cout<<sum;

// }

// SLIDING WINDOW

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={2,1,8,1,4,1};
//     int k=3;
//     int n=6;
//     int sum=0;
//     for(int i=0;i<k;i++){
//         sum+=arr[i];
//     }
//     int mxsum=sum;
//     for(int i=k;i<n;i++){
//         sum=sum-arr[i-k]+arr[i];
//         mxsum=max(mxsum,sum);
//     }
//     cout<<mxsum;

// }

// 2 pointers

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 6};
//     int n = 5;
//     int target = 6;
//     int l = 0;
//     int r = n - 1;
//     while (l < r)
//     {
//         int sum = arr[l] + arr[r];
//         if (sum == target)
//         {
//             cout << "found";
//             break;
//         }
//         else if (sum < target) l++;

//         else r--;
//     }
// }

// HASHING

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int arr[] = {3, 2, 8, 15, -8};
//     int n = 5;
//     int target = 7;
//     unordered_set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         int need = target - arr[i];
//         if (s.count(need))
//         {
//             cout << "found";
//             return 0;
//         }
//         s.insert(arr[i]);
//     }
//     cout << "no pair";
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    string name="aaradhya";
//    for(int i=0;i<name.length();i++){
//     cout<<name[i]<< " " ;
//    }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = "aaradhya";
//     int l = 0;
//     bool ok=true;
//     int r = s.length()-1;
//     while(l<r){
//         if(s[l]!=s[r])
//         {
//              ok=false;
//              break;

//         }
//         l++;
//         r--;
//     }
//     if(ok){
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"mkc";
//     }

// }

// variable sliding window (strings)

// recursion
//  #include <bits/stdc++.h>
//  using namespace std;

// void print(int n){
//     if(n == 0) return;      // base case     1 to n

//     print(n - 1);           // go to smaller problem
//     cout << n << " ";       // print while returning
// }

// int main(){
//     int n = 5;
//     print(n);
// }

// #include <bits/stdc++.h>
// using namespace std;

// void print(int n)
// {
//     if (n == 0)
//         return; // base case

//     // go to smaller problem
//     cout << n << " ";                                            // n to 1
//     print(n - 1); // print while returning
// }

// int main()
// {
//     int n = 5;
//     print(n);
// }

// #include <bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     if(n<=1) return n;
//     return fib(n-1)+fib(n-2);

// }
// int main()
// {
//     cout<<fib(5);
// }

// recursion

#include <bits/stdc++.h>
using namespace std;
void sex(int n)
{   
    if (n<1) return;
    cout<<n;
    sex(n-1);
    
}
int main()
{
    sex(5);
}