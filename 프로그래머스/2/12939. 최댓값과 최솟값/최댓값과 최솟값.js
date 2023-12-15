function solution(s) {
    var nums=s.split(" ");
    var answer = Math.min(...nums) + " " + Math.max(...nums)
    return answer;
}