let a=document.getElementById("container")
const getdata=async()=>{
    try {
        const res=await fetch("https://dummyjson.com/products")
        const result=await res.json()
        console.log(result.products)
        display(result.products)
    } catch (error) {
        console.log(error)
    }
}
getdata()
const display=(data)=>{
    const posts=data.map((each)=>{
        return `
        <div>
        <h2>${each.title}</h2>
        <p>${each.description}</p>
        <img src="${each.images[0]}" height="250"/>
        </div>`
    })
    a.innerHTML=posts
}