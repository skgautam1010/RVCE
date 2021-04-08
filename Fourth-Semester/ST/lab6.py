import unittest
import time
from selenium import webdriver

timestr=time.strftime("%y%m%d-%H%M%S")
class TestLaunch(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.driver=webdriver.Chrome("chromedriver_linux64/chromedriver")
        cls.driver.get('file:///home/sonu/Desktop/RVCE/Fourth-Semester/ST/html_pages/login.html')
        cls.driver.maximize_window()
        time.sleep(4)
        cls.driver.save_screenshot('screenshots/initial_login.png')
        cls.driver.save_screenshot("loginscreenbeforeEntering the details"+timestr+".png")

    def test_FindClass(self):
        self.driver.find_element_by_id('User').send_keys('admin')
        self.driver.find_element_by_id('Pass').send_keys('root123')
        self.driver.save_screenshot('home/sonu/Pictures/logincredentials.png')
        self.driver.save_screenshot("logincredentials"+timestr+".png")
        self.driver.find_element_by_id('btn').click()
        self.driver.save_screenshot('screenshots/success-screen.png')
        time.sleep(3)
        self.driver.get("file:///home/sonu/Desktop/RVCE/Fourth-Semester/ST/html_pages/login.html")
        self.driver.find_element_by_id('User').send_keys('administrator')
        self.driver.find_element_by_id('Pass').send_keys('root123')
        self.driver.save_screenshot( "invalidcredential" + timestr + ".png" )
        self.driver.find_element_by_id('btn').click()
        self.driver.save_screenshot( 'screenshots/wrong-credentials.png' )

        #self.assertTrue(self.driver.find_element_by_xpath(".//label"),"Username")


    def tearDown(self):
        self.driver.close()
        self.driver.quit()

if __name__=='__main__':
    unittest.main()
