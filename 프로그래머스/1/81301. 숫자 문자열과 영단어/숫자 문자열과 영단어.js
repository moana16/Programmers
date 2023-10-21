function solution(s) {
    var answer = "";
    const number = ["zero", "one", "two","three","four","five","six","seven","eight","nine"];
    var str="";
    for(let i=0; i<s.length; i++) {
        
        if(isNaN(+s[i])) str += s[i];
        else {
            if(str.length !== 0) {
                answer += number.indexOf(str);
                str = "";
            }
            answer += s[i];
        }
        if(number.includes(str)) {
            answer += number.indexOf(str);
            str = "";
            
        }
        
        
        
    }
    return +answer;
}