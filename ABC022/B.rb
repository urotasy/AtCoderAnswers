n = gets.to_i
a = n.times.map { gets.to_i }
puts n - a.uniq.size
