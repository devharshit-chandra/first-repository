//promise creation
let p=new Promise((res,rej)=>{
    let flag=false
    if(flag){
        res('promise fulfilled')
    }
    else{
        rej('promise rejected')
    }
})
//promise consumption
p.then((res)=>{
    console.log(res)
}).catch((err)=>{
    console.log(err)
})