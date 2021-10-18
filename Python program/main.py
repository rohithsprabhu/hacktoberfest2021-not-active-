import time
from plyer import notification

count = 0
print("The pomodoro timer has started, start working!")

if __name__ == "__main__":
    while True:
        time.sleep(1)
        count += 1
        notification.notify(
            app_name = "Pymodoro",
            app_icon = "https://cdn0.iconfinder.com/data/icons/time-date-7/24/time_timer_pomodoro_productivity_app_tomato_counter-512.png",
            title = "Good work!",
            message = "Take a 5 minute break! You have completed " + str(count) + " pomodoros so far",
        )
        time.sleep(3)
        notification.notify(
            title = "Back to work!",
            message = "Try doing another pomodoro...",
        )
