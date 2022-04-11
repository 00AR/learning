function zeroPad(number, width){
    let string = String(number);
    while(string.length<width){
        string = "0"+string;
    }
    return string;
}

function printFarmInventory(cows, chickens, goats){
    console.log(`${zeroPad(cows, 3)} Cows`);
    console.log(`${zeroPad(chickens, 3)} Chickens`);
    console.log(`${zeroPad(goats, 3)} Goats`);
}

printFarmInventory(7, 16, 3);

//printZeroPaddedWithLabel is called for its side effects, it prints a line.
//zeroPad is called for its return value.
//zeroPad is useful in more situations than the first.