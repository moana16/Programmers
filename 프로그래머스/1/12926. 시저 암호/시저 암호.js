function solution(s, n) {
    var answer = '';
    for(let i=0; i<s.length; i++) {
        if(s[i]==' ') {
            answer += " ";
            continue;
        }
        let c = s.charCodeAt(i) + n;
    
        if(s.charCodeAt(i)>= 65 && s.charCodeAt(i) <= 90 && c > 90 || c >122) {
            c -=26;
            
        }
        answer += String.fromCharCode(c);
        
    }
    return answer;
}