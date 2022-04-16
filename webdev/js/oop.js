// when a function is called as a method--looked up as a property
// and immediately called, as in object.method()--the binding called
// this in its body automatically points at the obejcts that it was
// called on.
// 'this' can be thought of an extra parameter that is passed in a different way.

function speak(line){
    console.log(`The ${this.type} rabbit says '${line}'`);
}
let crazyRabbit = {type:"crazy", speak};
let hungryRabbit = {type: "hungry", speak};

crazyRabbit.speak("Oh my ears and whiskers, " + "how late it's getting!");
hungryRabbit.speak("I could use a carrot right now.");
// 'this' can be explicitly. function's 'call' method can be utilized
// which takes the 'this' value as its first arg and treats further
// args as normal parameters. 
// function_name.call(this, args, ...)
speak.call(hungryRabbit, "Burp!");

function normalize(){
    //works, arrow functions do not bind their own 'this'
    // but can see the 'this' binding of the scope around them.
    console.log(this.coords.map(n=>n/this.length));
    // does not work. you cannot refer to the this of the wrapping scope
    // in a regular function defined with function keyword.
    //console.log(this.coords.map(function(n){return n/this.length}));
}
normalize.call({coords:[0,2,3], length: 5});

// Prototype: Object.create creates object with a specific prototype.
let protoRabbit = {
    speak(line){
        console.log(`The ${this.type} rabbit says '${line}'`);
    }
};
let killerRabbit = Object.create(protoRabbit);
killerRabbit.type = "killer";
killerRabbit.speak("SKREEEE");
// The "proto" rabbit acts as a container for the properties that are shared
// by all rabbits. An individual rabbit object, like the killer rabbit, contains
// properties that apply only to itself--in this case its type--and derives shared
// properties from its prototype.

// constructor
function makeRabbit(type){
    let rabbit = Object.create(protoRabbit);
    rabbit.type = type;
    return rabbit;
}
//The prototype object used when constructing objects is found by taking the
// prototype property of the constructor function
// function Rabbit(type){
//     this.type = type;
// }
// Rabbit.prototype.speak = function(line){
//     console.log(`The ${this.type} rabbit says '${line}'`);
// }; a better way to write below
class Rabbit {
    constructor(type) {
        this.type = type;
    }
    speak(line) {
        console.log(`The ${this.type} rabbit says '${line}'`);
    }
}
let weirdRabbit = new Rabbit("weird");
let wildRabbit = new Rabbit("wild");
weirdRabbit.speak("constructors are not weird");
console.log(Object.getPrototypeOf(Rabbit)==Function.prototype);
console.log(Object.getPrototypeOf(weirdRabbit)==Rabbit.prototype);

//The actual prototype of a constructor is Function.prototype since
//constructors are functions. Its prototype property holds the prototype
// used for instances created through it.

// adding property which may or may be present in the prototype; the property
// is added to the object itself. if prop exists in the proto, then the proto 
// proto prop gets hidden.
Rabbit.prototype.teeth = "small";
console.log(weirdRabbit.teeth);
// console.log(wildRabbit.teeth);
wildRabbit.teeth = "long, sharp and bloody";
console.log(wildRabbit.teeth);

Rabbit.prototype.toString = function(){
    return `a ${this.type} rabbit`;
};
console.log(String(wildRabbit));

let sym = Symbol("name");
console.log(sym==Symbol("name"));
Rabbit.prototype[sym]=55;
console.log(wildRabbit[sym]);
//both unique and usable as property names makes symbols suitable for defining
// interfaces that can peacefully live alongside other properties, no matter what
// their names are.
const toStringSymbol = Symbol("toString");
Array.prototype[toStringSymbol]=function(){
    return `${this.length} cm of blue yarn`;
};
console.log([1,2].toString());
console.log([1,2][toStringSymbol]());

//symbol properties can be included in object expressions and classes by using
//square brackets around the property name.
let stringObject = {
    [toStringSymbol](){ return "a jute rope";}
};
console.log(stringObject[toStringSymbol]());

//the iterator interface
let okIterator = "OK"[Symbol.iterator]();
console.log(okIterator.next());
console.log(okIterator.next());
console.log(okIterator.next());

//Implementation of an iterable data structure: a matrix class, acting as a
//two-dimensional array.
class Matrix {
    constructor(width, height, element = (x,y)=>undefined){
        this.width = width;
        this.height = height;
        this.content = [];

        for(let y=0; y<height; y++){
            for(let x=0; x<width; x++){
                this.content[y*width+x]=element(x,y);
            }
        }

        get(x,y){
            return this.content[y*this.width+x];
        }
        
        set(x,y,value){
            this.content[y*this.width+x]=value;
        }
    }
}