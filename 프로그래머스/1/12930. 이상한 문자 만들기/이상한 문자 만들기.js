function solution(s) {
    let arr = s.split(" ")
    let string = "";
    for(str of arr) {
        
        for(let i=0; i<str.length; i++) {
            if(i % 2 != 0) string += str[i].toLowerCase();
            else string += str[i].toUpperCase();
        }
        string += " ";
    }
    return string.substring(0,string.length-1);
}