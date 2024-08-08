// given an integer array nums,find the subarray with the largest sum,
// and return its sum

// input :[-2,1,-3,4,-1,2,1,-5,4] ==> output:6 [4,-2,1,-1]


// Brute Force Approach

function maxSubArrayBruteForce(nums){
    let maxSum = nums[0];
    let startInx=0;
    let endIdx =0;

    for(let i=0;i<nums.length;i++){ // n 
        let currentSum =0;
        for(let j=i;j<nums.length;j++){ // n /n-1/n-2
            currentSum = currentSum+nums[j];
            if(currentSum>maxSum){
                maxSum=currentSum;
                startInx=i;
                endIdx=j;
            }
        }
    }
    return {
        sum:maxSum,
        subArray :nums.slice(startInx,endIdx+1)
    };
}

console.log(maxSubArrayBruteForce([-2,1,-3,4,-1,2,1,-5,4]));

// time complexity = O(n^2)
//space complexity = O(1)  


// kadane's algorithm 

function maxSubArray(nums){
    let sum=0;
    let max=0;

    for (let index = 0; index < nums.length; index++) {
        sum+=nums[index];

        if(sum>max){
            max=sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    return max;
}

console.log(maxSubArray([-2,1,-3,4,-1,2,1,-5,4]));
