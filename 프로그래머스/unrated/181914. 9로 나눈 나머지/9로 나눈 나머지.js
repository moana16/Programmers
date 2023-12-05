function solution(number) {
    var answer = 0;
    var str = number.toString().split('').forEach((n) => {
        answer += Number(n);
    });
    
    return number===0? 0 : answer%9;
}