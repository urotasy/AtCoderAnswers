a = gets.to_i
ans = 0
(1..(a / 2)).each do |x|
  val = x * (a - x)
  ans = val if ans < val
end
puts ans
