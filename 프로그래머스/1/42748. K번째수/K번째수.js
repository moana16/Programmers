function solution(array, commands) {
    var answer = [];
    for(c of commands) {
        let arr = array.slice(c[0]-1, c[1]);
        console.log(arr);
        arr.sort((x,y)=>x-y);
        answer.push(arr[c[2]-1]);
    }
    return answer;
}