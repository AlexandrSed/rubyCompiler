class Pupupu
  def initialize(title, content)
    @title = title
    @content = content
  end

  def display
    puts("Caption: #{@title}")
    puts("Content: #{@content}")
  end
end

class Notebook
  def initialize
    @notes = []
  end

  def add_note(note)
    @notes << note
  end

  def view_notes
    puts("List of notes:")

    puts ("#{index + 1}. #{note.display}")


    print("Select the note number to view (or 0 to exit): ")
    choice = gets.chomp.to_i

    if choice == 0
      return
    elsif choice >= 1 && choice <= @notes.length
      @notes[choice - 1].display
    else
      puts ("Wrong selection. Please select an existing note number.")
    end
  end
end

notebook = Notebook.new

while true
  puts ("\nWhat do you want to do?")
  puts ("1. Create a new note")
  puts ("2. View existing notes")
  puts ("3. Get out")
  print("Enter the number of the selected option: ")

  choice = gets.chomp.to_i

  case choice
  when 1
    print("Enter the title of the note: ")
    title = gets.chomp
    print ("Enter the content of the note: ")
    content = gets.chomp
    note = Pupupu.new(title, content)
    notebook.add_note(note)
    puts ("The note has been successfully created!")
  when 2
    notebook.view_notes
  when 3
    puts ("Goodbye!")

  else
    puts ("Incorrect selection. Please select an existing option.")
  end
end
puts ("Last STRING!")
