#!/usr/bin/env python 
# -*- coding: utf-8 -*-

import os
from PIL import Image
import matplotlib.pyplot as plt

img = Image.open(os.path.join('/home/lu/图片', '20240105-001033' + '.jpg'))

plt.figure("Image") # 图像窗口名称
plt.imshow(img)
plt.axis('on') # 关掉坐标轴为 off
plt.title('image') # 图像题目
plt.show()