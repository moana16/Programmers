function solution(name, yearning, photo) {
    var answer = [];
    const map = {};
    for(let i=0; i<name.length; i++) {
        map[name[i]] = yearning[i]; 
    }

    for(p of photo) {
        let total = 0;
        for(let i=0; i<p.length; i++) {
            if(map[p[i]] !== undefined) {
                total += map[p[i]];   
            } 
        }
        answer.push(total);
    }
    return answer;
}