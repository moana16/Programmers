function solution(num_list) {
    var odd = 0;
    var even = 0;
    num_list.map((num,idx) => {
        num %2 == 0 ? even = even*10 + num : odd = odd*10 + num ;
    })
    return odd+even;
}