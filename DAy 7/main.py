import tkinter

window=tkinter.Tk()
window.title("My first Tkinter")
window.minsize(width=500,height=300)
#Label
my_label =  tkinter.Label(text="I am label",font=("Arial",24,"bold"))
my_label.pack(side="left",expand="True") #place into the screen and display

window.mainloop()