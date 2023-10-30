class Note
  attr_accessor :title, :content

  def initialize(title, content)
    @title = title
    @content = content
  end

  def display
    puts "Caption: \#{@title}"
    puts 'Content: #{@content}'
  end
end

class Notebook
  def initialize
    @notes = []
  end

  def add_note(note)
    @notes << note # one line comment # . + @notes
  end 

  # Multiline comment test
  =begin
  My
  multiline
  comment 
  here
  \\word
  \word
  end
  def
  =end

  # Comment test
  def view_notes
    puts "List of notes: \\word test \\wo  ' rd \\\vobl \'  a \blablabla" 
    puts 'Text " Text \" text' 
    @notes.each_with_index do |note, index|
      puts "#{index + 1}. #{note.title}"
    end

    print "Select the note number to view (or 0 to exit): "
    choice = gets.chomp.to_i

    if choice == 0
      return
    elsif choice >= 1 && choice <= @notes.length
      @notes[choice - 1].display
    else
      puts "Wrong selection. Please select an existing note number."
    end
  end
end

notebook = Notebook.new

loop do
  puts "\nWhat do you want to do?"
  puts "1. Create a new note"
  puts "2. View existing notes"
  puts "3. Get out"
  print "Enter the number of the selected option: "

  choice = gets.chomp.to_i

  case choice
  when 1
    print "Enter the title of the note: "
    title = gets.chomp
    print "Enter the content of the note: "
    content = gets.chomp
    note = Note.new(title, content)
    notebook.add_note(note)
    puts "The note has been successfully created!"
  when 2
    notebook.view_notes
  when 3
    puts "Goodbye!"
    break
  else
    puts "Incorrect selection. Please select an existing option."
  end
end


# Checking the numbers
# Underscore error at the beginning
puts _0.2234 
# Error underline at the end
puts 213_
# right
puts 2_123_123
# right
puts 2.1_23
# Error point at the beginning
puts .234
# Error double dot
puts 12..33
# Error point at the end
puts 123.
# Error double underscore
puts 12__33
# Checking the strings
# Correct string
puts "Correct string"
# String with \
puts "String \e"
# String with \\
puts "String with \\word"
# Correct number 123e12
puts 123e12
# Correct number 12.2e1
puts 12.2e1
# Error: incorrect number .e12
puts .e12
# Correct number 0x12e12
puts 0x12e12
# Error: Incorrect number _e12
puts _e12
# Standart 12_13_14
puts 12_13_14
# Float 12.24_123
puts 12.24_123
# Float 12.24_123.12
puts 12.24_123.12
# Binary 0b1_0111_01
puts 0b1_0111_01
# Binary 0b1_0111
puts 0b1_0111
# Hexadecimal 0x1_0111_01
puts 0x1_0111_01
# Hexadecimal 0x1_0111
puts 0x1_0111
# Standart 3_2e10_2
puts 3_2e10_2
# 1.2_2_2e10
puts 1.2_2_2e10
# Digit
10_11_11
puts 1.2e12
puts 2e12
puts 0x11__10
puts 0b10__10
puts "Ya stroka strok\0a pupupu"