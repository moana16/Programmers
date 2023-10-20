function solution(number) {
    var answer = 0;
    number.sort((a,b) => a-b);
    for(let i=0; i<number.length; i++){
        for(let j=i+1; j<number.length; j++) {
            let k=j+1;
            while(k <= number.length-1) {
                if(number[i]+number[j]+number[k] === 0) answer++;
                k++;
            }
            
        }
    }
    
    return answer;
}