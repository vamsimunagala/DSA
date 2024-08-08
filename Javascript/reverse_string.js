//reverse a string

const str = "javascript"
function revString(str) {
    let reverseString = ""
    for(let i=str.length-1;i>=0;i--){
        revString+=str[i];
    }
    return revString;
}

console.log(revString(str))

// in built function 

function reverseString(str){
    return str.split('').reverse().join('')
}

console.log(reverseString(str));
