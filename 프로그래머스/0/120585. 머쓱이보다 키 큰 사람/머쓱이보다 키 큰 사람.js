function solution(array, height) {
    var answer = 0;
    
    const result = array.filter((arr) => arr > height);
    
    answer = result.length
    
    return answer;
}