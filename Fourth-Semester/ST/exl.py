# Reading an excel file using Python
import xlrd
import pandas as pd

# Give the location of the file
df=pd.read_excel('excel_sheet.ods', engine='odf')
print(df)
# To open Workbook
#wb = xlrd.open_workbook(loc)
#sheet = wb.sheet_by_index(0)

# For row 0 and column 0
#print(sheet.cell_value(0, 0))
