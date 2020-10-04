a, b, c, k = gets.split(' ').map(&:to_i)
s, t = gets.split(' ').map(&:to_i)
ans = a * s + b * t
ans -= c * (s + t) if s + t >= k
puts ans
