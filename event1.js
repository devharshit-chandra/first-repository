let a=document.getElementById("plus")
let b=document.getElementById("minus")
let tag=document.querySelector("h1")
let size=32
a.addEventListener("click",()=>{
    size=size+10
    tag.style.fontSize=size+"px"
})
b.addEventListener("click",()=>{
    size=size-10
    tag.style.fontSize=size+"px"
})