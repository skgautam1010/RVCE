import os
import random
class Board():
	def __init__(self):
		self.cells=[" "," "," ", " ", " ", " ", " ", " ", " ", " "]
	def display(self):
		print("WELCOME TO TIC-TAC-TOE GAME\n")
		print(" %s | %s | %s " %(self.cells[1],self.cells[2],self.cells[3]))
		print("-"*12)
		print(" %s | %s | %s " %(self.cells[4],self.cells[5],self.cells[6]))
		print("-"*12)
		print(" %s | %s | %s " %(self.cells[7],self.cells[8],self.cells[9]))
	def update_cell(self,cell_no,player):
		self.cells[cell_no]=player
board=Board()
board.display()
while True:
	player_1=int(input("\nplayer_1: please choose between 1-9.>"))
	board.update_cell(player_1,"X")

