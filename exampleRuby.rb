class Note
    attr_accessor :title, :content
  
    def initialize(title, content)
      @title = title
      @content = content
    end
  
    def display
      puts "Заголовок: #{@title}"
      puts 'Содержание: #{@content}'
    end
  end
  
  class Notebook
    def initialize
      @notes = []
    end
  
    def add_note(note)
      @notes << note # one line comment # . + @notes
    end 

    =begin
    My
    multiline
    comment 
    here
    end
    def
    =begin
    =end

    =begin
    My
    multiline
    comment 
    here
    end
    def
    =end
  
    def view_notes
      puts "Список заметок:"
      @notes.each_with_index do |note, index|
        puts "#{index + 1}. #{note.title}"
      end
  
      print "Выберите номер заметки для просмотра (или 0 для выхода): "
      choice = gets.chomp.to_i
  
      if choice == 0
        return
      elsif choice >= 1 && choice <= @notes.length
        @notes[choice - 1].display
      else
        puts "Неверный выбор. Пожалуйста, выберите существующий номер заметки."
      end
    end
  end
  
  notebook = Notebook.new
  
  loop do
    puts "\nЧто вы хотите сделать?"
    puts "1. Создать новую заметку"
    puts "2. Просмотреть существующие заметки"
    puts "3. Выйти"
    print "Введите номер выбранной опции: "
  
    choice = gets.chomp.to_i
  
    case choice
    when 1
      print "Введите заголовок заметки: "
      title = gets.chomp
      print "Введите содержание заметки: "
      content = gets.chomp
      note = Note.new(title, content)
      notebook.add_note(note)
      puts "Заметка успешно создана!"
    when 2
      notebook.view_notes
    when 3
      puts "До свидания!"
      break
    else
      puts "Неверный выбор. Пожалуйста, выберите существующую опцию."
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
.234
# Error double dot
12..33
# Error point at the end
123.
# Error double underscore
12__33