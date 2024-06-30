let random = Math.random()
let a = prompt("enter first number")
let b = prompt("enter second number")
let c = prompt("enter operation")

let obj = {
    "+":"-",
    "*":"+",
    "-":"/",
    "/":"**"
}

if(random<0.1){
    //perform correct calculation
    console.log(`the result is ${a} ${c} ${b}}`)
    alert(`the result is ${eval(`${a} ${c} ${b}`)}`)
}
else{
    //perform wrong calculation
    c = obj[c]
    alert(`the result is ${eval(`${a} ${c} ${b}`)}`)
}