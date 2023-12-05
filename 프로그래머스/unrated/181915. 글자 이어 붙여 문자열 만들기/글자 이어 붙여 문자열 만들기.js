function solution(my_string, index_list) {
    var answer = [];
    var my_string_array = my_string.split('')
    index_list.forEach((idx) => {
        answer.push(my_string_array[idx]);
    })
    return answer.join('');
}