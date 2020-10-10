n, m = gets.split(' ').map(&:to_i)
friends = Array.new(n).map{Array.new()}
m.times do
  a, b = gets.split(' ').map(&:to_i)
  a -= 1
  b -= 1
  friends[a] << b
  friends[b] << a
end

friends.each_index do |idx|
  direct = friends[idx]
  indirect = []
  direct.each do |i|
    indirect += friends[i]
  end
  puts (indirect - direct - [idx]).uniq.size
end
