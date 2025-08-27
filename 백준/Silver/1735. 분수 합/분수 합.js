const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split("\n");

let [a, b] = input[0].split(" ").map(Number); // 첫 번째 분수 A/B
let [c, d] = input[1].split(" ").map(Number); // 두 번째 분수 C/D

// 최대공약수 함수 (유클리드 호제법)
function gcd(x, y) {
  while (y !== 0) {
    let r = x % y;
    x = y;
    y = r;
  }
  return x;
}

let numerator = a * d + c * b;
let denominator = b * d;

let g = gcd(numerator, denominator);

numerator /= g;
denominator /= g;

console.log(numerator + " " + denominator);
