dir_array= ['NNE', 'NE', 'ENE', 'E', 'ESE', 'SE', 'SSE', 'S', 'SSW', 'SW', 'WSW', 'W', 'WNW', 'NW', 'NNW', 'N']
w_array = [3, 16, 34, 55, 80, 108, 139, 172, 208, 245, 285, 327, 10000]

deg, dis = gets.split(' ').map(&:to_r)
dis = (dis / 6).round
w = w_array.index { |e| e > dis }
dir = w == 0 ? 'C' : dir_array[((deg - 113) / 225).floor]
puts "#{dir} #{w}"
