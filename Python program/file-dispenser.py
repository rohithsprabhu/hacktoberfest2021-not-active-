import os
from datetime import datetime, timedelta

# path = "fol1"


def file_dispenser(path, thresh, base=True):

    if os.path.isdir(path):
        for internal in os.listdir(path):
            file_dispenser(path + "/" + internal, thresh, False)

        if (not base) and (len(os.listdir(path)) == 0):
            os.rmdir(path)

        return

    mod = os.path.getmtime(path)
    if thresh > mod:
        os.remove(path)


threshold = (datetime.now() - timedelta(minutes=1)).timestamp()
file_dispenser("baseloc", threshold)
