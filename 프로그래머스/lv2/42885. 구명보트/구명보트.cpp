#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end()); // Sort people's weights
    
    int left = 0; // Pointer to the lightest person
    int right = people.size() - 1; // Pointer to the heaviest person
    
    while (left <= right) {
        if (people[left] + people[right] <= limit) {
            left++; // Pair can ride together
        }
        right--;
        answer++; // Increment the number of lifeboats
    }
    
    return answer;
}
