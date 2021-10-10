import time
from plyer import notification

count = 0
print('The pomodoro timer has started, stasrt working!')

if __name__ == "__main__":
    while True:
        time.sleep(1800)
        count += 1
        notification.notify(
            title = "Good work!",
            message = f"Take a 10 minute break! You have completed {count} pomodoro so far",
        )
        time.sleep(600)
        notification.notify(
            title = "Back to work!",
            message = "Try doing another pomodoro...",
        )