puts "A:"
temp = gets.chomp
a = temp.to_f
puts "B: "
temp = gets.chomp
b = temp.to_f
puts "C: "
temp = gets.chomp
c = temp.to_f

x = (b*-1)/(2*a)
y = a*(x**2) + b*x + c
puts "(#{x}, #{y})"