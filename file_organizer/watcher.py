from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import time
from organizer import organize

class Handler(FileSystemEventHandler):
    def on_modified(self, event):
        organize("C:/Users/YourName/Downloads")

observer = Observer()
observer.schedule(Handler(), "C:/Users/YourName/Downloads", recursive=False)
observer.start()

try:
    while True:
        time.sleep(1)
except KeyboardInterrupt:
    observer.stop()

observer.join()
