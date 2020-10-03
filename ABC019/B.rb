ans = []
gets.chomp.each_char do |c|
  if ans[-1] && ans[-1][0] == c
    ans[-1][1] += 1
  else
    ans << [c, 1]
  end
end
  puts ans.join
