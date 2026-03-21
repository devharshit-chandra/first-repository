export const cart=(dat)=>{
    let sum=0
    for(let i=0;i<dat.length;i++){
        sum=sum+dat[i]
    }
    return sum
}