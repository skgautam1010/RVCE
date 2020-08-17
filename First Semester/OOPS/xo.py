from random import choice #importing choice from random module
class Game:	#class creation
	def getdata(self):
		#asking the players about their name
		self.player_1=input("player_1:Please Enter your name:  ")
		self.player_2=input("player_2:Please Enter your name:  ")
	def display(self):
		self.player_turn=choice([self.player_1,self.player_2])
		if self.player_turn==self.player_1:
			print(self.player_1,"You are Player'X',",self.player_2,"You are Player'O'")
		else:
			print(self.player_1,"You are player'O'",self.player_2,"You are player'X'")
#creation of instance
g=Game()
print("****************!WELCOME TO TIC-TAC-TOE GAME!*****************\n")
#displaying the players name
g.getdata()
#while loop to rerun the game
play=True
while play:
	print("1-->To play the game\n2-->exit\n")
	ch=int(input("enter your choice\n")) 
	if ch==1:
		game=list(range(0,9))
		win=False
		occupied_cases=0
		g.display()
		while not win and occupied_cases<=8:
			print("\n" + str(game[0]),"|",game[1],"|",game[2])
			print("-"*12)
			print(game[3],"|",game[4],"|",game[5])
			print("-"*12)
			print(game[6],"|",game[7],"|",game[8],"\n")
			move=int(input("Player 'X' make a move: "))
			while move not in range(0,9) or game[move] not in range(0,9):
				move=int(input("Invalid Input,make a new move: "))
			game[move]="X"
			print("\n" + str(game[0]),"|",game[1],"|",game[2])
			print("-"*12)
			print(game[3],"|",game[4],"|",game[5])
			print("-"*12)
			print(game[6],"|",game[7],"|",game[8],"\n")
			occupied_cases += 1
			win=(game[0]==game[1]==game[2] or game[3]==game[4]==game[5] or game[6]==game[7]==game[8] or game[0]==game[4]==game[8] or
				game[2]==game[4]==game[6] or game[0]==game[3]==game[6] or game[1]==game[4]==game[7] or game[2]==game[5]==game[8])
			if win:
				print("\n******Player X won!******\n")
				play_again=input("You wanna play again ? (y=Yes/n=No): ").lower()
				while play_again!='y' and play_again!='n':
					play_again=("Invalid Input,You wanna play again ? (y=Yes/n=No): ").lower()
				play=play_again='y'
				if play:
					print("\n*****New Game*****\n")
			elif occupied_cases > 8:
				print("\n********Draw!Game Over*******\n")
				play_again=input("You wanna play again ? (y=Yes/n=No): ").lower()
				while play_again!='y' and play_again!='n':
					play_again=("Invaid Input,You Wanna play Again ? (y=Yes/n=No): ").lower()
				play=play_again='y'
				if play:
					print("\n*****New Game******\n")
			else:
				move=int(input("player O, make a Move: "))
				print("\n" + str(game[0]),"|",game[1],"|",game[2])
				print("-"*12)
				print(game[3],"|",game[4],"|",game[5])
				print("-"*12)
				print(game[6],"|",game[7],"|",game[8],"\n")
				while move not in range(0,9) or game[move] not in range(0,9):
					move=int(input("Invalid Input,make a new move: "))
				game[move]="O"
				occupied_cases += 1
				win=(game[0]==game[1]==game[2] or game[3]==game[4]==game[5] or game[6]==game[7]==game[8] or game[0]==game[4]==game[8] or
					game[2]==game[4]==game[6] or game[0]==game[3]==game[6] or game[1]==game[4]==game[7] or game[2]==game[5]==game[8])
				if win:
					print("\n**********Player O Won!**********\n")
					play_again=input("You Wanna Play Again ? (y=yes/n=No): ").lower()
					while play_again!='y' and play_again!='n':
						play_again=("Invalid Input,You wanna play again ?(y=Yes/n=No): ").lower()
					play=play_again='y'
					if play:
						print("\n******New Game*******\n")
	elif ch==2:
		break
	else:
		print("wrong input\n")

