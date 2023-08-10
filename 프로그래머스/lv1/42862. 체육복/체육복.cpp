#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> students(n, 1);  

    
    for (int student : lost) {
        students[student - 1] -= 1;
    }

    
    for (int student : reserve) {
        students[student - 1] += 1;
    }

    
    for (int i = 0; i < n; ++i) {
        if (students[i] == 0) {
            if (i - 1 >= 0 && students[i - 1] == 2) {
                students[i] = 1;
                students[i - 1] = 1;
            } else if (i + 1 < n && students[i + 1] == 2) {
                students[i] = 1;
                students[i + 1] = 1;
            }
        }
    }

    
    int answer = 0;
    for (int student : students) {
        if (student > 0) {
            answer++;
        }
    }

    return answer;
}