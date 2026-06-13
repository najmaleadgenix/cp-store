document.getElementById("title").style.color="red";


// -----------loop diye element dhore color change kora
// const allbox = document.getElementsByClassName("box");
// for(let i=0; i<allbox.length; i++)
// {
//     const element = allbox[i];
//     element.style.backgroundColor = "green";

//     if(element.innerText == "box-5")
//         element.style.backgroundColor = "red";
// }


//  <!-- for add event listener -->
// document.getElementById("buttonArea").addEventListener("click", (event)=>{
//     const inputfield = document.getElementById("inputfield").value;
//     document.getElementById("inputfield").value="";
//     const p = document.createElement("p");
//     p.classList.add("content");
//     p.innerText = inputfield;

//     const allContainer= document.getElementById("contentContainer");
//     allContainer.appendChild(p);

//     const content = document.getElementsByClassName("content");
//     for(const element of content)
//     {
//         element.addEventListener("click", (event)=>{
//             event.target.parentNode.removeChild(element);
//         });
//     }
// })

//------jesonPlaceHolder API
// fetch("https://jsonplaceholder.typicode.com/users")
// .then(res=>res.json())
// .then(data=>{
//     console.log(data)
// })
// .catch(err=>{
//     console.log(err);
// });

// --------API er element access using foreach loop
fetch("https://jsonplaceholder.typicode.com/users")
.then((res)=>res.json())
.then((data)=>{
    displayData(data);
})
.catch((err)=>{
    console.log(err);
});

const displayData = (userData) =>{
    const container = document.getElementById("userContainer");
    
    userData.forEach(user => {
        const div = document.createElement("div");
        div.classList.add("user");
        div.innerHTML = `
        <h4>title</h4>
        <p>description</p>
        <button>Details</button>
        `;
        container.appendChild(div);
    });
};


