let a=document.getElementById("select")
let tag=document.querySelector("img")
a.addEventListener("change",()=>{
    if(a.value=='tiger'){
        tag.src="https://images.unsplash.com/photo-1591824438708-ce405f36ba3d?w=600&auto=format&fit=crop&q=60&ixlib=rb-4.1.0&ixid=M3wxMjA3fDB8MHxzZWFyY2h8MTJ8fHRpZ2VyfGVufDB8fDB8fHww"
    }
    else if(a.value=='cow'){
        tag.src="https://plus.unsplash.com/premium_photo-1668446123344-d7945fb07eaa?w=600&auto=format&fit=crop&q=60&ixlib=rb-4.1.0&ixid=M3wxMjA3fDB8MHxzZWFyY2h8MXx8Y293fGVufDB8fDB8fHww"
    }
    else if(a.value=='lion'){
        tag.src="https://images.unsplash.com/photo-1618641662184-bafefb91a542?w=600&auto=format&fit=crop&q=60&ixlib=rb-4.1.0&ixid=M3wxMjA3fDB8MHxzZWFyY2h8NHx8bGlvbnxlbnwwfHwwfHx8MA%3D%3D"
    }
})