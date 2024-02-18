// getName()
// console.log(getName)
// const getName = function home()//name of the function is not defined name of the constant is defined that is why it is giving error
// {
//   console.log("Namaste Javascript")
// };

// //why home is not defined because it is not defined in the global scope 

// console.log(myFunc); // Output: undefined
// // console.log(myFunc()); // Output: TypeError: myFunc is not a function

// const myFunc = () => {const axios = require('axios');

async function fetchData(url) {
  try {
    const response = await axios.get(url);
    console.log(response.data);
  } catch (error) {
    console.log('Error:', error);
  }
}

const url = 'https://api.github.com/users/github';
fetchData(url);
//   console.log("Hello, world!");
// };

// console.log(myFunc)
// console.log(myFunc())


// const square = function s(x) {
//   return x * x;
// };

// console.log(square(4)); // Output: 16
// console.log(s(4));
// // Output: ReferenceError: s is not defined why? because s is not defined in the global scope that mean if we don't define the function name in the global scope then we can't access it outside the function also its not necessary to give function name to the function? 


// var x = 1;
// a();
// b(); // we are calling the functions before defining them. This will work properly, as seen
// //in Hoisting.
//   console.log(x);
// function a() {
//   var x = 10; // local scope because of separate execution context
//   console.log(x);
// }
// function b() {
//   var x = 100;
//   console.log(x);
// }
// console.log(a);
// console.log(b);
// let a = 10;
// var b = 10;

// const data = "https://api.github.com/users/Anup0099";
// const user = fetch(data);
// console.log(user)
// user.then(
//     function (response) {
//         console.log(response)
//     }
// )//Output: Promise {<pending>} why? because fetch is a promise and it is not resolved yet that is why it is showing pending when it will be resolved then it will show the data of the url
//Output: SyntaxError: Identifier 'user' has already been declared"



// var twosum = function (nums, target) {
//     var map = {};
//     for (var i = 0; i < nums.length; i++) {
//         var diff = target - nums[i];
//         if (map[diff] !== undefined) {
//             return [map[diff], i];
//         }
//         map[nums[i]] = i;
//     }
    
// }


async function getData()
{
   return "anup"
}
async function main()
{
    const data= await getData()
    console.log(data)
}

main()


const axios = require('axios');

async function fetchData() {
    const url = 'https://api.github.com/users/github';
    try {
        const response = await axios.get(url);
        console.log(response.data);
    } catch (error) {
        console.log('Error:', error);
    }
}

fetchData();
