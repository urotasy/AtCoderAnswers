n = gets.to_i
a = gets.split(' ').map(&:to_i)
out = Hash.new
a.each do |i|
  i /= 2 while i.even?
  out[i] = 1
end
puts out.size
