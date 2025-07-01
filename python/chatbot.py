from datetime import datetime
import os
import webbrowser
import glob

datetime=datetime.now()
helloint=["hi","hello","hey","greetings","howdy"]
byeint=["bye","goodbye","see you later","farewell"]
dateint=["date","today","current date ","date pls","date bata de"]
timeint=["time","now","current_time","timepls","time bata de"]
chat=True

while chat==True:
    msg=input("Enter ").lower()
    if msg in helloint:
        print("Hello kaise ho")
    
    elif msg in byeint:
        print("Bye bye")
        chat=False

    elif msg in dateint:
        print(datetime.strftime("%d-%m-%y-%a"))
    
    elif msg in timeint:
        print(datetime.strftime("%H:%M:%S"))
    
    elif msg.startswith("open"):
        msg=msg.split()[-1]
        webbrowser.open(f"https://{msg}.com")

    elif msg.startswith("search"):
        msg=msg.partition(" ")[-1]
        webbrowser.open(f"https://google.com/search?q={msg}")

    elif msg.startswith("play"):
        song1=glob.glob("*.mp3")
        print(">>>>>>>>>>> now chal gya<<<<<<<<<<<<<<<<")
        for i in range(len(song1)):
            print(f"{i+1}.------>{song1[i]}")
        choose=int(input("enter the song number:"))
        os.startfile(song1[choose-1])
     