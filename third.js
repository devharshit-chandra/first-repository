//map->used to apply a specific condition on each element of array
let a=[1,2,3,4,5]
let b=a.map((each)=>each+each)
console.log(b)
//convert each element to uppercase
let x=['a','b','c']
let y=x.map(each=>each.toUpperCase())
console.log(y)
//add index value to each element of a
//square of each element and add 1 to them
//length of each element in the array
//filter->filter out element based on specific condition
let aplha=[2,4,8,12,28]
let beta=aplha.filter(each=>each<12)
console.log(beta)
//let a=['abc','efgh','mnopxy'] filter out which is greater than 4
//let b=['key','keyboard','mouse'] filter out result which have ke in their name
//let c=[1,2,3,4,5] filter out even number and then square each element
//reduce->reduce all the elements of an array to a single value
let e=[1,2,3,4,5]
let g=e.reduce((acc,cv)=>acc-cv)
console.log(g)
//let a=[1,2,3,4,5] product of array
//let a=[a,b,c,d]count element inside the array
//ternary operator
let age=28
let box=age>=18?'adult':'minor'
console.log(box)
//marks>=90=a marks>=75=b marks>=50=c else fail
//a b c greater among 3