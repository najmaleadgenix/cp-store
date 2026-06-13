let cart = [];

async function fetchCocktail() {
   const res= await fetch("https://www.thecocktaildb.com/api/json/v1/1/search.php?f=a");
   const data = await res.json();
   console.log(data.drinks);
    showDrinks(data.drinks);
}


function showDrinks(drinks){
    const cardsContainer = document.getElementById("cardsContainer");
    cardsContainer.innerHTML="";

    drinks.forEach(drink => {
        
       const div= document.createElement("div");
       div.classList.add("card","border","border-dark-subtle","shadow-lg");
       div.style="width: 18rem";
       div.innerHTML=`
        <img src="${drink.strDrinkThumb}" class="card-img-top" alt="Drink Image">
        <div class="card-body">
        <h4 class="card-title fw-bold">Name: ${drink.strDrink}</h4>
        <h5 class="card-catagory">Catagory: ${drink.strCategory}</h5>
        <p class="card-text">Instruction: ${drink.strInstructions.slice(0,20)}</p>
       <div class="d-flex justify-content-around">
       <button type="button" class="btn btn-primary cartButton">Add to Cart</button>
       <button type="button" id="detailsButton" class="btn btn-primary detailsButton">Details</button>
       </div>
       `;
        const detailsButton = div.querySelector(".detailsButton")
        detailsButton.addEventListener("click", ()=>{
            showModal(drink);
        });

        const cartButton = div.querySelector(".cartButton")
        cartButton.addEventListener("click", ()=>{
            addToCart(drink);
        })

       cardsContainer.appendChild(div); 
    });
};

const addToCart = (drink) =>{
    if(cart.length >= 7){
    alert("You can add maximum 7 items");
    return;
    }

    cart.push(drink);

    const cartContant = document.getElementById("cartContant");
    const cartCount = document.getElementById("cartCount");

    cartContant.innerHTML="";
    cartCount.innerText=cart.length;

    cart.forEach((drink,count) =>{
    const div = document.createElement("div");
    div.classList.add("d-flex","justify-content-around","align-items-center");

    div.innerHTML = 
    `
      <p>${count+1}</p>
      <img src="${drink.strDrinkThumb}" width="30">
      <p>${drink.strDrink}</p>
    `;

    cartContant.appendChild(div);
  });
};



const showModal =(drink) =>{
    document.querySelector(".modal-title").innerText = drink.strDrink;
    document.getElementById("modalimg").src = drink.strDrinkThumb;
    document.getElementById("drinkCategory").innerText = drink.strCategory;
    document.getElementById("drinkAlcho").innerText = drink.strAlcoholic;
    document.getElementById("drinkInstruction").innerText = drink.strInstructions;

    const modal = new bootstrap.Modal(document.getElementById("drinkModal"));
    modal.show();
}


document.getElementById("button-addon2").addEventListener("click",()=>{
    const value = document.getElementById("inputSearch").value.trim();
    searchDrink(value);
})

async function searchDrink(value){
    if(value === "") return;

    const res = await fetch(`https://www.thecocktaildb.com/api/json/v1/1/search.php?s=${value}`)
    const data = await res.json();

    const cardsContainer = document.getElementById("cardsContainer");

    if(!data.drinks){
        document.getElementById("notFoundMessage").innerText = "Meal Not Found";
        cardsContainer.innerHTML = "";
        return;
    }

    document.getElementById("notFoundMessage").innerText = "";
    cardsContainer.innerHTML = "";
    showDrinks(data.drinks);
}



fetchCocktail()