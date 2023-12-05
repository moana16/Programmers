function solution(arr) {
    var stk = [];
    var i = 0;
    
    while(true) {
        if(i === arr.length) break;
        if(stk.length === 0) {
            stk.push(arr[i]);
            i++;
        }
        else {
            if(stk[stk.length-1] < arr[i]){ 
                stk.push(arr[i]); 
                i++; 
            }
            else stk.pop();
        }
        
    }
    return stk;
}