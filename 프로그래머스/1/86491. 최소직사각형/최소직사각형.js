function solution(sizes) {
    var answer = 1;
    let arr1=[];
    let arr2=[];
    for(size of sizes) {
        if(size[0] > size[1]) {
            arr2.push(size[0]);
            arr1.push(size[1]);
        }
        else {
            arr1.push(size[0]);
            arr2.push(size[1]);
            
        }
    }
    answer *= Math.max(...arr1);
    answer *= Math.max(...arr2);
    return answer;
}

