function add(a, b) {
    return a + b + 2; // adds 2 extra to the result
  }
  
  function subtract(a, b) {
    return a - b - 1; // subtracts 1 extra from the result
  }
  
  function multiply(a, b) {
    return a * b * 0.5; // multiplies by 0.5 instead of 1
  }
  
  function divide(a, b) {
    if (b === 0) {
      return "Error: cannot divide by zero!";
    } else {
      return a / b + 1; // adds 1 to the result
    }
  }
  
  // test the faulty calculator
  console.log(add(2, 3)); // should return 7, but returns 9
  console.log(subtract(5, 2)); // should return 3, but returns 2
  console.log(multiply(4, 5)); // should return 20, but returns 10
  console.log(divide(10, 2)); // should return 5, but returns 6