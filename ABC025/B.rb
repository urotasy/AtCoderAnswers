n, a, b = gets.chomp.split(' ').map(&:to_i)
cur = 0
n.times do
  s, ds = gets.chomp.split(' ')
  d = ds.to_i
  if d < a
    d = a
  elsif b < d
    d = b
  end
  d *= -1 if s == 'East'
  cur += d
end

if cur.zero?
  puts 0
elsif cur.negative?
  puts "East #{-cur}"
else
  puts "West #{cur}"
end
