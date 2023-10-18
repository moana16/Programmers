function solution(array) {
    var answer = 0;
    const counts ={};
    let mode = [];
    for(n of array) {
        counts[n] = (counts[n] || 0) +1;
    }
    for(const n in counts) {
        if(counts[n] > answer) {
            answer = counts[n];
            mode = [n];
        }
        else if(counts[n] === answer) {
            mode.push(n);
        }
    }
    if(mode.length === 1) return parseInt(mode[0]);
    else return -1

}