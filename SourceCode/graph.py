import matplotlib.pyplot as plt
import matplotlib.ticker as ticker

import numpy as np


# fig, ax = plt.subplots()


cTime = [.0072, .01202, 1.2107]
pythonTime = [.006508, .0102, 1.8901]
bashTime = [.002, .032, 8.299]

oneThou = [.006508, .0072, .002]
hundThou = [.0102, .01202, .032]
tenMil = [1.8901, 1.2107, 8.299]

langs = ('Python', 'C', 'Bash')
y_pos = np.arange(len(langs))
plt.bar(y_pos, oneThou)
plt.xticks(y_pos + .3, langs)
plt.ylabel('Time (sec)')
plt.title("1,000 Records")
plt.show()

langs = ('Python', 'C', 'Bash')
y_pos = np.arange(len(langs))
plt.bar(y_pos, hundThou)
plt.xticks(y_pos + .3, langs)
plt.ylabel('Time (sec)')
plt.title("100,000 Records")
plt.show()

langs = ('Python', 'C', 'Bash')
y_pos = np.arange(len(tenMil))
plt.bar(y_pos, tenMil)
plt.xticks(y_pos + .3, langs)
plt.ylabel('Time (sec)')
plt.title("10,000,000 Records")
plt.show()