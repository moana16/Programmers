function solution(strings, n) {
    return strings.sort((x, y) => {
        const compareByNthChar = x[n].localeCompare(y[n]);
        if (compareByNthChar === 0) {
            return x.localeCompare(y);
        }
        return compareByNthChar;
    });
}