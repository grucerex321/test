//
//  main.cpp
//  2
//
//  Created by Student on 2016/3/3.
//  Copyright © 2016年 Student. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    /*
    int sc[6],sum=0;
    
    for (int i=1; i<=5; i++)
    {
        cout << "請輸入第 " << i << " 位學生的成績：";
        cin >> sc[i];
    }
    for (int i=1; i<=5; i++)
    {
        sum=sum+sc[i];
    }
    cout << "全班總成績為：" << sum << "分, " << "平均為 " << sum/5 << "分";
    */
    /*
    int n,ss[41];
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> ss[i];
    }
    for (int i=n; i>=1; i--)
    {
        cout << ss[i] << " ";
    }
    */
    /*
    int a,n,x=0,y=0,z=0;
    cin >> n >> a;
    int ss[n-1];
    for (int i=0; i<n-1; i++)
    {
        cin >> ss[i];
        if (ss[i]<a)
            x+=1;
        else if (ss[i]==a)
            y+=1;
        else
            z+=1;
    }
    cout << x << endl << y << endl << z << endl;
    */
    
    int n,sum=0,max=0,min=0;
    cin >> n;
    int ss[n];
    for (int i=0; i<n; i++)
    {
        cin >> ss[i];
        sum=sum+ss[i];
    }
    max=ss[0];
    min=ss[0];
    for (int i=0; i<n; i++)
    {
        if (ss[i]>max)
            max=ss[i];
        else if (ss[i]<min)
            min=ss[i];
    }
    cout << sum << endl << sum/n << endl << max << endl << min << endl;
    
    
    
    
    
    
    
    return 0;
}
