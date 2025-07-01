import pygame
import random
import sys

pygame.init()

# Window settings
w, h = 500, 600
screen = pygame.display.set_mode((w, h))
pygame.display.set_caption("Space Shooter Game")

# Colors
black = (0, 0, 0)
white = (255, 255, 255)
red = (255, 0, 0)
green = (0, 255, 0)

# Game variables
clock = pygame.time.Clock()
FPS = 60

# Player settings
ps = 50
p = pygame.Rect(w // 2 - ps // 2, h - 60, ps, ps)
p_speed = 5

# Bullet settings
bullets = []
b_speed = 5    

# Enemy settings
enemies = []
e_speed = 3
e_spawn_delay = 30
enemy_timer = 0

# Score
score = 0
font = pygame.font.SysFont("Arial", 26)

# Main loop
run = True
while run:
    clock.tick(FPS)
    screen.fill(black)

    # Event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:  # FIXED THIS LINE
            run = False

    # Movement
    keys = pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and p.x > 0:
        p.x -= p_speed
    if keys[pygame.K_RIGHT] and p.x < w - ps:
        p.x += p_speed

    # Shoot bullets
    if keys[pygame.K_a]:
        if len(bullets) < 5:
            bullets.append(pygame.Rect(p.x + ps // 2 - 3, p.y, 6, 10))  # FIXED POSITION

    # Draw player
    pygame.draw.rect(screen, green, p)

    # Move and draw bullets
    for b in bullets[:]:  # FIXED: use bullets[:] to safely remove items
        b.y -= b_speed     # FIXED: was b.y = -b_speed (wrong!)
        if b.y < 0:
            bullets.remove(b)
        else:
            pygame.draw.rect(screen, white, b)

    # Spawn enemies
    enemy_timer += 1
    if enemy_timer >= e_spawn_delay:
        enemy_x = random.randint(0, w - 40)
        enemies.append(pygame.Rect(enemy_x, 0, 40, 40))
        enemy_timer = 0

    # Move enemies and check collisions
    for enemy in enemies[:]:  # loop copy
        enemy.y += e_speed
        if enemy.y > h:
            print("Game Over! Final Score:", score)
            run = False
        if enemy.colliderect(p):
            print("Game Over! Final Score:", score)
            run = False

        # Bullet hits enemy
        for b in bullets[:]:  # FIXED: loop through copy
            if enemy.colliderect(b):
                if enemy in enemies:
                    enemies.remove(enemy)
                if b in bullets:
                    bullets.remove(b)
                score += 1
                break

        else:
            pygame.draw.rect(screen, red, enemy)

    # Draw score
    score_text = font.render(f"Score: {score}", True, white)
    screen.blit(score_text, (10, 10))

    # Update display
    pygame.display.flip()

pygame.quit()
sys.exit ()
