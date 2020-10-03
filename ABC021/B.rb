gets
a, b = gets.split(' ')
k = gets.to_i
if gets.split(' ').push(a).push(b).uniq.length == k + 2
  puts 'YES'
else
  puts 'NO'
end
