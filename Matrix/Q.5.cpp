// Maximum size rectangle

#include <iostream>
#include <vector>
#include <map>
using namespace std;


int MaxRectangle(vector<vector<int>> v , int R,int C){
    int count1=0,max_count1=0,index1=-1;

    for(int i=0 ; i<R ; i++){
        for(int j=0 ; j<C ; j++){
            if(v[i][j]==1)
            count1++;
        }
        if(count1>=max_count1){
            max_count1=count1;
            index1=i;
        }
        count1=0;
    }

    int count2=0,max_count2=0,index2=-1;

    for(int i=0 ; i<R ; i++){
        for(int j=0 ; j<C ; j++){
            if(v[i][j]==1 && i!=index1)
            count2++;
        }
        if(count2>=max_count2){
            max_count1=count1;
            index2=i;
        }
        count2=0;
    }

    int area,l=0,b=0;

    for(int i=index2 ; i<=index1 ; i++){
        b=b+v[i][0];
    }

    for(int i=0 ; i<C ; i++){
        l=l+v[index2][i];
    }

    area=l*b;
    return area;
}

int main()
{
    int R,C;
    cin>>R>>C;
    int ele;
    vector<vector<int>> v;
    vector<int> x;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> ele;
            x.push_back(ele);
        }
        v.push_back(x);
        x.clear();
    }
    cout << MaxRectangle(v, R, C) << endl;
}
