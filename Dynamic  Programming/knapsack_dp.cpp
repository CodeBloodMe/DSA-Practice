#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

     int wt[]={10,20,30};
    int val[]={60,100,120};
    int W=50,n=3;

    int dp[n+1][W+1];

    for(int i=0;i<=n;i++){
        for(int w=0;w<=W;w++){

            if(i==0||w==0) dp[i][w]=0;

            else if(wt[i-1<=W]){
                dp[i][w]=max(val[i-1]+dp[i-1][w-wt[i-1]],dp[i-1][w]);
            }else{
                dp[i][w]=dp[i-1][w];
            }

        }
    }
    cout<<"Max value = "<<dp[n][W];

    return 0;
}
