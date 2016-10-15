var match = 0

let cnt = 5
let requires = 3

for _ in 0 ..< cnt {
    let arr = readLine()!.characters.split{$0 == " "}.map(String.init)
    if (arr[0] == arr[1]) {
        match += 1
    }
}

if match >= requires {
    print("OK")
}else{
    print("NG")
}

