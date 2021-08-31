// Function to check if number is a palindrome
function isPalindrome(num){
	
	// convert num to string data type. Convert into an array;
	// Eg: 123 => "123" => ['1','2','3'];
	let numArr = String(num).split('');
	
	// use reverse function to reverse array
	// Eg: ['1','2','3'] => ['3','2','1']
	numArr.reverse();
	
	// convert reversed array to a Number
	// Eg: ['3','2','1'] => 321
	numArr = +numArr.join('');
	
	// check if input num is equal to reversed input. return the boolean answer
	return num === numArr;
}

console.log(isPalindrome(121))
