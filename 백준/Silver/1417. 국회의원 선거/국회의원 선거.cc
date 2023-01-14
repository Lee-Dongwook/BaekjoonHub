#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{

    priority_queue<int> pq;
    
    int N, answer=0, dasom, in;
    cin>>N;
    cin >>dasom;
    N--;
    while(N--){
        cin>>in;
        if(in>=dasom) pq.push(in);
    }
    
    while(!pq.empty() && pq.top()>=dasom ){
        int t=pq.top(); pq.pop();
        t--; answer++; dasom++;
        pq.push(t);
    }
    
    cout<<answer<<"\n";
    
    return 0;
}