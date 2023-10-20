function solution(d, budget) {
    d.sort((a, b) => a - b);
    let i = 0;
    let sum = 0;
    
    while (i < d.length && sum + d[i] <= budget) {
        sum += d[i];
        i++;
    }
    
    return i;
}


