n, t = gets.split(' ').map(&:to_i)
ans = t
prev = gets.to_i
(n-1).times do
  a = gets.to_i
  ans += (a - prev) < t ? (a - prev) : t
  prev = a
end
puts ans
