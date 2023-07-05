#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, pair<int, int>> m; // first: 이름, second의 first: 들어온 순서, second의 second: 수익
map<string, string> mid;      // first: 상위, second: 하위
map<string, int> price;       // first: 이름, second: 수익

void calculateProfit(string name, int profit) {
    int send = (int)(profit * 0.1);
    int realprofit = profit - send;

    if (profit < 1) {
        send = 0;
        realprofit = 0;
    }

    auto item = m.find(name);
    if (item != m.end()) {
        item->second.second += realprofit;
        string parent = mid[name];
        if (parent != "-" && send > 0) { // send가 0 이상일 때만 상위 노드로 이익을 전달
            calculateProfit(parent, send);
        }
    }
}

vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    vector<int> answer;

    for (int i = 0; i < enroll.size(); i++) {
        m.insert({ enroll[i], { i, 0 } });
        mid.insert({ enroll[i], referral[i] });
    }

    for (int i = 0; i < seller.size(); i++) {
       string sellerName = seller[i];
        int sellerProfit = amount[i] * 100;

        while (sellerName != "-" && sellerProfit > 0) {
            int send = (int)(sellerProfit * 0.1);
            int realprofit = sellerProfit - send;

            auto item = m.find(sellerName);
            if (item != m.end()) {
                item->second.second += realprofit;
                sellerProfit = send;
                sellerName = mid[sellerName];
            }
            else {
                break;
            }
        }
    }

    // for (int i = 0; i < seller.size(); i++) {
    //     calculateProfit(seller[i], price[seller[i]]);
    // }

    for (int i = 0; i < enroll.size(); i++) {
        string name = enroll[i];
        auto iter = m.find(name);
        if (iter != m.end()) {
            answer.push_back(iter->second.second);
        }
    }

    return answer;
}
