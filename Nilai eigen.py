import numpy as np

print("MENCARI NILAI EIGEN")
print("NAMA KELOMPOK")
print("Izzudin Adian Khusaini")

#misalkan matriks
A = np.mat("1 -3 3; 3 -5 3; 6 6 4")

print("A : \n", A)

eigenvalue,eigenvector = np.linalg.eig(A)

#maka nilai eigen dan nilai vector nya 
print("Nilai Eigen : \n", eigenvalue)
print("Nilai Vector : \n", eigenvector)
