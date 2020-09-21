score = 3.times.map { gets.to_i }
score.map { |i| puts score.sort.reverse.index(i) + 1 }
