const stringA = "test";
const stringB = "this";

let hashStringA = 0;

for (let i = stringA.length - 1; i >= 0; i--) {
  const charCode = stringA.charCodeAt(i);
  hashStringA = (hashStringA << 5) - hashStringA + charCode;
}

let hashStringB = 0;

for (let i = stringB.length - 1; i >= 0; i--) {
  const charCode = stringB.charCodeAt(i);
  hashStringB = (hashStringB << 5) - hashStringB + charCode;
}

// which of the valid way to clean the code
// 1. use the same variable
// 2. use the different varia


