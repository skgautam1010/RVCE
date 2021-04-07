import unittest
import time
from selenium import webdriver

timestr=time.strftime("%y%m%d-%H%M%S")
class TestLaunch(unittest.TestCase):
    def setUp(self):
        self.driver=webdriver.Chrome("chromedriver_linux64/chromedriver")
        self.driver.get("file:///home/sonu/Desktop/RVCE/Fourth-Semester/ST/html_pages/login.html")
        self.driver.maximize_window()
        time.sleep(5)
        self.driver.save_screenshot('home/sonu/Pictures/initial_login.png')
        self.driver.save_screenshot("loginscreenbeforeEntering the details"+timestr+".png")

    def test_FindClass(self):
        self.driver.find_element_by_id('User').send_keys('admin')
        self.driver.find_element_by_id('Pass').send_keys('root123')
        self.driver.save_screenshot('home/sonu/Pictures/logincredentials.png')
        self.driver.save_screenshot("logincredentials"+timestr+".png")
        self.driver.find_element_by_css_selector('form#frmlog>input:nth-of-type(2)').click()
        self.driver.save_screenshot('home/sonu/Pictures/success-screen.png')
        self.driver.get("file:///home/sonu/Desktop/RVCE/Fourth-Semester/ST/html_pages/login.html")
        self.driver.find_element_by_id('User').send_keys('administrator')
        self.driver.find_element_by_id('Pass').send_keys('root123')
        self.driver.save_screenshot('home/sonu/Pictures/wrong-credentials.png')
        self.driver.find_element_by_css_selector('form#frmlog>input:nth-of-type(1)').click()
        self.driver.save_screenshot('home/sonu/Pictures/reset.png')
        self.assertTrue(self.driver.find_element_by_xpath(".//label"),"Username")


    def tearDown(self):
        self.driver.quit()

    if __name__=='__main__':
        unittest.main()
