ans = 0
gets.to_i.times.map{gets.to_i}.sort{|a, b| b <=> a}.each_slice(2) do |a, b|
  b ||= 0
  ans += a ** 2 - b ** 2
end
puts ans * Math::PI
