// write a function to return the longest word in the sentence

function findLongestword(sentence) {
    const words = sentence.split(" ")
    let longestWord = "";
    for(let word of words){
        if(word.length > longestWord.length){
            longestWord = word
        }
    }
    return longestWord
}
console.log(findLongestword(" i love coding in javascript"));
