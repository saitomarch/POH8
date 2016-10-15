let len = Int(readLine()!)!
let cur = Int(readLine()!)!

var str = ""

for idx in 1 ... len {
    if (idx == cur) {
        str += "+"
    }else{
        str += "-"
    }
}

print(str)

