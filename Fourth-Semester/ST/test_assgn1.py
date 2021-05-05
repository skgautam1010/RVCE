
from credential import func
user_name,pass_word=func()
import time
import unittest
from selenium import webdriver


driver=webdriver.Chrome("chromedriver_linux64/chromedriver")
driver.get("https://github.com/login")
driver.find_element_by_name( "login" ).send_keys( user_name )
driver.find_element_by_name( "password" ).send_keys( pass_word )
driver.find_element_by_name( "commit" ).click()
time.sleep(2)
driver.get("https://github.com/login")
driver.find_element_by_name( "login" ).send_keys( "skg" )
driver.find_element_by_name( "password" ).send_keys( "1234567" )
driver.find_element_by_name( "commit" ).click()

driver.close()
driver.quit()



