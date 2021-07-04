import turtle

import time

from ball import *
import paddle 


screen=turtle.Screen()
screen.bgcolor("black")
screen.setup(width=800,height=800)
screen.tracer(0)         #turnoff the animation
r_paddle=paddle.Paddle((350,0))
l_paddle=paddle.Paddle((-350,0))
ball=Ball()
screen.listen()
screen.onkey(r_paddle.go_up,"UP")
screen.onkey(r_paddle.go_down,"DOWN")
screen.onkey(l_paddle.go_up,"w")
screen.onkey(l_paddle.go_down,"s")

game_is_on=True

while game_is_on:
    time.sleep(0.1)
    
    screen.update()    #to on the animation
    ball.move()

    if ball.ycor()>280 or ball.ycor()< -280:
        ball.bounce_y()

    if ball.distance(r_paddle)<50 and ball.xcor()>320 and ball.distance(l_paddle)<50 and ball.xcor()<-320:
        ball.bounce_x()


    if ball.xcor()>380:
        ball.reset_position()


    if ball.xcor()<-380:
        ball.reset_position()




screen.exitonclick()
