function solution(s) {
    var answer = [-1];
    for(let i=1; i<s.length; i++) {
        let n = -1;
        for(let j=i-1; j >=0; j--) {
            if(s[i] === s[j]) {
                n = i-j;
                break; 
            }
        }
        answer.push(n);       
    }
    return answer;
}