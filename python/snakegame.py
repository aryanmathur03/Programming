import pygame
import random
#Step 1 initialize the pygame
pygame.init()

#Step 2 create the screen
w,h=800,600 #width and height of screen
screen=pygame.display.set_mode((w,h))

#step 3 colors for object create objects
white=(255,255,255)  #RGB color code for white
red=(255,100,100)     #RGB color code for red for food
blue=(0,0,255)      # RGB color code for blue for snake
move=25 #speed of snake

#Load Background image
background =pygame.image.load("python/background.webp")
background = pygame.transform.scale(background,(w,h))   #SCALE THE IMAGE TO FIT THE SCREEN


#Load Collision Sound
collision_sound=pygame.mixer.Sound("python/notification.mp3")

#direction of snake
d_x,d_y =move,0     #inital direction of snake

#Initial position of the snake
snake=[[100,100]]       #Snake's body as a list of segments
s_w,s_h=20,20      #size of each snake segment

#initial position of food
f_x,f_y=random.randint(0,(w-s_w)//s_w)*s_w,random.randint(0,(h-s_h)//s_h)*s_h

#initialize score
score=0

#Font for displaying score and game over
font=pygame.font.Font(None,36)  #Default font, size 36

#Step 4 create the game loop
run=True
while run:
    pygame.time.delay(100)  #control the frame rate

    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            run=False   #exit the game

    #Get the key pressed by the user
    # key=pygame.key.get_pressed()
    # if key[pygame.K_LEFT] and d_x==0:   #MOVE LEFT
    #     d_x,d_y = -move,0
    # if key[pygame.K_RIGHT] and d_x==0:  #MOVE RIGHT
    #     d_x,d_y=move,0
    # if key[pygame.K_UP] and d_y==0: #MOVE UP
    #     d_x,d_y=0,-move
    # if key[pygame.K_DOWN] and d_y==0:   #MOVE DOWN
    #     d_x,d_y=0,move
    

    mouseX,mouseY=pygame.mouse.get_pos()
    #pygame.mouse.set_visible(False)
    pygame.draw.rect(screen,red,mouseX-w//2,mouseY-h//2,s_w,s_h)

    #Update the snake's position
    new_head=[snake[0][0] + d_x, snake[0][1] + d_y]
    snake.insert(0,new_head)        #Add the new head to the snake

    #Check for collision with food
    if abs(new_head[0]-f_x) < s_w and abs(new_head[1] -f_y) < s_h:
        #Generate new food posion
        f_x,f_y = random.randint(0,(w-s_w)//s_w)*s_w,random.randint(0,(h-s_h)//s_h)*s_h
        score+=1
        collision_sound.play(0)

    else:
        #Remove the last segment of the snake to maintain its length
        snake.pop()

    #Wrap the snake around the screen
    if new_head[0] >=w:     #If the snake goes off the right edge
        new_head[0]=0
    if new_head[0] <0:  #If the snake goes off the left edge
        new_head[0] =w-s_h
    if new_head[1] >=h:     #If the snake goes off the bottom edge
        new_head[1]=0
    if new_head[1]<0:
        new_head[1]=h-s_h       #If the snake goes off the top edge
    
    #Fill the screen with white color
    #screen.fill(white)

    #Fill the screen with the baground image
    screen.blit(background,(0,0))

    #Draw the food(red circle)
    pygame.draw.circle(screen,red,(f_x+s_w//2,f_y+s_h//2),s_w//2)


    #Draw the snake
    # for segment in snake:
    #     pygame.draw.rect(screen,blue,(segment[0],segment[1],s_w,s_h))
    
    #Display the score
    score_text=font.render("Score: " +str(score),True,blue)
    screen.blit(score_text,(10,10))     #Display the score at the top left

    #check for self collision
    if new_head in snake[1:]:       #Check if the head collides with the body
        #Display "Game Over" and exit the game
        # screen.fill(white)
        game_over_text =font.render("Game over! Score :" + str(score),True,blue)
        pygame.display.update() #Update the screen to show "game over " message
        pygame.time.delay(3000)     #Wait for 3 second before exiring

        run=False   #Exit the game
    pygame.display.update()     #Update the game

#Quit pygame
pygame.quit()
print("Your score is ",score)