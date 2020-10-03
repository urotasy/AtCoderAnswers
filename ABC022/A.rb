n, s, t = gets.split(' ').map(&:to_i)
w = gets.to_i
ans = 0
ans += 1 if s <= w && w <= t
(n - 1).times do
  w += gets.to_i
  ans += 1 if s <= w && w <= t
end
puts ans
