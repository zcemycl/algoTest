class SnapshotArray:
    def __init__(self, length: int):
        self.snap_index = 0
        self.arr = [{} for i in range(length)]

    def set(self, index: int, val: int) -> None:
        self.arr[index][self.snap_index] = val

    def snap(self) -> int:
        self.snap_index += 1
        return self.snap_index - 1
        
    def get(self, index: int, snap_id: int) -> int:
        while snap_id > 0 and snap_id not in self.arr[index]:
            snap_id -= 1
        
        return self.arr[index].get(snap_id, 0)

