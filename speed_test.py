import time
import speedtest

def monitor_speed():

    while True:

        st = speedtest.Speedtest()

        download = st.download()/1000000
        upload = st.upload()/1000000

        print("Download:",download,"Mbps")
        print("Upload:",upload,"Mbps")

        time.sleep(60)