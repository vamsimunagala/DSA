const arrNumbers = [1,2,,2,9,8]

const duplicates = arrNumbers.filter((ele,index,arr)=>arr.indexOf(ele)!==index)
console.log(duplicates)