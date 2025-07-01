import speech_recognition as sr 

r = sr.Recognizer()

with sr.Microphone() as source:
    print("please say somthing")
    audio = r.listen(source)
     
    try : 
        print("you said :"+r.Rcognize_google(audio)) 
        
    except sr.RequestError:
        print("sorry , i did not understand that")
        
    except sr.RequestError:
        print("could not request result from google speech recognition scevice")
        