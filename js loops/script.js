let obj = {
    name:"harry",
    role:"coder",
    company:"akshat private ltd"
}

for (const key in object) {
    if (Object.hasOwnProperty.call(object, key)) {
        const element = object[key];
        console.log(key,element)
    }
}