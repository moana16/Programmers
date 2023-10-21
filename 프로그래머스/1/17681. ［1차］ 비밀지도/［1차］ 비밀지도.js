function solution(n, arr1, arr2) {
    var answer = [];
    for(let i=0; i<n; i++) {
        let map1 = arr1[i].toString(2).padStart(n,'0');
        let map2 = arr2[i].toString(2).padStart(n,'0');
        console.log(map1,map2);
        
        let total = '';
        
        for(let j=0; j<n; j++) {
            if(map1[j] === '1' || map2[j] === '1') total += '#';
            else total += ' ';
        }
        answer.push(total);
    }
    
    return answer;
}