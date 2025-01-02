/*
n: số tác vụ cần xử lý 
b: số tác tối đa 
t: thời gian bắt đàu của tác vụ
d: tgian xử lý tác vụ đó 
process: tgian hoàn thành của tác vụ xử lý gần nhất 
q: hàng đợi 
*/

proces = 0
for 1 -> n 
cin >> t >> d
    while (q.fornt() <= t)
        q.pop()

    if (q.size() <= b)
        process = max(process,t) + d
        q.push(process)
    else -1

n = 4 , b = 2
t = 1 , proces = 4 
q: [4]
t = 2, process = max(4,2) + 4 = 8
q : [4,8]

t = 5, proces = max(8,5) + 2 = 10
q : [4,8,10]

t = 6 -1
