# import pygame
# import random

# pygame.init()
# w,h=800,600
# screen=pygame.display.set_mode((w,h))
# pygame.display.set_caption("Dodge the falling block")
# white =(255,255,255)
# black=(0,0,0)
# red=(255,0,0)
# clock=pygame.time.Clock()
# fps=70
# p_size=50
# p_pos=[w//2,h-2*p_size]
# p_speed=7
# background =pygame.image.load("python/background.webp")
# background = pygame.transform.scale(background,(w,h))

# e_size=50
# e_pos=[random.randint(0,w-e_size),0]
# e_speed=5
# pygame.draw.rect(screen,red,(p_pos[0],p_pos[1],p_size,p_size))
# pygame.draw.rect(screen,black,(e_pos[0],e_pos[1],e_size,e_size))
# def detect_collision(p_pos, e_pos):
#     player_rect = pygame.Rect(p_pos[0], p_pos[1], p_size, p_size)
#     enemy_rect = pygame.Rect(e_pos[0], e_pos[1], e_size, e_size)
#     return player_rect.colliderect(enemy_rect)
# run=True
# while run:
#     for event in pygame.event.get():
#         if event.type==pygame.QUIT:
#             run=False
#     key=pygame.key.get_pressed()
#     if key[pygame.K_LEFT] and p_pos[0]>0:
#         p_pos[0]-=p_speed
#     if key[pygame.K_RIGHT] and p_pos[0]<w-p_size:
#         p_pos[0]+=p_speed

#     e_pos[1]+=e_speed
#     if e_pos[1]>h:
#         e_pos[1]=0
#         e_pos[0]=random.randint(0,w-e_size)

#     if detect_collision(p_pos,e_pos):
#         print("Game Over")
#         run=False
#     screen.blit(background,(0,0))
#     pygame.update()
#     pygame.display.flip()

# pygame.quit()

    

import pygame
import random

pygame.init()
w, h = 800, 600
screen = pygame.display.set_mode((w, h))
pygame.display.set_caption("Dodge the falling block")
white = (255, 255, 255)
black = (0, 0, 0)
red = (255, 0, 0)
clock = pygame.time.Clock()
fps = 70
p_size = 50
p_pos = [w // 2, h - 2 * p_size]
p_speed = 7

# Load and scale background
background = pygame.image.load("python/background.webp")
background = pygame.transform.scale(background, (w, h))

e_size = 50
e_pos = [random.randint(0, w - e_size), 0]
e_speed = 5

def detect_collision(p_pos, e_pos):
    player_rect = pygame.Rect(p_pos[0], p_pos[1], p_size, p_size)
    enemy_rect = pygame.Rect(e_pos[0], e_pos[1], e_size, e_size)
    return player_rect.colliderect(enemy_rect)

run = True
while run:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    key = pygame.key.get_pressed()
    if key[pygame.K_LEFT] and p_pos[0] > 0:
        p_pos[0] -= p_speed
    if key[pygame.K_RIGHT] and p_pos[0] < w - p_size:
        p_pos[0] += p_speed

    e_pos[1] += e_speed
    if e_pos[1] > h:
        e_pos[1] = 0
        e_pos[0] = random.randint(0, w - e_size)

    if detect_collision(p_pos, e_pos):
        print("Game Over")
        run = False

    screen.blit(background, (0, 0))
    pygame.draw.rect(screen, red, (p_pos[0], p_pos[1], p_size, p_size))
    pygame.draw.rect(screen, black, (e_pos[0], e_pos[1], e_size, e_size))
    pygame.display.flip()
    clock.tick(fps)

pygame.quit()