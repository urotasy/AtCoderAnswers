m = gets.to_i
if m < 100
  puts '00'
elsif m <= 5000
  printf "%02d\n" % (m * 10 / 1000)
elsif m <= 30000
  puts m / 1000 + 50
elsif m <= 70000
  puts (m / 1000 - 30) / 5 + 80
else
  puts '89'
end
