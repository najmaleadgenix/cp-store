function monthlySavings(arr, num){
    if(!Array.isArray(arr) || typeof(num)!="number") return "invalid input";

    let money =0;
    for(let i=0; i<arr.length; i++)
    {
        if(arr[i]>=3000)
        {
            arr[i]= arr[i]*0.8;
        }
        money+=arr[i];
    }
    money-=num;

    if(money<0) return "earn more";
    else return money;

}

console.log(monthlySavings([1000,2000,3000], 5400))
console.log(monthlySavings([1000,2000,2500], 5000))
console.log(monthlySavings([900,2700,3400], 10000))
console.log(monthlySavings(100,[900,2700,3400]))


