import tkinter as tk
import psutil
import threading
import time
from ping3 import ping
import pandas as pd

import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
from matplotlib.animation import FuncAnimation


download_data=[]
upload_data=[]

old_value = psutil.net_io_counters()

history_file="bandwidth_history.csv"


# -------- SAVE HISTORY --------
def save_history(download,upload):

    data={
        "time":[time.strftime("%H:%M:%S")],
        "download":[download],
        "upload":[upload]
    }

    df=pd.DataFrame(data)

    try:
        df.to_csv(history_file,mode="a",header=False,index=False)
    except:
        df.to_csv(history_file,index=False)


# -------- UPDATE GRAPH --------
def update(frame):

    global old_value

    new_value = psutil.net_io_counters()

    download_speed=(new_value.bytes_recv-old_value.bytes_recv)/1024
    upload_speed=(new_value.bytes_sent-old_value.bytes_sent)/1024

    old_value=new_value

    download_label.config(text=f"{download_speed:.2f} KB/s")
    upload_label.config(text=f"{upload_speed:.2f} KB/s")

    download_data.append(download_speed)
    upload_data.append(upload_speed)

    save_history(download_speed,upload_speed)

    ax.clear()

    ax.plot(download_data,color="cyan",label="Download")
    ax.plot(upload_data,color="orange",label="Upload")

    ax.legend()
    ax.set_title("Network Activity")
    ax.set_facecolor("#1e1e1e")


# -------- PING MONITOR --------
def ping_monitor():

    while True:

        response=ping("8.8.8.8")

        if response is None:
            ping_label.config(text="Disconnected",fg="red")

        else:
            ping_label.config(
                text=f"{int(response*1000)} ms",
                fg="lightgreen"
            )

        time.sleep(2)


# -------- DATA USAGE --------
def data_usage():

    while True:

        net=psutil.net_io_counters()

        down=net.bytes_recv/(1024*1024)
        up=net.bytes_sent/(1024*1024)

        usage_label.config(
            text=f"↓ {down:.1f} MB   ↑ {up:.1f} MB"
        )

        time.sleep(2)


# -------- SPEED GAUGE --------
def draw_gauge(canvas,value):

    canvas.delete("all")

    canvas.create_arc(10,10,190,190,start=180,extent=180,
                      style="arc",width=20,outline="gray")

    angle=(value/100)*180

    canvas.create_arc(10,10,190,190,start=180,
                      extent=angle,style="arc",
                      width=20,outline="cyan")

    canvas.create_text(100,120,
                       text=f"{value:.0f}",
                       fill="white",
                       font=("Arial",20,"bold"))


def gauge_update():

    while True:

        if download_data:
            value=min(download_data[-1],100)

            root.after(0,draw_gauge,gauge,value)

        time.sleep(1)


# -------- GUI --------
root=tk.Tk()
root.title("Network Analyzer Dashboard")
root.geometry("1000x500")
root.configure(bg="#121212")


# LEFT PANEL
left=tk.Frame(root,bg="#121212")
left.pack(side="left",fill="y",padx=20,pady=20)


title=tk.Label(
    left,
    text="Network Monitor",
    font=("Arial",18,"bold"),
    fg="white",
    bg="#121212"
)
title.pack(pady=10)


tk.Label(left,text="Download Speed",
         fg="gray",bg="#121212").pack()

download_label=tk.Label(
    left,
    text="0 KB/s",
    font=("Arial",16),
    fg="cyan",
    bg="#121212"
)
download_label.pack(pady=5)


tk.Label(left,text="Upload Speed",
         fg="gray",bg="#121212").pack()

upload_label=tk.Label(
    left,
    text="0 KB/s",
    font=("Arial",16),
    fg="orange",
    bg="#121212"
)
upload_label.pack(pady=5)


tk.Label(left,text="Ping",
         fg="gray",bg="#121212").pack()

ping_label=tk.Label(
    left,
    text="checking...",
    font=("Arial",14),
    fg="lightgreen",
    bg="#121212"
)
ping_label.pack(pady=5)


tk.Label(left,text="Data Usage",
         fg="gray",bg="#121212").pack()

usage_label=tk.Label(
    left,
    text="0 MB",
    font=("Arial",14),
    fg="white",
    bg="#121212"
)
usage_label.pack(pady=5)


# SPEED GAUGE
gauge=tk.Canvas(left,width=200,height=200,bg="#121212",highlightthickness=0)
gauge.pack(pady=20)


# RIGHT GRAPH PANEL
right=tk.Frame(root,bg="#121212")
right.pack(side="right",fill="both",expand=True)


fig,ax=plt.subplots(figsize=(6,4))
fig.patch.set_facecolor("#121212")

canvas=FigureCanvasTkAgg(fig,master=right)
canvas.get_tk_widget().pack(fill="both",expand=True)


ani=FuncAnimation(fig,update,interval=1000)


# THREADS
threading.Thread(target=ping_monitor,daemon=True).start()
threading.Thread(target=data_usage,daemon=True).start()
threading.Thread(target=gauge_update,daemon=True).start()


root.mainloop()