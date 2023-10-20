function solution(t, p) {
    var answer = 0;
    let size = p.length;
    for(let i=0; i<t.length; i++) {
        let sub = t.substring(i,i+size);
        if(sub.length < size) break;
        console.log(sub);
        if(Number(sub) <= Number(p)) answer++;
    }
    return answer;
}