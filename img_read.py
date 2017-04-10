import os
import numpy as np
import cv2
import matplotlib.pyplot as plt

def read_img(img_path):
    print "TEST START!"
    img = cv2.imread(img_path)
    plt.imshow(img)
    plt.show()
    print "TEST END!"
    return img


def print_arr(param):
    print param
    # read_img(param)
    da = np.zeros((2,2))
    print da
    return 1


if __name__ == "__main__":
    # read_img()
    print_arr()
    print "program end!"