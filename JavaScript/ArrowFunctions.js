

// const addNums = (a,b) => {
//     return a + b;
// }


// can also be written as 

const addNums = (a,b) => a + b;
const ans = addNums(5,2);

console.log(ans);


// arguments, not available in arrow function

function sayHello () {
    console.log(arguments);  // pass as many args as want 
}

// another approach 

const sayHello2 = (...args) => {
    console.log(args); 
}

sayHello2(1,2,3,4,5);

// Hoisting not works for arrow function

//  hoisting: calling variables or function before declaration 

// this keyword: does'nt work for arrow functions 
const obj = {
  name: "Ali",
  sayName: () => { // Function expression
    console.log('My name is ', this.name);
  }
};

obj.sayName();


