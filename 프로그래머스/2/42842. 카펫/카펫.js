function solution(brown, yellow) {
    var answer = [];
    var sum = brown + yellow;
    var w=0, h=0;
    for(let i=1; i<=brown; i++) {
        for(let j=brown; j>= 1; j--) {
            if(2*i + 2*j - 4 === brown && i*j === sum)  {
                answer.push(Math.max(i,j));
                answer.push(Math.min(i,j));
                return answer;
                
            }
        }
    }
    
}