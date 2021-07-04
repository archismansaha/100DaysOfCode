from turtle import Turtle


class Ball(Turtle):

    def __int__(self):

        super().__init__()
        self.shape("circle")
        self.color("black")
        self.penup()
        self.x_move =10
        self.y_move=10

    def move(self):
        new_x =self.xcor()+self.x_move
        new_y = self.ycor()+self.y_move
        self.goto(new_x,new_y)

    def bounce_y(self):
        self.y_move= -1 * self.y_move
        

    def bounce_x(self):
        self.x_move= -1 * self.x_move

    def reset_position(self):
        self.goto(0,0)
        self.bounce_x()
                
