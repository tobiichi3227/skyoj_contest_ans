import requests
from bs4 import BeautifulSoup

import const

# SKYOJ_LOGIN_URL = "http://skyoj.tnfsh.tn.edu.tw/sky/index.php/user/login"
SKYOJ_CHALLIST_URL = "http://skyoj.tnfsh.tn.edu.tw/sky/index.php/chal/list/"


for i in range(500, 1, -1):
    html = requests.get(f"{SKYOJ_CHALLIST_URL}{i}").text

    soup = BeautifulSoup(html, "html.parser")
    challist = soup.select_one("table > tbody")
    if challist is not None:
        for chal in challist.find_all("tr"):
            user_name = chal.select("td > a[href]")[1]
            if user_name.get_text() != "[ NULL ]":
                continue

            status = chal.select_one("td > span")
            if status["data-res"] != "AC":
                continue

            problem_name = chal.select_one("td > a[title]")
            # if problem_name["title"] in const.NOT_NEED_SEARCH:
            #     continue

            chal_link = user_name["href"]

            print(problem_name["title"], f"http:{chal_link}")
