s = gets.chomp
n = gets.chomp.to_i

n.times.each do
  l, r = gets.chomp.split.map(&:to_i)
  l -= 1
  r -= 1
  s[l..r] = s[l..r].reverse
end

puts s
