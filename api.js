let p=new Promise((resolved,rej)=>{
    fetch("https://dummyjson.com/products")
    .then((resolved)=>resolved.json())
    .then((data)=>resolved(data))
    .catch((err)=>rej(err))
})
p.then((resolved)=>{
    console.log(resolved)
}).catch((err)=>{
    console.log(err)
})