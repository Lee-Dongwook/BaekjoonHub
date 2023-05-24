function solution(num, total) {
    var answer = [];
     
    var t = total/num + (1-num)/2;
    
    for(let i = 0; i<=num-1;i++)
        {
            answer[i] = t+i;
        }
    
    return answer;
}