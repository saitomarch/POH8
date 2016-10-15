let min = 60
var capacity = Int(readLine()!)! * min
let songs = Int(readLine()!)!

var failureAt = 0

for idx in 1 ... songs {
    let len = Int(readLine()!)!
    capacity -= len
    if capacity <= 0 {
        failureAt = idx - 1
        break
    } 
}

if failureAt > 0 {
    print(failureAt)
}else{
    print("OK")
}

