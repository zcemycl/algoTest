class Song:
    def __init__(self, name):
        self.name = name
        self.next = None

    def next_song(self, song):
        self.next = song 
    
    def is_repeating_playlist(self):
        """
        :returns: (bool) True if the playlist is repeating, False if not.
        """
        visited = set()
        while self.next:
            if id(self) in visited:
                return True
            visited.add(id(self))
            self = self.next
        return False