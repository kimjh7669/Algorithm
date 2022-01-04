## my solution
from queue import PriorityQueue
def solution(jobs):
    answer = 0
    jobs.sort(key=lambda x:x[0])
    num_jobs = len(jobs)
    cur_time = 0
    num_progressed = 0
    num_put = 0
    que = PriorityQueue()
    while num_progressed != num_jobs:
        while True:
            if num_put >= num_jobs:
                break
            stime, ptime = jobs[num_put]
            if stime <= cur_time:
                answer += cur_time - stime
                num_put += 1
                que.put(ptime)
            else:
                break
        if que.qsize() == 0:
            cur_time += 1
            continue
        progressing_time = que.get()
        cur_time += progressing_time
        num_progressed += 1
        answer += (que.qsize()+1) * progressing_time
    return int(answer/num_jobs)
  
  
## Second solution from blog posting
# import heapq
# def solution(jobs):
#     answer, now, i = 0, 0, 0
#     start = -1
#     heap = []
#     while i != len(jobs):
#         for stime, ptime in jobs:
#             if start < stime <= now:
#                 heapq.heappush(heap, [ptime, stime])
#         if len(heap) > 0:
#             cur_ptime, cur_stime = heapq.heappop(heap)
#             start = now
#             now += cur_ptime
#             answer += now - cur_stime
#             i += 1
#         else:
#             now += 1
#     return int(answer/ len(jobs))
