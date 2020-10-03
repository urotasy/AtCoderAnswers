n = gets.to_i
s = gets.chomp
t = 'b'
(1..n/2).each do |i|
  t = "a#{t}c" if i % 3 == 1
  t = "c#{t}a" if i % 3 == 2
  t = "b#{t}b" if i % 3 == 0
end
puts s == t ? n / 2 : -1
