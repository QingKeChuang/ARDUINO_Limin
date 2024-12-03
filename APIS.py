from os import system
from libs.APIS.search_api import *


def DownLoadByUrl(path, url):
    system('pyncm --output "{}" --quality lossless "{}"  --load login.session'.format(path, url))


def DownloadByName(path, name):
    result = SearchApi(name)
    system('pyncm --output "{}" --quality lossless "{}"  --load "login.session"'.format(path, result.SongUrl))
