process.stdin.setEncoding('utf8');
process.stdin.on('data', data => {
    const n = data.split(" ");
    const a = Number(n[0]), b = Number(n[1]);
    let star = ("*").repeat(a);
    let answer = (star+"\n").repeat(b);
    console.log(answer);
});