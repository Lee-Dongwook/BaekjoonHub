import java.util.*;
class Solution {
    public int solution(int[][] dots) {
        int answer = 0;
        loop1 :
        for(int i=0; i<dots.length-1; i++){
            for(int j=i+1; j<dots.length; j++){
                List<Integer> lst = new ArrayList<>(Arrays.asList(0,1,2,3));
                lst.remove(Integer.valueOf(i));lst.remove(Integer.valueOf(j));
                if((double)(dots[i][1] - dots[j][1]) / (dots[i][0] - dots[j][0]) ==
                        (double)(dots[lst.get(0)][1] - dots[lst.get(1)][1]) / (dots[lst.get(0)][0] - dots[lst.get(1)][0])){
                    answer++;
                    break loop1;
                }
            }
        }
        return answer;
    }
}