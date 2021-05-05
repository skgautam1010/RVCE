import unittest
import time
from selenium import webdriver
class TestCount(unittest.TestCase):
    def setUp(self):
        self.driver = webdriver.Chrome("chromedriver_linux64/chromedriver")
        self.driver.get("https://github.com/login")
        time.sleep(2)

    def test_Countelements(self):

        textboxes = self.driver.find_elements_by_name("login")
        count = 1
        for i in textboxes:
            count += 1
        print("The count of TextBoxes = ", count)


    def tearDown(self):
        self.driver.quit()

    if __name__ == '__main__':
        unittest.main()