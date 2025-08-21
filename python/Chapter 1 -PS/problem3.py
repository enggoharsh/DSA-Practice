import pyttsx3
engine = pyttsx3.init()
engine.save_to_file('I am not a dumb person' , 'test.mp3')
engine.runAndWait()