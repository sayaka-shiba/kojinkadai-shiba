import math

for angle in range(0,361,15):
    rad = math.radians(angle)
    sin_val =  math.sin(rad)
    cos_val = math.sin(rad)

    if abs(cos_val) < 1e-10:
        tan_val = "undefined"
    else:
        tan = f"{math.tan(rad):.3f}"

    print(f"角度: {angle:3}° sin: {sin_val:.3f} cos: {cos_val:.3f} tan:{tan_val}")

import math

for angle in range(0,361,15):
    rad = math.radians(angle)
    sin_val = math.sin(rad)
    cos_val = math.cos(rad)
    tan_val = math.tan(rad)

    print(f"角度: {angle:3}° sin: {sin_val:.3f} cos: {cos_val:.3f} tan:{tan_val:.3f}")