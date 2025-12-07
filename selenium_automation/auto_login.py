from selenium import webdriver
from selenium.webdriver.common.by import By
from time import sleep

driver = webdriver.Chrome()

driver.get("https://www.instagram.com/")
sleep(3)

username = driver.find_element(By.NAME, "username")
password = driver.find_element(By.NAME, "password")
login_btn = driver.find_element(By.XPATH, "//button[@type='submit']")

username.send_keys("your_username")
password.send_keys("your_password")
login_btn.click()

sleep(5)
driver.quit()
