ans = 0
3.times do
  s, e = gets.chomp.split.map(&:to_i)
  ans += s * e
end
puts ans / 10
