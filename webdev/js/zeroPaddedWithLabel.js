function printZeroPaddedWithLabel(number, label){
    let numberString = String(number);
    while(numberString.length < 3){
        numberString = "0" + numberString;
    }
    console.log(`${numberString} ${label}`);
}

function printFarmInventory(cows, chickens, goats){
    printZeroPaddedWithLabel(cows, "Cows");
    printZeroPaddedWithLabel(chickens, "Chickens");
    printZeroPaddedWithLabel(goats, "Goats");
}

printFarmInventory(7,11,3);