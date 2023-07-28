function solution(my_string) {
    var answer = '';
    
    let result = "";
    for(let i = my_string.length-1; i>=0; i--)
    {
        result += my_string[i];        
    }
    
    answer = result;
    
    return answer;
}