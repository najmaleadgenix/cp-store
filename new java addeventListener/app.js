

document.getElementById("buttonArea").addEventListener("click", (event)=>{
    const inputfield = document.getElementById("inputfield").value;
    document.getElementById("inputfield").value="";
    const p = document.createElement("p");
    p.classList.add("content");
    p.innerText = inputfield;

    const contentContainer= document.getElementById("contentContainer");
    contentContainer.appendChild(p);

    const content = document.getElementsByClassName("content");
    for(const element of content)
    {
        element.addEventListener("click", (event)=>{
            event.target.parentNode.removeChild(element);
        })
    }
})