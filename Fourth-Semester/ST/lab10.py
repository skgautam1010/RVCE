from selenium import webdriver
import os
import time
import xlrd, os, time
from collections import OrderedDict
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from copy import copy
from xlrd import open_workbook
import xlrd
import xlwt
excel_file_name = "ten.xlsx"
employee_source_file = "file:///home/sonu/Desktop/RVCE/Fourth-Semester/ST/html_pages/Emp1.html"
employee_destin_file = "file:///home/sonu/Desktop/RVCE/Fourth-Semester/ST/html_pages/Emp2.html"

def read_from_excel(path):
    book = xlrd.open_workbook(path)
    first_sheet = book.sheet_by_index(0)
    marks_dictionary = OrderedDict()
    for each_name, index in zip(first_sheet.col_values(0, 1), range(1, first_sheet.row_len(0))):
        each_rows = first_sheet.row_values(index, 1)
        marks_dictionary[each_name] = each_rows
    return marks_dictionary
def calculate_result(driver, marks_dictionary):
    number_of_subjects = 4
    name = driver.find_elements_by_class_name("name")
    emp_id=driver.find_elements_by_class_name("emp_id")
    join_date=driver.find_elements_by_class_name("join_date")
    years_of_exp=driver.find_elements_by_class_name("years_of_exp")
    salary=driver.find_elements_by_class_name("salary")
    count=0
    iter=0
    # for i in marks_dictionary:
    #         for j in marks_dictionary.get(i):
    #             print(j)
    for i in marks_dictionary:
        name[count].send_keys(str(i))
        for j in marks_dictionary.get(i):
            if(iter==0):
                emp_id[count].send_keys(str(j))
                iter=1
            elif iter==1:
                join_date[count].send_keys("20-07-2007")
                iter=2
            elif iter==2:
                years_of_exp[count].send_keys(str(j))
                iter=3
            elif iter==3:
                salary[count].send_keys(str(j))
                iter=0
        count=count+1

    time.sleep(3)
    driver.find_element_by_id("calculate").click()
    print ("Clicked on calculate!")
    time.sleep(3)
    driver.find_element_by_id("copy").click()
    time.sleep(2)

def wait_for_user_input(driver):
    print("waiting for user inputs in web page..")
    while(True):
        element_value = str(driver.find_element_by_id('hiddden_element').get_attribute('value'))
        if element_value != '':
            print("User inputs are ready to be copied to one more web page.")
            return
        else:
            time.sleep(1)
li=[]
def is_valid_data(class_name, value):
    if class_name == 'name':
        # for name, value always should be alphabets, it may contain space.
        if value.replace(' ','').isalpha():
            return True
        else:
            return False
    elif class_name == 'emp_id':
        # this should be always didgit.
        if (value not in li):
            li.append(value)
            return True
        else:
            return False

    elif class_name == 'join_date':
        return True
        # this should be always in format dd-mm-yyyy, 10-06-2000, and it should be greater or equal to current date.
        # try:
        #     from datetime import datetime
        #     datetime.strptime(value, '%d-%m-%Y')
        #     present = datetime.now()
        #     datetime_object = datetime.strptime(value, '%d-%m-%Y')
        #     if present >= datetime_object:
        #         return True
        #     else:
        #         return False
        # except:
        #     print("Date should be entered in dd-mm-yyyy format")
        #     return False
    elif class_name == 'years_of_exp':
        # It can be float or int value.
        try:
            float(value)
            return True
        except:
            return False
    elif class_name == 'salary':
            li.append(value)
            return True
    elif class_name == 'hra':
        # this should be always didgit.
        if (value.isdigit()):
            li.append(value)
            return True
        else:
            return False
    elif class_name == 'da':
        # this should be always didgit.
        if (value.isdigit()):
            li.append(value)
            return True
        else:
            return False
    elif class_name == 'gs':
        # this should be always didgit.
        if (value.isdigit()):
            li.append(value)
            return True
        else:
            return False

if __name__ == "__main__":
    marks_dictionary = read_from_excel(excel_file_name)
    print(marks_dictionary)

    is_valid_data('name', 'hi')
    # open chrome driver
    print("Opening chrome driver")
    driver_source = webdriver.Chrome("chromedriver_linux64/chromedriver")
    driver_source.maximize_window()
    driver_source.get(employee_source_file)  # load web page.
    print("Chrome driver opened.")
    calculate_result(driver_source, marks_dictionary)

    #wait_for_user_input(driver_source)
    # open 2nd chrome driver to open one more website
    driver_destin = webdriver.Chrome("chromedriver_linux64/chromedriver")
    driver_destin.maximize_window()
    driver_destin.get(employee_destin_file)  # load web page.
    time.sleep(4)
    # read all contents and put it in other chrome driver.
    for each_class in ['name', 'emp_id', 'join_date', 'years_of_exp','salary','hra','da','gs']:
        source_elements = driver_source.find_elements_by_class_name(each_class)
        dest_elements = driver_destin.find_elements_by_class_name(each_class)
        for each_element_source, each_element_dest in zip(source_elements, dest_elements):
            value = str(each_element_source.get_attribute('value'))
            if is_valid_data(each_class, value):
                each_element_dest.send_keys(value)
            else:
                print("Invalid data for column name:%s ,with value:%s" %(each_class,value))
    time.sleep(3)
    print("Copied all the data from one web page to another.")
    # quit the driver if required.
    driver_destin.quit()
    driver_source.quit()