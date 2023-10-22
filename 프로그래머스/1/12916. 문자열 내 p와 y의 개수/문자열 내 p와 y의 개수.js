function solution(s){
    var answer = true;
    let p_cnt = 0, y_cnt = 0;
    let arr = s.split('');
    arr.map((x) => {
        if(x === 'p' || x === 'P') p_cnt++;
        if(x === 'y' || x === 'Y') y_cnt++;
    })

    return p_cnt === y_cnt ? true : false;
}