class Logger:
    def __init__(self):
        self.words = dict()
    def shouldPrintMessage(self, timestamp, message):
        if message not in self.words:
            self.words[message]=timestamp+10
            return True
        else:
            if timestamp>=self.words[message]:
                self.words[message]=timestamp+10
                return True
            else:
                return False