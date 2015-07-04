t = $stdin.gets.to_i

t.times do
  x = gets
  index = x.index " "

  a = x[0, index].to_i
  b = x[index + 1, x.length - index].to_i

  puts a + b
end