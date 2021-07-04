import turtle
import paddle



screen=turtle.Screen()
screen.bgcolor("black")
screen.setup(width=800,height=800)
screen.tracer(0)         #turnoff the animation
r_paddle=paddle.Paddle((350,0))
l_paddle=paddle.Paddle((-350,0))
screen.listen()
screen.onkey(r_paddle.go_up,"UP")
screen.onkey(r_paddle.go_down,"DOWN")
screen.onkey(l_paddle.go_up,"w")
screen.onkey(l_paddle.go_down,"s")

game_is_on=True

while game_is_on:
    screen.update()    #to on the animation






screen.exitonclick()
