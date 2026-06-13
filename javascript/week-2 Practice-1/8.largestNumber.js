var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];

let ans = numbers[0];
for(let i =0; i<numbers.length; i++)
{
    if(ans<numbers[i]) ans = numbers[i];
}
console.log(ans);