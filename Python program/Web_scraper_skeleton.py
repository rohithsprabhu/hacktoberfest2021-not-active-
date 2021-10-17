import requests
from bs4 import BeautifulSoup

req = requests.get("https://www.geeksforgeeks.org/")
soup = BeautifulSoup(req.content, "html.parser")

res = soup.title
print(res.get_text())
