[10:30 PM] BINILRAJ ADHIKARI
import matplotlib.pyplot as pltfrom matplotlib.pyplot import figurefigure(figsize=(12, 10))a = list(range(10))b =  [2.5*i for i in a]m = [0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5]c = 0cost = []for j in range(len(m)):  hypothesis = [m[j]*i+c for i in a]  diff_sq = [(b[i]-hypothesis[i])**2 for i in range(len(b))]  cost_func = (1/2*len(b))*sum(diff_sq)   cost.append(cost_func)print(cost)plt.plot(m,cost)

