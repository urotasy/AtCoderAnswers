s = gets.chomp.split('')
n = gets.to_i
cand = []
s.each do |a|
  s.each do |b|
    cand << a + b
  end
end
puts cand[n - 1]
