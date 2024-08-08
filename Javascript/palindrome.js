// write a functio that checks whether the given string is a palidrome or not


function isPalindrome(str) {

    const reversedStr = str.split("").reverse().join("")

    return str == reversedStr;
}

console.log(isPalindrome("madam"));
