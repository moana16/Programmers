function solution(array, commands) {
    return commands.map( c => {
        return array.slice(c[0]-1, c[1]).sort((x,y)=>x-y)[c[2]-1];
    })
    
}