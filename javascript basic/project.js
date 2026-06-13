const allProduct =()=>{
    fetch('https://fakestoreapi.com/products')
  .then(response => response.json())
  .then(data =>{ 
    displayProduct(data);
    });
};

const displayProduct = (products) =>{
   const productContainer= document.getElementById("productContainer");
    console.log(products);
    products.forEach(product => {
        const div = document.createElement("div");
        div.classList.add("card");
        
        div.innerHTML=`
            <img class="productImage" src="${product.image}">
            <h2>${product.title.slice(0,20)}</h2>
            <h3>price: ${product.price}</h3>
            <p>${product.description.slice(0,50)}</p>
            <button onclick="showDetails('${product.id}')"> show more</button>
            <button onclick="addToCart('${product.title.slice(0,20)}','${product.price}')">add to cart</button>
        `;
        productContainer.appendChild(div);
        
    });
}

const addToCart = (title,price) =>{
    const Cartcount =document.getElementById("count").innerText;
    const convertedCount = parseInt(Cartcount) +1;
    document.getElementById("count").innerText=convertedCount;

    const container = document.getElementById("cartMainContainer");
    const div = document.createElement("div");
    div.classList.add("mainCart");
    div.innerHTML=`
        <p>${title}</p>
        <h3 class ="price">${price}</h3>
    `
    container.appendChild(div);
    countTotal();
}

const countTotal = ()=>
{
    let count =0;
    const price = document.getElementsByClassName("price");
    for(const element of price)
    {
        count += parseFloat(element.innerText);
    }
    console.log(count);
    document.getElementById("total").innerText=count.toFixed(2);
}

const showDetails =(id)=>{
    fetch('https://fakestoreapi.com/products/${id}')
  .then(response => response.json())
  .then(data => console.log(data));
}
allProduct()