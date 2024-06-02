const arr = [1, 2, 3, 4];
console.log(arr.slice(0, 2)); // [1,2]
const arrmap = arr.map((curr, index, arr) => {
    return curr * 2;
})
console.log(arrmap); // [2,4,6,8]
const arrFilter =arr.filter((curr, index, arr)=>{
    return curr>2;
})
console.log(arrFilter); // [3,4]
const arrReduce = arr.reduce((acc, curr, index, arr) => {
    console.log(acc)
    return acc + curr;
},2)
console.log(arrReduce); // 10

