from collections import OrderedDict,Counter

class LeagueTable:
    def __init__(self,players):
        self.standings = OrderedDict([player,Counter()] for player in players)
    def record_result(self,player,score):
        self.standings[player]['games_played']+=1
        self.standings[player]['score']+=score
    def player_rank(self,rank):
        return sorted(self.standings.items(), 
            key=lambda x:(-x[1]['score'],x[1]['games_played']))[rank-1][0]