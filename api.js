let p=new Promise((res,rej)=>{
    fetch("https://dummyjson.com/products")
    .then((res)=>res.json())
    .then((data)=>res(data))
    .catch((err)=>rej(err))
})
p.then((res)=>{
    console.log(res)
}).catch((err)=>{
    console.log(err)
})