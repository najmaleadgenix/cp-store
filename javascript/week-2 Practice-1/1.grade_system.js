// 1.গ্রেড মেক িং এর বাক অিংশটু ু গ্রর মেলগ্রে হগ্রব কিগ্রে কিগ্রে

let mark = 89;
let grade;

if(mark>=80 && mark<=100)
{
    grade = 'A+';
}
else if(mark>=70 && mark<80)
{
    grade = 'A';
}
else if(mark>=60 && mark<70)
{
    grade = 'A-';
}
else if(mark>=50 && mark<60)
{
    grade = 'B';
}
else if(mark>=40 && mark<50)
{
    grade = 'C';
}
else if(mark>=33 && mark<40)
{
    grade = 'D';
}
else if(mark>=0 && mark<33)
{
    grade = 'F';
}
else 
{
    grade = "Invalid marks";
}

console.log(grade);