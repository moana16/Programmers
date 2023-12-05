function solution(my_string, queries) {
    var answer = '';
    for(query of queries) {
        var str = my_string.substring(query[0], query[1]+1).split('').reverse().join('');
        my_string = my_string.substring(0,query[0]) + str + my_string.substring(query[1]+1);
    }
    return my_string;
}