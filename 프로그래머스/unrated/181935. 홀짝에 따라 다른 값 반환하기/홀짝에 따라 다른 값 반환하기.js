function solution(n) {
    var answer = 0;
    if( n % 2 === 0) {
        for(let i = 2; i <= n; i=i+2) {
            answer += i*i;
        }
        
    }
    else {
        for(let i = 1; i <= n; i=i+2) {
            answer += i;
        }
        
    }
    return answer;
}