import  turtle
import  pandas
screen=turtle.Screen()
screen.title("U.S Quiz game")
image="blank_states_img.gif"
screen.addshape(image)
turtle.shape(image)
data=pandas.read_csv("50_states.csv")

'''def get_mouse_click_cor(x,y):
    print(x,y)

turtle.onscreenclick(get_mouse_click_cor)
'''
all_states = data.state.to_list()
state_guess_list=[]
while len(state_guess_list)<50:
    state_guess = screen.textinput(title=f"{len(state_guess_list)}/50 correct state",prompt="What's state's name?").title()
    print(state_guess)
    if state_guess=="Exit":
        missing_state=[]
        for state in all_states:
            if state not in state_guess_list:
                missing_state.append(state)
        new_data=pandas.DataFrame(missing_state)
        new_data.to_csv("to_learn.csv")
        break
    if state_guess in all_states:
        state_guess_list.append(state_guess)
        t=turtle.Turtle()
        t.hideturtle()
        t.penup()
        state_data=data[data.state==state_guess]
        t.goto(int(state_data.x), int(state_data.y))
        t.write(state_guess)





