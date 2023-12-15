function solution(s) {
    var answer = [];
    var str=s.split(" ");
    str.map((s) => {
        var tmp='';
        for(let i=0; i<s.length;i++) {
            if(i==0 && isNaN(s[i])) tmp += s[i].toUpperCase();
            else if(isNaN(s[i])) tmp += s[i].toLowerCase();
            else tmp += s[i];
        }
        answer.push(tmp);
    })
    
    return answer.join(" ");
}