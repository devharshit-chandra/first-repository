let a=document.getElementById("red")
let b=document.getElementById("green")
let body=document.querySelector("body")
a.addEventListener("click",()=>{
    body.style.backgroundColor="red"
})
b.addEventListener("click",()=>{
    body.style.backgroundColor="green"
})