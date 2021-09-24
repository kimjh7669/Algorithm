from collections import defaultdict
from collections import OrderedDict


def solution(genres, plays):
    answer = []
    gp_dict = {}
    d = defaultdict(dict)
    sorted_genres = []
    gp_dict = dict(zip(genres,plays))
    gp_dict = sorted(gp_dict.items(), key=lambda item: item[1], reverse=True)

    for i,(g,p) in enumerate(gp_dict):
        sorted_genres.append(g)

    for unum in range(len(sorted_genres)):
        for i,(g,p) in enumerate(zip(genres,plays)):
            if g ==sorted_genres[unum]:
                d[g][i] = p

    #make a sorted dictionary by inner values
    d = {
    outer_key: {
        inner_key: inner_value for inner_key, inner_value in
        sorted(inner_dict.items(), key=lambda d: -d[1])
    }
    for outer_key, inner_dict in d.items()} 

    d = dict(sorted(d.items(), key=lambda x: sum(x[1].values()), reverse=True))

    for outker_key, inner_dict in d.items():
        count = 0
        for key in inner_dict:
            count +=1
            if count>2:
                break
            else:
                answer.append(key)
    return answer
