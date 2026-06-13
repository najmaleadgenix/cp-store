async function fetchMeals() {
    const mealRes=await fetch("https://www.themealdb.com/api/json/v1/1/search.php?f=a");
    const data = await mealRes.json();
    // console.log(data.meals);
    allMeals(data.meals);
}

const allMeals = (meals) =>{
    const cardContain = document.getElementById("cardContain");

    meals.forEach(meal => {
        console.log(meal)

        const card = document.createElement("div");
        card.classList.add("card");
        card.style.width = "18rem";
        card.innerHTML=`
            <img src="${meal.strMealThumb}" class="card-img-top" alt="image">
            <h4>${meal.strMeal}</h4>
        `

        card.addEventListener("click",()=>{
            showMealModal(meal);
        })
        cardContain.appendChild(card);
    });
}

const showMealModal = (meal) =>{
    document.getElementById("mealModalImg").src=meal.strMealThumb;
    document.getElementById("modal-title").innerText=meal.strMeal;
    document.getElementById("description").innerText=meal.strInstructions;

    const modal = new bootstrap.Modal(document.getElementById("mealModal"));
    modal.show();
}


document.getElementById("button-addon2").addEventListener("click",(event)=>{
    const inputValue = document.getElementById("inputSearch").value.trim();
    searchMeal(inputValue);
})

async function searchMeal(value){
    if(value === "") return;

    const res = await fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${value}`);
    const data = await res.json();

    const cardContain = document.getElementById("cardContain");

    if(!data.meals){
        document.getElementById("notFoundMessage").innerText = "Meal Not Found";
        cardContain.innerHTML = "";
        return;
    }

    document.getElementById("notFoundMessage").innerText = "";
    cardContain.innerHTML = "";
    allMeals(data.meals);
}



fetchMeals()