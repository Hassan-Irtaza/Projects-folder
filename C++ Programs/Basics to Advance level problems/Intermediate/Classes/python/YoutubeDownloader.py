from pytube import youtube
from sys import argv

print("Enter the Youtube link: ")
youtubelink =  str(input())

link = argv[1]
yt = youtube(link)

print("Title: " , yt.title)

yd = yt.streams.get_highest_resolution()

yd.download(youtubelink)