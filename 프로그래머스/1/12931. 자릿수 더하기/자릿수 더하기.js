function solution(n)
{
    var answer = 0;
    n.toString().split('').map(x => {
        answer += +x;
    })

    return answer;
}