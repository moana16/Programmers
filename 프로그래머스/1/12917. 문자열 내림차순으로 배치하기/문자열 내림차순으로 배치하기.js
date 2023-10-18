function solution(s) {
    const sortedSrt = s.split('').sort().reverse().join('');
    
    return sortedSrt;
}