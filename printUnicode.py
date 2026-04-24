import requests
from bs4 import BeautifulSoup

def print_characters(url: str) -> None:
    response = requests.get(url, headers={"User-Agent":"Mozilla/5.0"})
    response.raise_for_status()

    soup = BeautifulSoup(response.text, "html.parser")

    print(soup)

if __name__ == "__main__":
    import sys
    if len(sys.argv) < 2:
        sys.exit(1)
    print_characters(sys.argv[1])