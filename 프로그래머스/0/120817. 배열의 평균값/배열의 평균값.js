function solution(numbers) {
    var answer = 0;
    const sum = numbers.reduce((total, current) => total + current, 0);
    
    answer = sum / numbers.length;
    
    return answer;
}