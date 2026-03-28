const getData=async()=>{
    try {
        const res=await fetch("https://dummyjson.com/products")
        const result=await res.json()
        console.log(result)
    } catch (error) {
        console.log(error)
    }
}
getData()