function solution(s) {
    let l = s.length;
    return l%2==0? s.substr(l/2-1,2) : s.substr(l/2,1);
}