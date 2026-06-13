let num =2000;

if(num%400==0 || (num&4==0 && num%100!=0)){
    console.log("Leap Year");
}
else {
    console.log("Not Leap Year");
}