let arr = [14,15,16,17,18,19,1,2,3,9,10,11,12,13,20,4,5,6,7,8]

arr.sort(function(a,b) {     //arr.sort() sorts as strings, not numbers.
    return a-b;
});
console.log(arr)