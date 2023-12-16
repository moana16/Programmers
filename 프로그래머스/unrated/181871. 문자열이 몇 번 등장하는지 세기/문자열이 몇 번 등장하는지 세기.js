function solution(myString, pat) {
    var answer = 0;
    let j = pat.length;
    for(let i=0; i<myString.length; i++) {
        var tmp = myString.slice(i,j);
        if(tmp.includes(pat)) answer++;
        j++;
        
    }
    return answer;
}