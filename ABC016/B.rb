a, b, c = gets.split(' ').map(&:to_i)
if c == a + b && c == a - b
  puts '?'
elsif c == a + b
  puts '+'
elsif c == a - b
  puts '-'
else
  puts '!'
end
