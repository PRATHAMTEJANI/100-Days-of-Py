import win32evtlog
import time
import cv2
import smtplib
from email.message import EmailMessage
from datetime import datetime

# ---------------- EMAIL CONFIG ----------------
EMAIL = "your email brother!!"
APP_PASSWORD = "2-Factor -> appLOCK 16-digits"  # Gmail App Password
TO_EMAIL = "when you get pic's"

# ---------------- CAMERA FUNCTION ----------------
def capture_image():
    cam = cv2.VideoCapture(0)
    ret, frame = cam.read()
    cam.release()

    if ret:
        filename = f"intruder_{datetime.now().strftime('%Y%m%d_%H%M%S')}.jpg"
        cv2.imwrite(filename, frame)
        return filename
    return None

# ---------------- EMAIL FUNCTION ----------------
def send_email(image_path):
    msg = EmailMessage()
    msg["Subject"] = "⚠️ ALERT: Wrong Password Attempt Detected"
    msg["From"] = EMAIL
    msg["To"] = TO_EMAIL
    msg.set_content("Someone tried to unlock your laptop with wrong password!")

    with open(image_path, "rb") as f:
        msg.add_attachment(
            f.read(),
            maintype="image",
            subtype="jpeg",
            filename=image_path
        )

    with smtplib.SMTP_SSL("smtp.gmail.com", 465) as smtp:
        smtp.login(EMAIL, APP_PASSWORD)
        smtp.send_message(msg)

# ---------------- EVENT LOG MONITOR ----------------
def monitor_failed_login():
    server = "localhost"
    logtype = "Security"

    hand = win32evtlog.OpenEventLog(server, logtype)
    flags = win32evtlog.EVENTLOG_BACKWARDS_READ | win32evtlog.EVENTLOG_SEQUENTIAL_READ

    print("🔐 Monitoring failed login attempts...")

    while True:
        events = win32evtlog.ReadEventLog(hand, flags, 0)
        if events:
            for event in events:
                # Event ID 4625 = Failed login
                if event.EventID == 4625:
                    print("❌ Wrong password detected!")
                    img = capture_image()
                    if img:
                        send_email(img)
                        print("📧 Image sent to email!")
                    time.sleep(30)  # avoid spam
        time.sleep(5)

# ---------------- RUN ----------------
monitor_failed_login()
