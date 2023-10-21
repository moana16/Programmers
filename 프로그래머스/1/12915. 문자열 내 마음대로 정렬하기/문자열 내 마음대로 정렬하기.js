function solution(strings, n) {
    return strings.sort((x, y) => x[n] === y[n] ? x.localeCompare(y) : x[n].localeCompare(y[n]));
}
       