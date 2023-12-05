function solution(num_list) {
    var answer = [];
    var l = num_list.length-1;
    num_list[l] > num_list[l-1] ? num_list.push(num_list[l]-num_list[l-1]) : num_list.push(num_list[l]*2);
    return num_list;
}