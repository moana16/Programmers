function solution(seoul) {
    var answer;
    seoul.map((name,idx) => {
        if(name === 'Kim') {
            answer = idx;
        }
    });
    return "김서방은 "+answer.toString()+"에 있다";
   
}