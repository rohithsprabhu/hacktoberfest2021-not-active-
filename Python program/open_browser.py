import argparse
import webbrowser
import validators


def navigate_to(webpage: str) -> None:
    if validators.url(webpage):
        webbrowser.open(webpage)
    else:
        raise Exception("Bad URL")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Open a webpage.')
    parser.add_argument('url', metavar='url', type=str,
                        help="The URL to navigate to.")
    args = parser.parse_args()
    navigate_to(args.url)
