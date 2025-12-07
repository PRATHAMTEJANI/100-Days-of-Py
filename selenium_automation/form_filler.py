from selenium import webdriver
from selenium.webdriver.common.by import By
from time import sleep

driver = webdriver.Chrome()

driver.get("https://www.w3schools.com/html/html_forms.asp")
sleep(2)

driver.find_element(By.NAME, "firstname").send_keys("Arjun")
driver.find_element(By.NAME, "lastname").send_keys("Patel")

sleep(1)
driver.find_element(By.XPATH, "//input[@value='Submit']").click()

sleep(3)
driver.quit()
