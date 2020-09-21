x = gets.chomp
# 'ch', 'o', 'k', 'u' をすべて取り除いていき、空文字列になれば choku 語
puts x.gsub(/ch|o|k|u/, '') == '' ? 'YES' : 'NO'
