import unittest
import time
from selenium import webdriver
class TestCount(unittest.TestCase):
    def setUp(self):
        self.driver = webdriver.Chrome("chromedriver_linux64/chromedriver")
        self.driver.get("file:///home/sonu/Desktop/RVCE/Fourth-Semester/ST/html_pages/seven.html")
        self.driver.maximize_window()
        time.sleep(5)

    def test_Countelements(self):

        header = self.driver.find_elements_by_id("header")
        count = 0
        for i in header:
            count += 1
        print("The count of header = ", count)
        textboxes = self.driver.find_elements_by_name("txt")
        count = 0
        for i in textboxes:
            count += 1
        print("The count of TextBoxes = ", count)
        radio = self.driver.find_elements_by_name("Gender")
        count = 0
        for i in radio:
            count += 1
        print("The count of Radio Buttons = ", count)
        linktext = self.driver.find_elements_by_class_name("anc")
        count = 0
        for i in linktext:
            count += 1
        print("The count of Link Texts = ", count)

        tag = self.driver.find_elements_by_tag_name("div")
        count = 0
        for i in tag:
            count += 1
        print("the count of Div= ",count)



    def tearDown(self):
        self.driver.quit()

if __name__ == '__main__':
    unittest.main()